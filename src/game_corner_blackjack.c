#include "game_corner_blackjack.h"
#include "global.h"
#include "malloc.h"
#include "bg.h"
#include "coins.h"
#include "decompress.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "field_message_box.h"
#include "international_string_util.h"
#include "m4a.h"
#include "main.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "palette_util.h"
#include "random.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "tv.h"
#include "window.h"
#include "constants/coins.h"
#include "constants/flags.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/vars.h"
#include "scanline_effect.h"
#include "pokemon_storage_system.h"
#include "string_util.h"
#include "field_specials.h"

enum
{
    HIT_PLAY_CARD,
    HIT_1,
    HIT_CHECK_SCORE,
};

enum
{
    DOUBLE_0,
    DOUBLE_1,
    DOUBLE_2,
    DOUBLE_3,
    DOUBLE_4,
};

enum
{
    hitBJ_0,
    hitBJ_1,
    hitBJ_2,
};

enum
{
    STAND_0,
    STAND_1,
    STAND_CHECK_INSURANCE,
    STAND_3,
    STAND_4,
    STAND_5,
};

enum
{
    WIN_0,
    WIN_1,
    WIN_2,
    WIN_3,
    WIN_4,
};

enum
{
    LOSE_0,
    LOSE_1,
    LOSE_2,
};

enum
{
    BUST_0,
    BUST_1,
    BUST_2,
};

enum
{
    PUSH_0,
    PUSH_1,
    PUSH_2,
    PUSH_3,
    PUSH_4,
};

enum
{
    BJ_STATE_INIT,
    BJ_STATE_PROCESS_INPUT,
    BJ_STATE_COMPLETED_WAIT_FOR_SOUND,
    BJ_STATE_PROCESS_COMPLETED_INPUT,
    BJ_STATE_START_EXIT,
    BJ_STATE_EXIT,
};

enum {
    SPR_CREDIT_DIG_1,
    SPR_CREDIT_DIG_10,
    SPR_CREDIT_DIG_100,
    SPR_CREDIT_DIG_1000,
};

enum {
    SPR_PLAYER_DIG_1,
    SPR_PLAYER_DIG_10,
};

enum {
    SPR_DEALER_DIG_1,
    SPR_DEALER_DIG_10,
};
// 0 = Bet, 1 = Hit, 2 = Double, 3 = Insurance, 4 = None
enum
{
    OPTION_BET,
    OPTION_HIT,
    OPTION_DOUBLE,
    OPTION_INSURANCE,
    OPTION_NONE,
};

enum {
    CARD_HEARTS_2,
    CARD_HEARTS_3,
    CARD_HEARTS_4,
    CARD_HEARTS_5,
    CARD_HEARTS_6,
    CARD_HEARTS_7,
    CARD_HEARTS_8,
    CARD_HEARTS_9,
    CARD_HEARTS_10,
    CARD_HEARTS_JACK,
    CARD_HEARTS_QUEEN,
    CARD_HEARTS_KING,
    CARD_HEARTS_ACE,
    CARD_CLUBS_2,
    CARD_CLUBS_3,
    CARD_CLUBS_4,
    CARD_CLUBS_5,
    CARD_CLUBS_6,
    CARD_CLUBS_7,
    CARD_CLUBS_8,
    CARD_CLUBS_9,
    CARD_CLUBS_10,
    CARD_CLUBS_JACK,
    CARD_CLUBS_QUEEN,
    CARD_CLUBS_KING,
    CARD_CLUBS_ACE,
    CARD_DIAMONDS_2,
    CARD_DIAMONDS_3,
    CARD_DIAMONDS_4,
    CARD_DIAMONDS_5,
    CARD_DIAMONDS_6,
    CARD_DIAMONDS_7,
    CARD_DIAMONDS_8,
    CARD_DIAMONDS_9,
    CARD_DIAMONDS_10,
    CARD_DIAMONDS_JACK,
    CARD_DIAMONDS_QUEEN,
    CARD_DIAMONDS_KING,
    CARD_DIAMONDS_ACE,
    CARD_SPADES_2,
    CARD_SPADES_3,
    CARD_SPADES_4,
    CARD_SPADES_5,
    CARD_SPADES_6,
    CARD_SPADES_7,
    CARD_SPADES_8,
    CARD_SPADES_9,
    CARD_SPADES_10,
    CARD_SPADES_JACK,
    CARD_SPADES_QUEEN,
    CARD_SPADES_KING,
    CARD_SPADES_ACE,
    CARD_COUNT,
};

#define SPR_CREDIT_DIGITS SPR_CREDIT_DIG_1
#define SPR_PLAYER_DIGITS SPR_PLAYER_DIG_1
#define SPR_DEALER_DIGITS SPR_DEALER_DIG_1

#define SPR_CREDIT_DIG_1 0
#define SPR_CREDIT_DIG_10 1
#define SPR_CREDIT_DIG_100 2
#define SPR_CREDIT_DIG_1000 3

#define MAX_SPRITES_CREDIT 4
#define MAX_SPRITES_PLAYER 2
#define MAX_SPRITES_DEALER 2

#define MAX_PLAYER_CARDS 9
#define MAX_DEALER_CARDS 9

#define CARD_SCORE_2     2
#define CARD_SCORE_3     3
#define CARD_SCORE_4     4
#define CARD_SCORE_5     5
#define CARD_SCORE_6     6
#define CARD_SCORE_7     7
#define CARD_SCORE_8     8
#define CARD_SCORE_9     9
#define CARD_SCORE_10    10
#define CARD_SCORE_FACE  10
#define CARD_SCORE_ACE   0

#define CARD_SCORE_ACE_EXPANDED  11
#define CARD_SCORE_ACE_SHURNK    1
#define CARD_SCORE_BLACK_JACK    21

struct BlackJack {
    u8 state;
    //
    u8 numPlayerCards;
    u8 numDealerCards;
    u8 cursorSpriteId;
    u8 CreditSpriteIds[MAX_SPRITES_CREDIT];
    u8 PlayerSpriteIds[MAX_SPRITES_PLAYER];
    u8 DealerSpriteIds[MAX_SPRITES_DEALER];
    u8 option1SpriteId;
    u8 option2SpriteId;
    u8 option3SpriteId;
    // Player card IDs and numbers (to store their sprites and values)
    u8 playerCardIds[MAX_PLAYER_CARDS];
    u8 playerCardNumbers[MAX_PLAYER_CARDS];

    // Dealer card IDs and numbers
    u8 dealerCardIds[MAX_DEALER_CARDS];
    u8 dealerCardNumbers[MAX_DEALER_CARDS];
    //                        Facedown Sprite ID
    u8 DealerFaceDownId;
    u8 LogoId;

    u32 waitTimer;
    u8 hitState;
    u8 doubleState;
    u8 hitBJState;
    u8 standState;
    u8 winState;
    u8 loseState;
    u8 bustState;
    u8 pushState;
    u8 hasBlackJack:1;
    u8 clearBlackJack:1;
    u8 insuranceBet:1;
    u8 AceAdjustPlayer:1;
    u8 AceAdjustDealer:1;
    u8 optionMode:3;
    u8 exitToggle:1;
    u8 unused:7;
    u8 dealerScore;
    u8 playerScore;
    u16 betBlackJack;
    u16 optionTileNum1;
    u16 optionTileNum2;
    u16 optionTileNum3;
};

static EWRAM_DATA struct BlackJack *sBlackJack = NULL;
static EWRAM_INIT u8 sTextWindowId = 1;

static void FadeToBJScreen(u8 taskId);
static void InitBJScreen(void);
static void BJVBlankCallback(void);
static void CreateCursorSprite(void);
static void CreateOptions(void);
static void AdjustCards(void);
static void CreateFacedown(void);
static void ShuffleCards(void);
static void UpdateCards(void);
static void SetCardSprite(u8 cardId, u8 cardNum, u8 cardIndex, u8 isPlayerCard);
static void MoveCursor(int direction);
static void StartExitBJ(void);
static void ExitBJ(void);
static void HandleInput(void);
static void BJMain(u8 taskId);
static void HandleInput_BJComplete(void);
static void PrintInitMessage(void);
static void AButton(void);

//BlackJack
static const u8 sText_Bust[] = _("BUST!");
static const u8 sText_YouLose[] = _("You lose!");
static const u8 sText_YouWin[] = _("You win!");
static const u8 sText_Push[] = _("PUSH!");
static const u8 sText_BlackJack[] = _("BLACKJACK!");
static const u8 sText_Betting[] = _("Your current\nbet is ¥{STR_VAR_1}.");
static const u8 sText_NoBetting[] = _("Your current\nbet is ¥0.");
static const u8 sText_NoCoins[] = _("You do not have\nenough Coins.");
static const u8 sHelpBarHitStandText[] = _("{DPAD_UPDOWN}PICK  {A_BUTTON}SELECT  {B_BUTTON}EXIT");

static const u32 sBJBackgroundGfx[] = INCBIN_U32("graphics/blackjack/background_tiles.4bpp.lz");
static const u8 sBJBackgroundTilemap[] = INCBIN_U8("graphics/blackjack/background_tiles.bin.lz");
static const u16 sBJBackgroundPalette[] = INCBIN_U16("graphics/blackjack/background.gbapal");

static const u32 gCredits_Gfx[] = INCBIN_U32("graphics/blackjack/digits.4bpp.lz");
static const u16 sCredit_Pal[] = INCBIN_U16("graphics/blackjack/digits.gbapal");
static const u32 gPlayer_Gfx[] = INCBIN_U32("graphics/blackjack/digits_player.4bpp.lz");
static const u32 gDealer_Gfx[] = INCBIN_U32("graphics/blackjack/digits_dealer.4bpp.lz");
static const u16 sPlayer_Pal[] = INCBIN_U16("graphics/blackjack/digits_player.gbapal");
static const u16 sDealer_Pal[] = INCBIN_U16("graphics/blackjack/digits_dealer.gbapal");

static const u32 gOption_1_Gfx[] = INCBIN_U32("graphics/blackjack/option_1.4bpp.lz");
static const u32 gOption_2_Gfx[] = INCBIN_U32("graphics/blackjack/option_2.4bpp.lz");
static const u32 gOption_3_Gfx[] = INCBIN_U32("graphics/blackjack/option_3.4bpp.lz");

static const u32 gCards_2_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_2.4bpp.lz");
static const u32 gCards_3_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_3.4bpp.lz");
static const u32 gCards_4_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_4.4bpp.lz");
static const u32 gCards_5_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_5.4bpp.lz");
static const u32 gCards_6_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_6.4bpp.lz");
static const u32 gCards_7_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_7.4bpp.lz");
static const u32 gCards_8_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_8.4bpp.lz");
static const u32 gCards_9_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_9.4bpp.lz");
static const u32 gCards_10_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_10.4bpp.lz");
static const u32 gCards_J_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_j.4bpp.lz");
static const u32 gCards_Q_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_q.4bpp.lz");
static const u32 gCards_K_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_k.4bpp.lz");
static const u32 gCards_A_Hearts_Gfx[] = INCBIN_U32("graphics/blackjack/cards/hearts/cards_hearts_a.4bpp.lz");

static const u32 gCards_2_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_2.4bpp.lz");
static const u32 gCards_3_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_3.4bpp.lz");
static const u32 gCards_4_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_4.4bpp.lz");
static const u32 gCards_5_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_5.4bpp.lz");
static const u32 gCards_6_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_6.4bpp.lz");
static const u32 gCards_7_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_7.4bpp.lz");
static const u32 gCards_8_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_8.4bpp.lz");
static const u32 gCards_9_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_9.4bpp.lz");
static const u32 gCards_10_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_10.4bpp.lz");
static const u32 gCards_J_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_j.4bpp.lz");
static const u32 gCards_Q_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_q.4bpp.lz");
static const u32 gCards_K_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_k.4bpp.lz");
static const u32 gCards_A_Diamonds_Gfx[] = INCBIN_U32("graphics/blackjack/cards/diamonds/cards_diamonds_a.4bpp.lz");

static const u32 gCards_2_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_2.4bpp.lz");
static const u32 gCards_3_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_3.4bpp.lz");
static const u32 gCards_4_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_4.4bpp.lz");
static const u32 gCards_5_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_5.4bpp.lz");
static const u32 gCards_6_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_6.4bpp.lz");
static const u32 gCards_7_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_7.4bpp.lz");
static const u32 gCards_8_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_8.4bpp.lz");
static const u32 gCards_9_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_9.4bpp.lz");
static const u32 gCards_10_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_10.4bpp.lz");
static const u32 gCards_J_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_j.4bpp.lz");
static const u32 gCards_Q_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_q.4bpp.lz");
static const u32 gCards_K_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_k.4bpp.lz");
static const u32 gCards_A_Clubs_Gfx[] = INCBIN_U32("graphics/blackjack/cards/clubs/cards_clubs_a.4bpp.lz");

static const u32 gCards_2_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_2.4bpp.lz");
static const u32 gCards_3_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_3.4bpp.lz");
static const u32 gCards_4_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_4.4bpp.lz");
static const u32 gCards_5_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_5.4bpp.lz");
static const u32 gCards_6_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_6.4bpp.lz");
static const u32 gCards_7_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_7.4bpp.lz");
static const u32 gCards_8_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_8.4bpp.lz");
static const u32 gCards_9_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_9.4bpp.lz");
static const u32 gCards_10_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_10.4bpp.lz");
static const u32 gCards_J_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_j.4bpp.lz");
static const u32 gCards_Q_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_q.4bpp.lz");
static const u32 gCards_K_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_k.4bpp.lz");
static const u32 gCards_A_Spades_Gfx[] = INCBIN_U32("graphics/blackjack/cards/spades/cards_spades_a.4bpp.lz");

static const u32 gFaceDown_Gfx[] = INCBIN_U32("graphics/blackjack/facedown.4bpp.lz");
static const u16 sCards_Pal[] = INCBIN_U16("graphics/blackjack/cards.gbapal");

static const u32 sCursor_Gfx[] = INCBIN_U32("graphics/blackjack/cursor.4bpp.lz");
static const u16 sCursorTiles_Pal[] = INCBIN_U16("graphics/blackjack/cursor.gbapal");

static const u32 sPopup_Gfx[] = INCBIN_U32("graphics/blackjack/popup.4bpp.lz");

static void ShowHelpBar(const u8 *str);
static void SetCreditDigits(u16);
static void SetPlayerDigits(u16);
static void SetDealerDigits(u16);
static void CreatePlayerSprites();
static void CreateCreditSprites();
static void CreateDealerSprites();
static void CreatePopUpSprite();

#define BJ_BG_BASE 1
#define BJ_WIN_MENU 2

struct PlayingCard {
    u8 points;
    const struct CompressedSpriteSheet sheet;
    const struct SpriteTemplate template;
};

struct CardPosition {
    s16 x;
    s16 y;
    u8 priority;
};

static const struct CardPosition cardPositions[18] = {
    // Player cards (x, y, priority)
    {144, 120, 9}, {112, 120, 8}, {80, 120, 7}, {48, 120, 6}, {16, 120, 5},
    {64, 120, 4}, {48, 120, 3}, {32, 120, 2}, {16, 120, 1},
    
    // Dealer cards (x, y, priority)
    {16, 56, 9}, {48, 56, 8}, {80, 56, 7}, {112, 56, 6}, {144, 56, 5},
    {96, 56, 4}, {112, 56, 3}, {128, 56, 2}, {144, 56, 1}
};

static const struct BgTemplate sBJBgTemplates[] = {
    {
       .bg = BJ_BG_BASE,
       .charBaseIndex = 2,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 3,
       .baseTile = 0
   },
   {
        .bg = BJ_WIN_MENU,
        .charBaseIndex = 0,
        .mapBaseIndex = 0x17,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    }
};

static const struct WindowTemplate sBJWinTemplates[] = {
    {
        .bg = BJ_BG_BASE,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 11,
        .baseBlock = 0x73,
    },
    {
        .bg = BJ_WIN_MENU,
        .tilemapLeft = 3,
        .tilemapTop = 15,
        .width = 14,
        .height = 4,
        .paletteNum = 0xF,
        .baseBlock = 0x194,        
    },
    DUMMY_WIN_TEMPLATE,
};

#define PALTAG_INTERFACE 1
#define PALTAG_INTERFACEPLAYER 2
#define PALTAG_INTERFACEDEALER 3
#define PALTAG_CURSOR 4
#define PALTAG_OPTION1 5
#define PALTAG_OPTION2 6
#define PALTAG_OPTION3 7
#define PALTAG_CARDS_HEARTS 8
#define PALTAG_FACEDOWN 9
#define PALTAG_CARDS_CLUBS 10
#define PALTAG_CARDS_DIAMONDS 11
#define PALTAG_CARDS_SPADES 12
#define PALTAG_POPUP 13

#define GFXTAG_CREDIT_DIGIT 1
#define GFXTAG_PLAYER_DIGIT 2
#define GFXTAG_DEALER_DIGIT 3
#define GFXTAG_CURSOR 4
#define GFXTAG_OPTION1 5
#define GFXTAG_OPTION2 6
#define GFXTAG_OPTION3 7
#define GFXTAG_FACEDOWN 8

#define GFXTAG_CARDS_HEARTS_2 9
#define GFXTAG_CARDS_HEARTS_3 10
#define GFXTAG_CARDS_HEARTS_4 11
#define GFXTAG_CARDS_HEARTS_5 12
#define GFXTAG_CARDS_HEARTS_6 13
#define GFXTAG_CARDS_HEARTS_7 14
#define GFXTAG_CARDS_HEARTS_8 15
#define GFXTAG_CARDS_HEARTS_9 16
#define GFXTAG_CARDS_HEARTS_10 17
#define GFXTAG_CARDS_HEARTS_J 18
#define GFXTAG_CARDS_HEARTS_Q 19
#define GFXTAG_CARDS_HEARTS_K 20
#define GFXTAG_CARDS_HEARTS_A 21

#define GFXTAG_CARDS_DIAMONDS_2 22
#define GFXTAG_CARDS_DIAMONDS_3 23
#define GFXTAG_CARDS_DIAMONDS_4 24
#define GFXTAG_CARDS_DIAMONDS_5 25
#define GFXTAG_CARDS_DIAMONDS_6 26
#define GFXTAG_CARDS_DIAMONDS_7 27
#define GFXTAG_CARDS_DIAMONDS_8 28
#define GFXTAG_CARDS_DIAMONDS_9 29
#define GFXTAG_CARDS_DIAMONDS_10 30
#define GFXTAG_CARDS_DIAMONDS_J 31
#define GFXTAG_CARDS_DIAMONDS_Q 32
#define GFXTAG_CARDS_DIAMONDS_K 33
#define GFXTAG_CARDS_DIAMONDS_A 34

#define GFXTAG_CARDS_CLUBS_2 35
#define GFXTAG_CARDS_CLUBS_3 36
#define GFXTAG_CARDS_CLUBS_4 37
#define GFXTAG_CARDS_CLUBS_5 38
#define GFXTAG_CARDS_CLUBS_6 39
#define GFXTAG_CARDS_CLUBS_7 40
#define GFXTAG_CARDS_CLUBS_8 41
#define GFXTAG_CARDS_CLUBS_9 42
#define GFXTAG_CARDS_CLUBS_10 43
#define GFXTAG_CARDS_CLUBS_J 44
#define GFXTAG_CARDS_CLUBS_Q 45
#define GFXTAG_CARDS_CLUBS_K 46
#define GFXTAG_CARDS_CLUBS_A 47

#define GFXTAG_CARDS_SPADES_2 48
#define GFXTAG_CARDS_SPADES_3 49
#define GFXTAG_CARDS_SPADES_4 50
#define GFXTAG_CARDS_SPADES_5 51
#define GFXTAG_CARDS_SPADES_6 52
#define GFXTAG_CARDS_SPADES_7 53
#define GFXTAG_CARDS_SPADES_8 54
#define GFXTAG_CARDS_SPADES_9 55
#define GFXTAG_CARDS_SPADES_10 56
#define GFXTAG_CARDS_SPADES_J 57
#define GFXTAG_CARDS_SPADES_Q 58
#define GFXTAG_CARDS_SPADES_K 59
#define GFXTAG_CARDS_SPADES_A 60

#define GFXTAG_POPUP 61

#define STD_WINDOW_PALETTE_NUM 14
#define STD_WINDOW_PALETTE_SIZE PLTT_SIZEOF(10)

static const struct SpritePalette sSpritePalettes[] =
{
    { .data = sCredit_Pal,      .tag = PALTAG_INTERFACE },
    { .data = sPlayer_Pal,        .tag = PALTAG_INTERFACEPLAYER },
    { .data = sDealer_Pal,        .tag = PALTAG_INTERFACEDEALER },
    { .data = sCursorTiles_Pal, .tag = PALTAG_CURSOR },
    { .data = sCursorTiles_Pal, .tag = PALTAG_OPTION1 },
    { .data = sCursorTiles_Pal, .tag = PALTAG_OPTION2 },
    { .data = sCursorTiles_Pal, .tag = PALTAG_OPTION3 },
    { .data = sCards_Pal,        .tag = PALTAG_CARDS_HEARTS },
    { .data = sCards_Pal,        .tag = PALTAG_FACEDOWN },
    { .data = sCards_Pal,        .tag = PALTAG_CARDS_CLUBS },
    { .data = sCards_Pal,        .tag = PALTAG_CARDS_DIAMONDS },
    { .data = sCards_Pal,        .tag = PALTAG_CARDS_SPADES },
    { .data = sCursorTiles_Pal, .tag = PALTAG_POPUP },
    {}
};

static const struct CompressedSpriteSheet sSpriteSheet_Cursor =
{
    .data = sCursor_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CURSOR,
};

static const struct CompressedSpriteSheet sSpriteSheet_Popup =
{
    .data = sPopup_Gfx,
    .size = 0x800,
    .tag = GFXTAG_POPUP,
};

static const struct CompressedSpriteSheet sSpriteSheet_Option1 =
{
    .data = gOption_1_Gfx,
    .size = 0x300,
    .tag = GFXTAG_OPTION1,
};

static const struct CompressedSpriteSheet sSpriteSheet_Option2 =
{
    .data = gOption_2_Gfx,
    .size = 0x300,
    .tag = GFXTAG_OPTION2,
};

static const struct CompressedSpriteSheet sSpriteSheet_Option3 =
{
    .data = gOption_3_Gfx,
    .size = 0x400,
    .tag = GFXTAG_OPTION3,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_2 =
{
    .data = gCards_2_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_2,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_3 =
{
    .data = gCards_3_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_3,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_4 =
{
    .data = gCards_4_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_4,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_5 =
{
    .data = gCards_5_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_5,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_6 =
{
    .data = gCards_6_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_6,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_7 =
{
    .data = gCards_7_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_7,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_8 =
{
    .data = gCards_8_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_8,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_9 =
{
    .data = gCards_9_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_9,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_10 =
{
    .data = gCards_10_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_10,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_J =
{
    .data = gCards_J_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_J,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_Q =
{
    .data = gCards_Q_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_Q,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_K =
{
    .data = gCards_K_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_K,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Hearts_A =
{
    .data = gCards_A_Hearts_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_HEARTS_A,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_2 =
{
    .data = gCards_2_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_2,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_3 =
{
    .data = gCards_3_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_3,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_4 =
{
    .data = gCards_4_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_4,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_5 =
{
    .data = gCards_5_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_5,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_6 =
{
    .data = gCards_6_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_6,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_7 =
{
    .data = gCards_7_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_7,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_8 =
{
    .data = gCards_8_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_8,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_9 =
{
    .data = gCards_9_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_9,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_10 =
{
    .data = gCards_10_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_10,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_J =
{
    .data = gCards_J_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_J,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_Q =
{
    .data = gCards_Q_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_Q,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_A =
{
    .data = gCards_A_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_A,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Clubs_K =
{
    .data = gCards_K_Clubs_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_CLUBS_K,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_2 =
{
    .data = gCards_2_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_2,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_3 =
{
    .data = gCards_3_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_3,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_4 =
{
    .data = gCards_4_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_4,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_5 =
{
    .data = gCards_5_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_5,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_6 =
{
    .data = gCards_6_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_6,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_7 =
{
    .data = gCards_7_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_7,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_8 =
{
    .data = gCards_8_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_8,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_9 =
{
    .data = gCards_9_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_9,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_10 =
{
    .data = gCards_10_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_10,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_J =
{
    .data = gCards_J_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_J,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_Q =
{
    .data = gCards_Q_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_Q,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_K =
{
    .data = gCards_K_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_K,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Diamonds_A =
{
    .data = gCards_A_Diamonds_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_DIAMONDS_A,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_2 =
{
    .data = gCards_2_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_2,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_3 =
{
    .data = gCards_3_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_3,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_4 =
{
    .data = gCards_4_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_4,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_5 =
{
    .data = gCards_5_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_5,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_6 =
{
    .data = gCards_6_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_6,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_7 =
{
    .data = gCards_7_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_7,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_8 =
{
    .data = gCards_8_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_8,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_9 =
{
    .data = gCards_9_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_9,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_10 =
{
    .data = gCards_10_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_10,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_J =
{
    .data = gCards_J_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_J,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_Q =
{
    .data = gCards_Q_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_Q,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_K =
{
    .data = gCards_K_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_K,
};

static const struct CompressedSpriteSheet sSpriteSheet_Cards_Spades_A =
{
    .data = gCards_A_Spades_Gfx,
    .size = 0x400,
    .tag = GFXTAG_CARDS_SPADES_A,
};

static const struct CompressedSpriteSheet sSpriteSheet_Facedown =
{
    .data = gFaceDown_Gfx,
    .size = 0x400,
    .tag = GFXTAG_FACEDOWN,
};

static const struct OamData sOamData_Cards_Hearts =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x64),
    .size = SPRITE_SIZE(32x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Cards_Diamonds =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x64),
    .size = SPRITE_SIZE(32x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Cards_Clubs =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x64),
    .size = SPRITE_SIZE(32x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Cards_Spades =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x64),
    .size = SPRITE_SIZE(32x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Facedown =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x64),
    .size = SPRITE_SIZE(32x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Cursor =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x32),
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Popup =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Option1 =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Option2 =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 0,
};

static const struct OamData sOamData_Option3 =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x16),
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 0,
};

static const struct SpriteTemplate sSpriteTemplate_Facedown =
{
    .tileTag = GFXTAG_FACEDOWN,
    .paletteTag = PALTAG_FACEDOWN,
    .oam = &sOamData_Facedown,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Popup =
{
    .tileTag = GFXTAG_POPUP,
    .paletteTag = PALTAG_POPUP,
    .oam = &sOamData_Popup,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_2 =
{
    .tileTag = GFXTAG_CARDS_HEARTS_2,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_3 =
{
    .tileTag = GFXTAG_CARDS_HEARTS_3,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_4 =
{
    .tileTag = GFXTAG_CARDS_HEARTS_4,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_5 =
{
    .tileTag = GFXTAG_CARDS_HEARTS_5,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_6 =
{
    .tileTag = GFXTAG_CARDS_HEARTS_6,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_7 =
{
    .tileTag = GFXTAG_CARDS_HEARTS_7,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_8 =
{
    .tileTag = GFXTAG_CARDS_HEARTS_8,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_9 =
{
    .tileTag = GFXTAG_CARDS_HEARTS_9,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_10 =
{
    .tileTag = GFXTAG_CARDS_HEARTS_10,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_J =
{
    .tileTag = GFXTAG_CARDS_HEARTS_J,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_Q =
{
    .tileTag = GFXTAG_CARDS_HEARTS_Q,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_K =
{
    .tileTag = GFXTAG_CARDS_HEARTS_K,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Hearts_A =
{
    .tileTag = GFXTAG_CARDS_HEARTS_A,
    .paletteTag = PALTAG_CARDS_HEARTS,
    .oam = &sOamData_Cards_Hearts,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_2 =
{
    .tileTag = GFXTAG_CARDS_CLUBS_2,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_3 =
{
    .tileTag = GFXTAG_CARDS_CLUBS_3,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_4 =
{
    .tileTag = GFXTAG_CARDS_CLUBS_4,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_5 =
{
    .tileTag = GFXTAG_CARDS_CLUBS_5,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_6 =
{
    .tileTag = GFXTAG_CARDS_CLUBS_6,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_7 =
{
    .tileTag = GFXTAG_CARDS_CLUBS_7,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_8 =
{
    .tileTag = GFXTAG_CARDS_CLUBS_8,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_9 =
{
    .tileTag = GFXTAG_CARDS_CLUBS_9,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_10 =
{
    .tileTag = GFXTAG_CARDS_CLUBS_10,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_J =
{
    .tileTag = GFXTAG_CARDS_CLUBS_J,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_Q =
{
    .tileTag = GFXTAG_CARDS_CLUBS_Q,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_K =
{
    .tileTag = GFXTAG_CARDS_CLUBS_K,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Clubs_A =
{
    .tileTag = GFXTAG_CARDS_CLUBS_A,
    .paletteTag = PALTAG_CARDS_CLUBS,
    .oam = &sOamData_Cards_Clubs,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_2 =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_2,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_3 =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_3,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_4 =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_4,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_5 =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_5,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_6 =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_6,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_7 =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_7,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_8 =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_8,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_9 =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_9,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_10 =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_10,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_J =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_J,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_Q =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_Q,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_K =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_K,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Diamonds_A =
{
    .tileTag = GFXTAG_CARDS_DIAMONDS_A,
    .paletteTag = PALTAG_CARDS_DIAMONDS,
    .oam = &sOamData_Cards_Diamonds,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_2 =
{
    .tileTag = GFXTAG_CARDS_SPADES_2,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_3 =
{
    .tileTag = GFXTAG_CARDS_SPADES_3,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_4 =
{
    .tileTag = GFXTAG_CARDS_SPADES_4,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_5 =
{
    .tileTag = GFXTAG_CARDS_SPADES_5,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_6 =
{
    .tileTag = GFXTAG_CARDS_SPADES_6,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_7 =
{
    .tileTag = GFXTAG_CARDS_SPADES_7,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_8 =
{
    .tileTag = GFXTAG_CARDS_SPADES_8,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_9 =
{
    .tileTag = GFXTAG_CARDS_SPADES_9,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_10 =
{
    .tileTag = GFXTAG_CARDS_SPADES_10,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_J =
{
    .tileTag = GFXTAG_CARDS_SPADES_J,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_Q =
{
    .tileTag = GFXTAG_CARDS_SPADES_Q,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_K =
{
    .tileTag = GFXTAG_CARDS_SPADES_K,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cards_Spades_A =
{
    .tileTag = GFXTAG_CARDS_SPADES_A,
    .paletteTag = PALTAG_CARDS_SPADES,
    .oam = &sOamData_Cards_Spades,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Cursor =
{
    .tileTag = GFXTAG_CURSOR,
    .paletteTag = PALTAG_CURSOR,
    .oam = &sOamData_Cursor,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Option1 =
{
    .tileTag = GFXTAG_OPTION1,
    .paletteTag = PALTAG_OPTION1,
    .oam = &sOamData_Option1,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Option2 =
{
    .tileTag = GFXTAG_OPTION2,
    .paletteTag = PALTAG_OPTION2,
    .oam = &sOamData_Option2,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSpriteTemplate_Option3 =
{
    .tileTag = GFXTAG_OPTION3,
    .paletteTag = PALTAG_OPTION3,
    .oam = &sOamData_Option3,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

const struct PlayingCard sPlayingCards[CARD_COUNT] =
{
    [CARD_HEARTS_2] =
    {
        .points = CARD_SCORE_2,
        .sheet = sSpriteSheet_Cards_Hearts_2,
        .template = sSpriteTemplate_Cards_Hearts_2,
    },
    [CARD_HEARTS_3] =
    {
        .points = CARD_SCORE_3,
        .sheet = sSpriteSheet_Cards_Hearts_3,
        .template = sSpriteTemplate_Cards_Hearts_3,
    },
    [CARD_HEARTS_4] =
    {
        .points = CARD_SCORE_4,
        .sheet = sSpriteSheet_Cards_Hearts_4,
        .template = sSpriteTemplate_Cards_Hearts_4,
    },
    [CARD_HEARTS_5] =
    {
        .points = CARD_SCORE_5,
        .sheet = sSpriteSheet_Cards_Hearts_5,
        .template = sSpriteTemplate_Cards_Hearts_5,
    },
    [CARD_HEARTS_6] =
    {
        .points = CARD_SCORE_6,
        .sheet = sSpriteSheet_Cards_Hearts_6,
        .template = sSpriteTemplate_Cards_Hearts_6,
    },
    [CARD_HEARTS_7] =
    {
        .points = CARD_SCORE_7,
        .sheet = sSpriteSheet_Cards_Hearts_7,
        .template = sSpriteTemplate_Cards_Hearts_7,
    },
    [CARD_HEARTS_8] =
    {
        .points = CARD_SCORE_8,
        .sheet = sSpriteSheet_Cards_Hearts_8,
        .template = sSpriteTemplate_Cards_Hearts_8,
    },
    [CARD_HEARTS_9] =
    {
        .points = CARD_SCORE_9,
        .sheet = sSpriteSheet_Cards_Hearts_9,
        .template = sSpriteTemplate_Cards_Hearts_9,
    },
    [CARD_HEARTS_10] =
    {
        .points = CARD_SCORE_10,
        .sheet = sSpriteSheet_Cards_Hearts_10,
        .template = sSpriteTemplate_Cards_Hearts_10,
    },
    [CARD_HEARTS_JACK] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Hearts_J,
        .template = sSpriteTemplate_Cards_Hearts_J,
    },
    [CARD_HEARTS_QUEEN] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Hearts_Q,
        .template = sSpriteTemplate_Cards_Hearts_Q,
    },
    [CARD_HEARTS_KING] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Hearts_K,
        .template = sSpriteTemplate_Cards_Hearts_K,
    },
    [CARD_HEARTS_ACE] =
    {
        .points = CARD_SCORE_ACE,
        .sheet = sSpriteSheet_Cards_Hearts_A,
        .template = sSpriteTemplate_Cards_Hearts_A,
    },
    [CARD_CLUBS_2] =
    {
        .points = CARD_SCORE_2,
        .sheet = sSpriteSheet_Cards_Clubs_2,
        .template = sSpriteTemplate_Cards_Clubs_2,
    },
    [CARD_CLUBS_3] =
    {
        .points = CARD_SCORE_3,
        .sheet = sSpriteSheet_Cards_Clubs_3,
        .template = sSpriteTemplate_Cards_Clubs_3,
    },
    [CARD_CLUBS_4] =
    {
        .points = CARD_SCORE_4,
        .sheet = sSpriteSheet_Cards_Clubs_4,
        .template = sSpriteTemplate_Cards_Clubs_4,
    },
    [CARD_CLUBS_5] =
    {
        .points = CARD_SCORE_5,
        .sheet = sSpriteSheet_Cards_Clubs_5,
        .template = sSpriteTemplate_Cards_Clubs_5,
    },
    [CARD_CLUBS_6] =
    {
        .points = CARD_SCORE_6,
        .sheet = sSpriteSheet_Cards_Clubs_6,
        .template = sSpriteTemplate_Cards_Clubs_6,
    },
    [CARD_CLUBS_7] =
    {
        .points = CARD_SCORE_7,
        .sheet = sSpriteSheet_Cards_Clubs_7,
        .template = sSpriteTemplate_Cards_Clubs_7,
    },
    [CARD_CLUBS_8] =
    {
        .points = CARD_SCORE_8,
        .sheet = sSpriteSheet_Cards_Clubs_8,
        .template = sSpriteTemplate_Cards_Clubs_8,
    },
    [CARD_CLUBS_9] =
    {
        .points = CARD_SCORE_9,
        .sheet = sSpriteSheet_Cards_Clubs_9,
        .template = sSpriteTemplate_Cards_Clubs_9,
    },
    [CARD_CLUBS_10] =
    {
        .points = CARD_SCORE_10,
        .sheet = sSpriteSheet_Cards_Clubs_10,
        .template = sSpriteTemplate_Cards_Clubs_10,
    },
    [CARD_CLUBS_JACK] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Clubs_J,
        .template = sSpriteTemplate_Cards_Clubs_J,
    },
    [CARD_CLUBS_QUEEN] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Clubs_Q,
        .template = sSpriteTemplate_Cards_Clubs_Q,
    },
    [CARD_CLUBS_KING] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Clubs_K,
        .template = sSpriteTemplate_Cards_Clubs_K,
    },
    [CARD_CLUBS_ACE] =
    {
        .points = CARD_SCORE_ACE,
        .sheet = sSpriteSheet_Cards_Clubs_A,
        .template = sSpriteTemplate_Cards_Clubs_A,
    },
    [CARD_DIAMONDS_2] =
    {
        .points = CARD_SCORE_2,
        .sheet = sSpriteSheet_Cards_Diamonds_2,
        .template = sSpriteTemplate_Cards_Diamonds_2,
    },
    [CARD_DIAMONDS_3] =
    {
        .points = CARD_SCORE_3,
        .sheet = sSpriteSheet_Cards_Diamonds_3,
        .template = sSpriteTemplate_Cards_Diamonds_3,
    },
    [CARD_DIAMONDS_4] =
    {
        .points = CARD_SCORE_4,
        .sheet = sSpriteSheet_Cards_Diamonds_4,
        .template = sSpriteTemplate_Cards_Diamonds_4,
    },
    [CARD_DIAMONDS_5] =
    {
        .points = CARD_SCORE_5,
        .sheet = sSpriteSheet_Cards_Diamonds_5,
        .template = sSpriteTemplate_Cards_Diamonds_5,
    },
    [CARD_DIAMONDS_6] =
    {
        .points = CARD_SCORE_6,
        .sheet = sSpriteSheet_Cards_Diamonds_6,
        .template = sSpriteTemplate_Cards_Diamonds_6,
    },
    [CARD_DIAMONDS_7] =
    {
        .points = CARD_SCORE_7,
        .sheet = sSpriteSheet_Cards_Diamonds_7,
        .template = sSpriteTemplate_Cards_Diamonds_7,
    },
    [CARD_DIAMONDS_8] =
    {
        .points = CARD_SCORE_8,
        .sheet = sSpriteSheet_Cards_Diamonds_8,
        .template = sSpriteTemplate_Cards_Diamonds_8,
    },
    [CARD_DIAMONDS_9] =
    {
        .points = CARD_SCORE_9,
        .sheet = sSpriteSheet_Cards_Diamonds_9,
        .template = sSpriteTemplate_Cards_Diamonds_9,
    },
    [CARD_DIAMONDS_10] =
    {
        .points = CARD_SCORE_10,
        .sheet = sSpriteSheet_Cards_Diamonds_10,
        .template = sSpriteTemplate_Cards_Diamonds_10,
    },
    [CARD_DIAMONDS_JACK] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Diamonds_J,
        .template = sSpriteTemplate_Cards_Diamonds_J,
    },
    [CARD_DIAMONDS_QUEEN] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Diamonds_Q,
        .template = sSpriteTemplate_Cards_Diamonds_Q,
    },
    [CARD_DIAMONDS_KING] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Diamonds_K,
        .template = sSpriteTemplate_Cards_Diamonds_K,
    },
    [CARD_DIAMONDS_ACE] =
    {
        .points = CARD_SCORE_ACE,
        .sheet = sSpriteSheet_Cards_Diamonds_A,
        .template = sSpriteTemplate_Cards_Diamonds_A,
    },
    [CARD_SPADES_2] =
    {
        .points = CARD_SCORE_2,
        .sheet = sSpriteSheet_Cards_Spades_2,
        .template = sSpriteTemplate_Cards_Spades_2,
    },
    [CARD_SPADES_3] =
    {
        .points = CARD_SCORE_3,
        .sheet = sSpriteSheet_Cards_Spades_3,
        .template = sSpriteTemplate_Cards_Spades_3,
    },
    [CARD_SPADES_4] =
    {
        .points = CARD_SCORE_4,
        .sheet = sSpriteSheet_Cards_Spades_4,
        .template = sSpriteTemplate_Cards_Spades_4,
    },
    [CARD_SPADES_5] =
    {
        .points = CARD_SCORE_5,
        .sheet = sSpriteSheet_Cards_Spades_5,
        .template = sSpriteTemplate_Cards_Spades_5,
    },
    [CARD_SPADES_6] =
    {
        .points = CARD_SCORE_6,
        .sheet = sSpriteSheet_Cards_Spades_6,
        .template = sSpriteTemplate_Cards_Spades_6,
    },
    [CARD_SPADES_7] =
    {
        .points = CARD_SCORE_7,
        .sheet = sSpriteSheet_Cards_Spades_7,
        .template = sSpriteTemplate_Cards_Spades_7,
    },
    [CARD_SPADES_8] =
    {
        .points = CARD_SCORE_8,
        .sheet = sSpriteSheet_Cards_Spades_8,
        .template = sSpriteTemplate_Cards_Spades_8,
    },
    [CARD_SPADES_9] =
    {
        .points = CARD_SCORE_9,
        .sheet = sSpriteSheet_Cards_Spades_9,
        .template = sSpriteTemplate_Cards_Spades_9,
    },
    [CARD_SPADES_10] =
    {
        .points = CARD_SCORE_10,
        .sheet = sSpriteSheet_Cards_Spades_10,
        .template = sSpriteTemplate_Cards_Spades_10,
    },
    [CARD_SPADES_JACK] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Spades_J,
        .template = sSpriteTemplate_Cards_Spades_J,
    },
    [CARD_SPADES_QUEEN] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Spades_Q,
        .template = sSpriteTemplate_Cards_Spades_Q,
    },
    [CARD_SPADES_KING] =
    {
        .points = CARD_SCORE_FACE,
        .sheet = sSpriteSheet_Cards_Spades_K,
        .template = sSpriteTemplate_Cards_Spades_K,
    },
    [CARD_SPADES_ACE] =
    {
        .points = CARD_SCORE_ACE,
        .sheet = sSpriteSheet_Cards_Spades_A,
        .template = sSpriteTemplate_Cards_Spades_A,
    },
};

void StartBlackJack(void)
{
    sBlackJack = AllocZeroed(sizeof(struct BlackJack));
    CreateTask(FadeToBJScreen, 0);
}

static void FadeToBJScreen(u8 taskId)
{
    switch (gTasks[taskId].data[0])
    {
    case 0:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].data[0]++;
        break;
    case 1:
        if (!gPaletteFade.active)
        {
            SetMainCallback2(InitBJScreen);
            DestroyTask(taskId);
        }
        break;
    }
}

static const struct CompressedSpriteSheet sSpriteSheets_Interface[] =
{
    {
        .data = gCredits_Gfx,
        .size = 0x280,
        .tag = GFXTAG_CREDIT_DIGIT
    },
    {}
};

static const struct CompressedSpriteSheet sSpriteSheets_PlayerInterface[] =
{
    {
        .data = gPlayer_Gfx,
        .size = 0x280,
        .tag = GFXTAG_PLAYER_DIGIT
    },
    {}
};

static const struct CompressedSpriteSheet sSpriteSheets_DealerInterface[] =
{
    {
        .data = gDealer_Gfx,
        .size = 0x280,
        .tag = GFXTAG_DEALER_DIGIT
    },
    {}
};

static const struct OamData sOam_CreditDigit =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(8x16),
    .size = SPRITE_SIZE(8x16),
    .priority = 2,
};

static const struct SpriteTemplate sSpriteTemplate_CreditDigit =
{
    .tileTag = GFXTAG_CREDIT_DIGIT,
    .paletteTag = PALTAG_INTERFACE,
    .oam = &sOam_CreditDigit,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpriteTemplate sSpriteTemplate_PlayerDigit =
{
    .tileTag = GFXTAG_PLAYER_DIGIT,
    .paletteTag = PALTAG_INTERFACEPLAYER,
    .oam = &sOam_CreditDigit,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpriteTemplate sSpriteTemplate_DealerDigit =
{
    .tileTag = GFXTAG_DEALER_DIGIT,
    .paletteTag = PALTAG_INTERFACEDEALER,
    .oam = &sOam_CreditDigit,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static void BJMainCallback(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
}

static void SetCreditDigits(u16 num)
{
    u8 i;
    u16 d = 1000;

    for (i = 0; i < 4; i++)
    {
        u8 digit = num / d;

        gSprites[sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].invisible = FALSE;
        gSprites[sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].oam.tileNum =
        gSprites[sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].sheetTileStart + (digit * 2);
        gSprites[sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].oam.priority = 2;

        num = num % d;
        d = d / 10;
    }

    for (i = 0; i < 4; i++)
    {
        if (gSprites[sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].invisible)
            gSprites[sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS]].invisible = FALSE;
    }

    BuildOamBuffer();
}

static void SetPlayerDigits(u16 num)
{
    u8 i;
    u16 d = 10;
    bool8 isSingleDigit = num < 10;

    for (i = 0; i < 2; i++)
    {
        u8 digit = num / d;

        gSprites[sBlackJack->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].invisible = FALSE;

        if (i == 0 && isSingleDigit)
            digit = 0;
        else if (i == 1 && isSingleDigit)
            digit = num;

        gSprites[sBlackJack->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].oam.tileNum =
        gSprites[sBlackJack->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].sheetTileStart + (digit * 2);

        gSprites[sBlackJack->PlayerSpriteIds[i + SPR_PLAYER_DIGITS]].oam.priority = 2;

        num = num % d;
        d = d / 10;
    }
    BuildOamBuffer();
}

static void SetDealerDigits(u16 num)
{
    u8 i;
    u16 d = 10;
    bool8 isSingleDigit = num < 10;

    for (i = 0; i < 2; i++)
    {
        u8 digit = num / d;

        gSprites[sBlackJack->DealerSpriteIds[i + SPR_DEALER_DIGITS]].invisible = FALSE;

        if (i == 0 && isSingleDigit)
            digit = 0;
        else if (i == 1 && isSingleDigit)
            digit = num;

        gSprites[sBlackJack->DealerSpriteIds[i + SPR_DEALER_DIGITS]].oam.tileNum =
        gSprites[sBlackJack->DealerSpriteIds[i + SPR_DEALER_DIGITS]].sheetTileStart + (digit * 2);

        gSprites[sBlackJack->DealerSpriteIds[i + SPR_DEALER_DIGITS]].oam.priority = 2;

        num = num % d;
        d = d / 10; 
    }
    BuildOamBuffer();
}

static void CreateCreditSprites(void)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_Interface) - 1; i++)  
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_Interface[i]);
    }

    for (i = 0; i < MAX_COIN_DIGITS; i++)
    {
        if (i == 0)
            sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS] = CreateSprite(&sSpriteTemplate_CreditDigit, 188, 39, 2);
        if (i == 1)
            sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS] = CreateSprite(&sSpriteTemplate_CreditDigit, 8 + 188, 39, 2);
        if (i == 2)
            sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS] = CreateSprite(&sSpriteTemplate_CreditDigit, 16 + 188, 39, 2);
        if (i == 3)
            sBlackJack->CreditSpriteIds[i + SPR_CREDIT_DIGITS] = CreateSprite(&sSpriteTemplate_CreditDigit, 24 + 188, 39, 2);
    }
}

static void CreatePlayerSprites(void)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_PlayerInterface) - 1; i++)  
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_PlayerInterface[i]);
    }

    for (i = 0; i < 2; i++)
    {
        sBlackJack->PlayerSpriteIds[i + SPR_PLAYER_DIGITS] = CreateSprite(&sSpriteTemplate_PlayerDigit, i * 8 + 180, 148, 2);
    }
}

static void CreateDealerSprites(void)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sSpriteSheets_DealerInterface)  - 1; i++)  
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_DealerInterface[i]);
    }

    for (i = 0; i < 2; i++)
    {
        sBlackJack->DealerSpriteIds[i + SPR_DEALER_DIGITS] = CreateSprite(&sSpriteTemplate_DealerDigit, i * 8 + 211, 148, 2);
    }
}

static void SetMode(void)
{
    u32 num = sBlackJack->optionMode;

    gSprites[sBlackJack->option1SpriteId].oam.tileNum = sBlackJack->optionTileNum1;
    gSprites[sBlackJack->option2SpriteId].oam.tileNum = sBlackJack->optionTileNum2;
    gSprites[sBlackJack->option3SpriteId].oam.tileNum = sBlackJack->optionTileNum3;
    
    if (num == 0) // +100, -100, BET
    {
        gSprites[sBlackJack->option1SpriteId].oam.tileNum = sBlackJack->optionTileNum1;
        gSprites[sBlackJack->option2SpriteId].oam.tileNum = sBlackJack->optionTileNum2;
        gSprites[sBlackJack->option3SpriteId].oam.tileNum = sBlackJack->optionTileNum3;
        gSprites[sBlackJack->cursorSpriteId].y = 57;
        gSprites[sBlackJack->cursorSpriteId].invisible = FALSE;
        gSprites[sBlackJack->option1SpriteId].invisible = FALSE;
        gSprites[sBlackJack->option2SpriteId].invisible = FALSE;
        gSprites[sBlackJack->option3SpriteId].invisible = FALSE;
    }
    if (num == 1) // HIT, STAND, NONE
    {
        gSprites[sBlackJack->option1SpriteId].oam.tileNum = sBlackJack->optionTileNum1 + 8;
        gSprites[sBlackJack->option2SpriteId].oam.tileNum = sBlackJack->optionTileNum2 + 8;
        gSprites[sBlackJack->cursorSpriteId].y = 57;
        gSprites[sBlackJack->cursorSpriteId].invisible = FALSE;    
        gSprites[sBlackJack->option1SpriteId].invisible = FALSE;
        gSprites[sBlackJack->option2SpriteId].invisible = FALSE;
        gSprites[sBlackJack->option3SpriteId].invisible = TRUE;        
    }
    if (num == 2) // HIT, STAND, DOUBLE
    {
        gSprites[sBlackJack->option1SpriteId].oam.tileNum = sBlackJack->optionTileNum1 + 8;
        gSprites[sBlackJack->option2SpriteId].oam.tileNum = sBlackJack->optionTileNum2 + 8;
        gSprites[sBlackJack->option3SpriteId].oam.tileNum = sBlackJack->optionTileNum3 + 8;
        gSprites[sBlackJack->cursorSpriteId].y = 57;
        gSprites[sBlackJack->cursorSpriteId].invisible = FALSE;
        gSprites[sBlackJack->option1SpriteId].invisible = FALSE;
        gSprites[sBlackJack->option2SpriteId].invisible = FALSE;
        gSprites[sBlackJack->option3SpriteId].invisible = FALSE;        
    }
    if (num == 3) // HIT, STAND, INSURE
    {
        gSprites[sBlackJack->option1SpriteId].oam.tileNum = sBlackJack->optionTileNum1 + 8;
        gSprites[sBlackJack->option2SpriteId].oam.tileNum = sBlackJack->optionTileNum2 + 8;
        gSprites[sBlackJack->option3SpriteId].oam.tileNum = sBlackJack->optionTileNum3 + 16;
        gSprites[sBlackJack->cursorSpriteId].y = 57;
        gSprites[sBlackJack->cursorSpriteId].invisible = FALSE;
        gSprites[sBlackJack->option1SpriteId].invisible = FALSE;
        gSprites[sBlackJack->option2SpriteId].invisible = FALSE;
        gSprites[sBlackJack->option3SpriteId].invisible = FALSE;        
    }
    if (num >= 4) // NONE, NONE, NONE
    {
        gSprites[sBlackJack->cursorSpriteId].invisible = TRUE;
        gSprites[sBlackJack->option1SpriteId].invisible = TRUE;
        gSprites[sBlackJack->option2SpriteId].invisible = TRUE;
        gSprites[sBlackJack->option3SpriteId].invisible = TRUE;        
    }
}

static inline void SetOptionMode(u16 optionMode)
{
    sBlackJack->optionMode = optionMode;
    SetMode();
}

static void InitBJScreen(void)
{
    SetVBlankCallback(NULL);
    ResetAllBgsCoordinates();
    ResetVramOamAndBgCntRegs();
    ResetBgsAndClearDma3BusyFlags(0);
    ResetTempTileDataBuffers();

    InitBgsFromTemplates(0, sBJBgTemplates, ARRAY_COUNT(sBJBgTemplates));
    SetBgTilemapBuffer(BJ_BG_BASE, AllocZeroed(BG_SCREEN_SIZE));
    DecompressAndLoadBgGfxUsingHeap(BJ_BG_BASE, sBJBackgroundGfx, 0xE00, 0, 0);
    CopyToBgTilemapBuffer(BJ_BG_BASE, sBJBackgroundTilemap, 0, 0);
    ResetPaletteFade();
    LoadPalette(sBJBackgroundPalette, 0, sizeof(sBJBackgroundPalette));

    ResetSpriteData();
    FreeAllSpritePalettes();
    LoadSpritePalettes(sSpritePalettes);

    sBlackJack->insuranceBet = FALSE;
    sBlackJack->betBlackJack = 0;
    sBlackJack->playerScore = 0;
    sBlackJack->dealerScore = 0;
    
    if ((GetCoins()) >= 10) // If you can afford to play
        sBlackJack->optionMode = OPTION_BET;
    else // Not enough coins
        sBlackJack->optionMode = OPTION_NONE;

    sBlackJack->hasBlackJack = FALSE;
    CreateCreditSprites();
    
    CreatePlayerSprites();
    CreateDealerSprites();
    SetCreditDigits(GetCoins());
    SetPlayerDigits(sBlackJack->playerScore);
    SetDealerDigits(sBlackJack->dealerScore);
    CreateCursorSprite();
    CreateOptions();
    sBlackJack->optionTileNum1 = gSprites[sBlackJack->option1SpriteId].oam.tileNum;
    sBlackJack->optionTileNum2 = gSprites[sBlackJack->option2SpriteId].oam.tileNum;
    sBlackJack->optionTileNum3 = gSprites[sBlackJack->option3SpriteId].oam.tileNum;
    SetMode();
    CreatePopUpSprite();
    
    CreateFacedown();
    sBlackJack->numPlayerCards = 0;
    sBlackJack->numDealerCards = 0;
    sBlackJack->AceAdjustPlayer = FALSE;
    sBlackJack->AceAdjustDealer = FALSE;
    sBlackJack->exitToggle = FALSE;
    AdjustCards();
    ShuffleCards();
    
    gSprites[sBlackJack->CreditSpriteIds[0 + SPR_CREDIT_DIGITS]].x = 188;
    
    DeactivateAllTextPrinters();

    InitWindows(sBJWinTemplates);
    
    LoadPalette(GetTextWindowPalette(2), 11 * 16, 32);
    ShowHelpBar(sHelpBarHitStandText);
    PrintInitMessage();
    
    CopyBgTilemapBufferToVram(BJ_BG_BASE);
    CopyBgTilemapBufferToVram(BJ_WIN_MENU);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON | DISPCNT_BG2_ON);
    ShowBg(BJ_BG_BASE);
    ShowBg(BJ_WIN_MENU);
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
    SetVBlankCallback(BJVBlankCallback);
    SetMainCallback2(BJMainCallback);
    CreateTask(BJMain, 1);
}

static void RefreshBlackJackBG(void)
{
    //HideBg(BJ_WIN_MENU);
    ClearStdWindowAndFrame(sTextWindowId, TRUE);
    RemoveWindow(sTextWindowId);
}

static void BJMain(u8 taskId)
{
    switch (sBlackJack->state)
    {
    case BJ_STATE_INIT:
        if (!gPaletteFade.active)
            sBlackJack->state = BJ_STATE_PROCESS_INPUT;
        break;
    case BJ_STATE_PROCESS_INPUT:
        HandleInput();
        break;
    case BJ_STATE_COMPLETED_WAIT_FOR_SOUND:
        if (IsSEPlaying())
            break;
        PlayFanfare(MUS_SLOTS_WIN);
        sBlackJack->state = BJ_STATE_PROCESS_COMPLETED_INPUT;
    case BJ_STATE_PROCESS_COMPLETED_INPUT:
        HandleInput_BJComplete();
        break;
    case BJ_STATE_START_EXIT:
        StartExitBJ();
        break;
    case BJ_STATE_EXIT:
        ExitBJ();
        break;
    }
}

static void ShowMessage(const u8 *str)
{
    struct WindowTemplate template;
    SetWindowTemplateFields(&template, BJ_WIN_MENU, 3, 15, 14, 4, 0xF, 0x194);

    sTextWindowId = AddWindow(&template);
    FillWindowPixelBuffer(sTextWindowId, PIXEL_FILL(0));
    PutWindowTilemap(sTextWindowId);
    LoadUserWindowBorderGfx(sTextWindowId, 0x214, BG_PLTT_ID(14));
    DrawStdWindowFrame(sTextWindowId, FALSE); 
    AddTextPrinterParameterized(sTextWindowId, FONT_NORMAL, str, 0, 1, 0, 0);
    CopyWindowToVram(sTextWindowId, 3);
}

static void PrintInitMessage(void)
{
    u8 bet;
    bet = sBlackJack->betBlackJack;
    
    if (GetCoins() > 9)
    { // You can play
        ConvertUIntToDecimalStringN(gStringVar1, bet, STR_CONV_MODE_LEFT_ALIGN, 3);
        ShowMessage(sText_NoBetting);
    }
    else
    {
        ShowMessage(sText_NoCoins);
    }
}

static void HandleInput_BJComplete(void)
{
    if (IsFanfareTaskInactive())
    {
        if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            gSpecialVar_Result = 1;
            sBlackJack->state = BJ_STATE_START_EXIT;
        }
    }
}

static void HandleInput(void)
{
    if (JOY_NEW(A_BUTTON))
    {
        AButton();
        if (sBlackJack->clearBlackJack)
            sBlackJack->clearBlackJack = FALSE;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        if (sBlackJack->exitToggle == FALSE)
            sBlackJack->state = BJ_STATE_START_EXIT;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        MoveCursor(0);
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        MoveCursor(2);
    }
}

static void UpdateCardVisibility(void)
{
    int i;

    for (i = 0; i < sBlackJack->numPlayerCards; i++)
    {
        gSprites[sBlackJack->playerCardIds[i]].invisible = FALSE;
    }

    for (i = sBlackJack->numPlayerCards; i < MAX_PLAYER_CARDS; i++)
    {
        gSprites[sBlackJack->playerCardIds[i]].invisible = TRUE;
    }

    for (i = 0; i < sBlackJack->numDealerCards; i++)
    {
        gSprites[sBlackJack->dealerCardIds[i]].invisible = FALSE;
    }

    for (i = sBlackJack->numDealerCards; i < MAX_DEALER_CARDS; i++)
    {
        gSprites[sBlackJack->dealerCardIds[i]].invisible = TRUE;
    }

    BuildOamBuffer();
}

static void HideAllCards(void)
{
    int i;
    
    for (i = 0; i < MAX_PLAYER_CARDS; i++) {
        gSprites[sBlackJack->playerCardIds[i]].invisible = TRUE;
    }

    for (i = 0; i < MAX_DEALER_CARDS; i++) {
        gSprites[sBlackJack->dealerCardIds[i]].invisible = TRUE;
    }
}

static void DeleteCards(void)
{
    u8 i;
    // Loop through and destroy all player cards
    for (i = 0; i < MAX_PLAYER_CARDS; i++)
    {
        if (sBlackJack->playerCardIds[i] != 0)
            DestroySpriteAndFreeResources(&gSprites[sBlackJack->playerCardIds[i]]);
    }
    
    // Loop through and destroy all dealer cards
    for (i = 0; i < MAX_DEALER_CARDS; i++)
    {
        if (sBlackJack->dealerCardIds[i] != 0)
            DestroySpriteAndFreeResources(&gSprites[sBlackJack->dealerCardIds[i]]);
    }
}

static void ResetBlackJack(void)
{
    HideAllCards();
    BuildOamBuffer();
    RefreshBlackJackBG();
    sBlackJack->hasBlackJack = FALSE;
    sBlackJack->betBlackJack = 0;
    sBlackJack->dealerScore = 0;
    sBlackJack->playerScore = 0;
    sBlackJack->numDealerCards = 0;
    sBlackJack->numPlayerCards = 0;
    sBlackJack->AceAdjustPlayer = FALSE;
    sBlackJack->AceAdjustDealer = FALSE;
    gSprites[sBlackJack->DealerFaceDownId].invisible = TRUE;
    gSprites[sBlackJack->LogoId].invisible = FALSE;
    SetDealerDigits(sBlackJack->dealerScore);
    SetPlayerDigits(sBlackJack->playerScore);
    SetCreditDigits(GetCoins());
    DeleteCards();
    LoadSpritePalettes(sSpritePalettes);
    ShuffleCards();
    AdjustCards();
    SetOptionMode(OPTION_BET);
    sBlackJack->exitToggle = FALSE;
    sBlackJack->clearBlackJack = TRUE;
    DeactivateAllTextPrinters();
    PrintInitMessage();
    return;
}

static void Push(void)
{
    switch (sBlackJack->pushState)
    {
        case PUSH_0:
            SetOptionMode(OPTION_NONE);
            PlaySE(SE_BOO);
            ShowMessage(sText_Push);
            sBlackJack->waitTimer = 100000;
            sBlackJack->pushState = PUSH_1;
            break;
        case PUSH_1:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->pushState = PUSH_2;
            break;
        case PUSH_2:
            PlaySE(SE_SHOP);
            AddCoins(sBlackJack->betBlackJack);
            SetCreditDigits(GetCoins());
            sBlackJack->waitTimer = 30;
            sBlackJack->pushState = PUSH_3;
            break;
        case PUSH_3:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->pushState = PUSH_4;
            break;
        case PUSH_4:
            RefreshBlackJackBG();
            ResetBlackJack();
            return;
    }
}

static void ProcessPush(void)
{
    sBlackJack->pushState = PUSH_0;
    while (sBlackJack->pushState != PUSH_4)
    {
        Push();
    }
    Push();
}

static void Bust(void)
{    
    switch (sBlackJack->bustState)
    {
        case BUST_0:
            SetOptionMode(OPTION_NONE);
            PlaySE(SE_FAILURE);
            ShowMessage(sText_Bust);
            sBlackJack->waitTimer = 100000;
            sBlackJack->bustState = BUST_1;
            break;
        case BUST_1:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->bustState = BUST_2;
            break;            
        case BUST_2:
            RefreshBlackJackBG();
            ResetBlackJack();
            return;
    }
}

static void ProcessBust(void)
{
    sBlackJack->bustState = BUST_0;
    while (sBlackJack->bustState != BUST_2)
    {
        Bust();
    }
    Bust();
}

static void Lose(void)
{    
    switch (sBlackJack->loseState)
    {
        case LOSE_0:
            SetOptionMode(OPTION_NONE);
            PlaySE(SE_FAILURE);
            ShowMessage(sText_YouLose);
            sBlackJack->waitTimer = 100000;
            sBlackJack->loseState = LOSE_1;
            break;
        case LOSE_1:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->loseState = LOSE_2;
            break;
        case LOSE_2:
            RefreshBlackJackBG();
            ResetBlackJack();
            return;
    }
}

static void ProcessLose(void)
{
    sBlackJack->loseState = LOSE_0;
    while (sBlackJack->loseState != LOSE_2)
    {
        Lose();
    }
    Lose();
}

static void Win(void)
{
    u16 winnings;

    switch (sBlackJack->winState)
    {
        case WIN_0:
            SetOptionMode(OPTION_NONE);
            PlaySE(SE_RG_POKE_JUMP_SUCCESS);
            ShowMessage(sText_YouWin);
            sBlackJack->waitTimer = 100000;
            sBlackJack->winState = WIN_1;
            break;
        case WIN_1:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->winState = WIN_2;
            break;
        case WIN_2:
            PlaySE(SE_SHOP);
            if (((sBlackJack->betBlackJack * 2) + GetCoins()) < 9999)
            {
                if (sBlackJack->hasBlackJack)
                {
                    winnings = (sBlackJack->betBlackJack * 3) / 2; // 3:2 payout
                }
                else
                {
                    // Regular 1:1 payout
                    winnings = sBlackJack->betBlackJack * 2;
                }
                if ((GetCoins() + winnings) <= 9999)
                    AddCoins(winnings);
                else
                    SetCoins(9999);
            }
            else
            {
                SetCoins(9999);
            }
            SetCreditDigits(GetCoins());
            sBlackJack->waitTimer = 30;
            sBlackJack->winState = WIN_3;
            break;
        case WIN_3:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->winState = WIN_4;
            break;
        case WIN_4:
            RefreshBlackJackBG();
            ResetBlackJack();
            return;
    }
}

static void ProcessWin(void)
{
    sBlackJack->winState = WIN_0;
    while (sBlackJack->winState != WIN_4)
    {
        Win();
    }
    Win();
}

static void Stand(void)
{
    u8 DCardPoints;
    
    switch (sBlackJack->standState)
    {
        case STAND_0:
            SetOptionMode(OPTION_NONE);
            PlaySE(SE_REPEL);
            sBlackJack->numDealerCards = 2;
            gSprites[sBlackJack->DealerFaceDownId].invisible = TRUE;
            UpdateCardVisibility();
            AdjustCards();
            DCardPoints = sPlayingCards[sBlackJack->dealerCardNumbers[1]].points;
            if (DCardPoints == CARD_SCORE_ACE)
            {
                if (sBlackJack->dealerScore == CARD_SCORE_ACE_EXPANDED)
                    DCardPoints = CARD_SCORE_ACE_SHURNK;
                else
                    DCardPoints = CARD_SCORE_ACE_EXPANDED;
            }
            sBlackJack->dealerScore += DCardPoints;
            SetDealerDigits(sBlackJack->dealerScore);
            sBlackJack->waitTimer = 100000;
            sBlackJack->standState = STAND_1;
            break;
        case STAND_1:
            if (sBlackJack->waitTimer > 0)
            {
                sBlackJack->waitTimer--;
            }
            else
            {
                if (sBlackJack->hasBlackJack == FALSE)
                {
                    sBlackJack->standState = STAND_CHECK_INSURANCE;
                }
                else
                {
                    sBlackJack->hasBlackJack = FALSE;
                    sBlackJack->standState = STAND_5;
                }
            }
            break;
        case STAND_CHECK_INSURANCE:
            if (sBlackJack->insuranceBet == TRUE)
            {
                if (sBlackJack->dealerScore == CARD_SCORE_BLACK_JACK)
                    AddCoins(sBlackJack->betBlackJack);
                sBlackJack->insuranceBet = FALSE;
            }
            sBlackJack->standState = STAND_3;
            break;
        case STAND_3:
            if (sBlackJack->dealerScore < 17)
            {
                PlaySE(SE_REPEL);
                sBlackJack->numDealerCards++;
                UpdateCardVisibility();
                AdjustCards();
                DCardPoints = sPlayingCards[sBlackJack->dealerCardNumbers[(sBlackJack->numDealerCards - 1)]].points;
                if (DCardPoints == CARD_SCORE_ACE)
                {
                    if ((sBlackJack->dealerScore + CARD_SCORE_ACE_EXPANDED) > CARD_SCORE_BLACK_JACK)
                        DCardPoints = CARD_SCORE_ACE_SHURNK;
                    else
                        DCardPoints = CARD_SCORE_ACE_EXPANDED;
                }
                sBlackJack->dealerScore += DCardPoints;
                if (sBlackJack->dealerScore > CARD_SCORE_BLACK_JACK)
                {
                    if (sPlayingCards[sBlackJack->dealerCardNumbers[0]].points == CARD_SCORE_ACE)
                    {
                        if (sBlackJack->AceAdjustDealer == FALSE)
                        {
                            sBlackJack->dealerScore -= (CARD_SCORE_ACE_EXPANDED - CARD_SCORE_ACE_SHURNK);
                            sBlackJack->AceAdjustDealer = TRUE;
                        }
                    }
                    else if (sPlayingCards[sBlackJack->dealerCardNumbers[1]].points == CARD_SCORE_ACE)
                    {
                        if (sBlackJack->AceAdjustDealer == FALSE)
                        {
                            sBlackJack->dealerScore -= (CARD_SCORE_ACE_EXPANDED - CARD_SCORE_ACE_SHURNK);
                            sBlackJack->AceAdjustDealer = TRUE;
                        }
                    }
                }
                SetDealerDigits(sBlackJack->dealerScore);
                sBlackJack->waitTimer = 100000;
                sBlackJack->standState = STAND_4;
                break;
            }
            else
            {
                sBlackJack->standState = STAND_5;
                break;
            }
        case STAND_4:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->standState = STAND_3;
            break;
        case STAND_5:
            RefreshBlackJackBG();

            if (sBlackJack->dealerScore < 22) 
            {
                if (sBlackJack->dealerScore > sBlackJack->playerScore) // Dealer Wins
                {
                    ProcessLose();
                    if (sBlackJack->clearBlackJack)
                        return;
                }
                else if (sBlackJack->dealerScore < sBlackJack->playerScore) // Player Wins
                {
                    ProcessWin();
                    if (sBlackJack->clearBlackJack)
                        return;
                }
                if (sBlackJack->dealerScore == sBlackJack->playerScore) // Push
                {
                    ProcessPush();
                    if (sBlackJack->clearBlackJack)
                        return;
                }
            }
            else if (sBlackJack->dealerScore > CARD_SCORE_BLACK_JACK) // Dealer Busts
            {
                ProcessWin();
                if (sBlackJack->clearBlackJack)
                    return;
            }
            return;
    }
}

static void ProcessStand(void)
{
    sBlackJack->standState = STAND_0;
    while (sBlackJack->standState != STAND_5)
    {
        Stand();
    }
    Stand();
}

static void HitBlackJack(void)
{    
    switch (sBlackJack->hitBJState)
    {
        case hitBJ_0:
            SetOptionMode(OPTION_NONE);
            PlaySE(SE_APPLAUSE);
            ShowMessage(sText_BlackJack);
            sBlackJack->waitTimer = 300000;
            sBlackJack->hitBJState = hitBJ_1;
            break;
        case hitBJ_1:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->hitBJState = hitBJ_2;
            break;
        case hitBJ_2:
            RefreshBlackJackBG();
            sBlackJack->hasBlackJack = TRUE;
            ProcessStand();
            return;
    }
}

static void ProcessHitBJ(void)
{
    sBlackJack->hitBJState = hitBJ_0;
    while (sBlackJack->hitBJState != hitBJ_2)
    {
        HitBlackJack();
    }
    HitBlackJack();
}

static void Double(void)
{
    u8 playerCardPoints;
    
    switch (sBlackJack->doubleState)
    {
        case DOUBLE_0:
            PlaySE(SE_SHOP);
            SetCoins(GetCoins() - sBlackJack->betBlackJack);
            sBlackJack->betBlackJack = sBlackJack->betBlackJack * 2;
            SetCreditDigits(GetCoins());
            SetOptionMode(OPTION_NONE);
            sBlackJack->waitTimer = 100000;
            sBlackJack->doubleState = DOUBLE_1;
            break;
        case DOUBLE_1:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->doubleState = DOUBLE_2;
            break;
        case DOUBLE_2:
            PlaySE(SE_REPEL);
            sBlackJack->numPlayerCards = (sBlackJack->numPlayerCards + 1);
            UpdateCardVisibility();
            AdjustCards();
            playerCardPoints = sPlayingCards[sBlackJack->playerCardNumbers[(sBlackJack->numPlayerCards - 1)]].points;
            if (playerCardPoints == CARD_SCORE_ACE)
            {
                if ((sBlackJack->playerScore + CARD_SCORE_ACE_EXPANDED) > CARD_SCORE_BLACK_JACK)
                    playerCardPoints = CARD_SCORE_ACE_SHURNK;
                else
                    playerCardPoints = CARD_SCORE_ACE_EXPANDED;
            }
            sBlackJack->playerScore += playerCardPoints;
            SetPlayerDigits(sBlackJack->playerScore);
            sBlackJack->waitTimer = 100000;
            sBlackJack->doubleState = DOUBLE_3;
            break;
        case DOUBLE_3:
            if (sBlackJack->waitTimer > 0)
                sBlackJack->waitTimer--;
            else
                sBlackJack->doubleState = DOUBLE_4;
            break;
        case DOUBLE_4:
            RefreshBlackJackBG();
            if (sBlackJack->playerScore > CARD_SCORE_BLACK_JACK)
            {
                ProcessBust();
                if (sBlackJack->clearBlackJack == TRUE)
                    return;
            }
            else
            {
                ProcessStand();
                if (sBlackJack->clearBlackJack == TRUE)
                    return;
            }
            return;
    }
}

static void ProcessDouble(void)
{
    sBlackJack->doubleState = DOUBLE_0;
    while (sBlackJack->doubleState != DOUBLE_4)
    {
        Double();
    }
    Double();
}

static void Hit(void)
{
    u8 playerCardPoints;
    int i;

    switch (sBlackJack->hitState)
    {
    case HIT_PLAY_CARD:
        PlaySE(SE_REPEL);
        SetOptionMode(OPTION_NONE);
        sBlackJack->numPlayerCards = (sBlackJack->numPlayerCards + 1);
        AdjustCards();
        UpdateCardVisibility();
        playerCardPoints = sPlayingCards[sBlackJack->playerCardNumbers[(sBlackJack->numPlayerCards - 1)]].points;
        if (playerCardPoints == CARD_SCORE_ACE)
        {
            if ((sBlackJack->playerScore + CARD_SCORE_ACE_EXPANDED) > CARD_SCORE_BLACK_JACK)
                playerCardPoints = CARD_SCORE_ACE_SHURNK;
            else
                playerCardPoints = CARD_SCORE_ACE_EXPANDED;
        }
        sBlackJack->playerScore += playerCardPoints;
        if (sBlackJack->playerScore > CARD_SCORE_BLACK_JACK)
        {
            for (i = 0; i < sBlackJack->numPlayerCards; i++) 
            {
                if (sPlayingCards[sBlackJack->playerCardNumbers[i]].points == CARD_SCORE_ACE) 
                {
                    if (sBlackJack->AceAdjustPlayer == FALSE) 
                    {
                        sBlackJack->playerScore -= 10;
                        sBlackJack->AceAdjustPlayer = TRUE;
                    }
                }
            }
        }
        SetPlayerDigits(sBlackJack->playerScore);
        sBlackJack->waitTimer = 100000;
        sBlackJack->hitState = HIT_1;
        break;
    case HIT_1:
        if (sBlackJack->waitTimer > 0)
            sBlackJack->waitTimer--;
        else
            sBlackJack->hitState = HIT_CHECK_SCORE;
        break;
    case HIT_CHECK_SCORE:
        if (sBlackJack->playerScore > CARD_SCORE_BLACK_JACK)
        {
            ProcessBust();
            if (sBlackJack->clearBlackJack == TRUE)
                return;
        }
        else if (sBlackJack->playerScore == CARD_SCORE_BLACK_JACK)
        {
            ProcessStand();
            if (sBlackJack->clearBlackJack == TRUE)
                return;
        }
        else if (sBlackJack->numPlayerCards == 9)
        {
            ProcessStand();
            if (sBlackJack->clearBlackJack == TRUE)
                return;
        }
        else
        {
            SetOptionMode(OPTION_HIT);
        }
        return;
    }
}

static void AButton(void)
{
    u32 bet;
    u8 num;
    u8 playerCard1Points;
    u8 playerCard2Points;
    u8 dealerCard1Points;

    if (sBlackJack->optionMode != OPTION_NONE)
    {
        if (gSprites[sBlackJack->cursorSpriteId].y == 57) // Top
        {
            if (sBlackJack->optionMode == OPTION_BET) // +100
            {
                if ((GetCoins()) > 9) // enough
                {
                    RefreshBlackJackBG();
                    PlaySE(SE_VEND);
                    RemoveCoins(10);
                    sBlackJack->betBlackJack += 10;
                    bet = sBlackJack->betBlackJack;
                    num = CountDigits(sBlackJack->betBlackJack);
                    SetCreditDigits(GetCoins());
                    ConvertUIntToDecimalStringN(gStringVar1, bet, STR_CONV_MODE_LEADING_ZEROS, num);
                    gStringVar4[0] = '\0';
                    StringExpandPlaceholders(gStringVar4, sText_Betting);
                    ShowMessage(gStringVar4);
                }
                else // Not Enough
                {
                    PlaySE(SE_FAILURE);
                }
            }
            if ((sBlackJack->optionMode == OPTION_HIT)
             || (sBlackJack->optionMode == OPTION_DOUBLE)
             || (sBlackJack->optionMode == OPTION_INSURANCE))
            {
                if (sBlackJack->betBlackJack > 9) // Enough
                {
                    PlaySE(SE_CARD);
                    //delay?
                    
                    sBlackJack->hitState = HIT_PLAY_CARD;
                    while (sBlackJack->hitState != HIT_CHECK_SCORE)
                    {
                        Hit();
                    }
                    Hit();
                    return;
                }
                else
                {
                    PlaySE(SE_FAILURE);
                }
            }
            return;
        }
        if (gSprites[sBlackJack->cursorSpriteId].y == (57 + 16)) // Middle
        {
            if (sBlackJack->optionMode == OPTION_BET) // -100
            {
                if (sBlackJack->betBlackJack > 0) // Existing Bet
                {
                    RefreshBlackJackBG();
                    PlaySE(SE_VEND);
                    AddCoins(10);
                    sBlackJack->betBlackJack -= 10;
                    bet = sBlackJack->betBlackJack;
                    num = CountDigits(sBlackJack->betBlackJack);
                    SetCreditDigits(GetCoins());
                    ConvertUIntToDecimalStringN(gStringVar1, bet, STR_CONV_MODE_LEADING_ZEROS, num);
                    gStringVar4[0] = '\0';
                    StringExpandPlaceholders(gStringVar4, sText_Betting);
                    ShowMessage(gStringVar4);
                }
                else // No existing bet
                {
                        PlaySE(SE_FAILURE);
                }    
            }    
            if ((sBlackJack->optionMode == OPTION_HIT)
             || (sBlackJack->optionMode == OPTION_DOUBLE)
             || (sBlackJack->optionMode == OPTION_INSURANCE))
            {
                PlaySE(SE_CARD);
                // delay?
                
                ProcessStand();
                if (sBlackJack->clearBlackJack == TRUE)
                    return;
            }
            return;
        }
        if (gSprites[sBlackJack->cursorSpriteId].y == (57 + 32)) // Bottom
        {
            if (sBlackJack->optionMode == OPTION_BET) // Bet
            {
                if (sBlackJack->betBlackJack > 9) // Enough
                    {
                        sBlackJack->exitToggle = TRUE;
                        PlaySE(SE_SHOP);
                        SetOptionMode(OPTION_NONE);
                        // delay?
                        
                        gSprites[sBlackJack->LogoId].invisible = TRUE;
                        RefreshBlackJackBG();
                        sBlackJack->numPlayerCards = 2;
                        sBlackJack->numDealerCards = 1;
                        AdjustCards();
                        UpdateCardVisibility();
                        gSprites[sBlackJack->DealerFaceDownId].invisible = FALSE;
                        PlaySE(SE_REPEL);                        
                        // delay?
                        
                        playerCard1Points = sPlayingCards[sBlackJack->playerCardNumbers[0]].points;
                        playerCard2Points = sPlayingCards[sBlackJack->playerCardNumbers[1]].points;
                        
                         if (playerCard1Points != CARD_SCORE_ACE && playerCard2Points != CARD_SCORE_ACE)
                            sBlackJack->playerScore = playerCard1Points + playerCard2Points;
                        else if (playerCard1Points == CARD_SCORE_ACE && playerCard2Points == CARD_SCORE_ACE)
                            sBlackJack->playerScore = 12;
                        else if (playerCard1Points == CARD_SCORE_ACE && playerCard2Points != CARD_SCORE_ACE)
                            sBlackJack->playerScore = CARD_SCORE_ACE_EXPANDED + playerCard2Points;
                        else if (playerCard1Points != CARD_SCORE_ACE && playerCard2Points == CARD_SCORE_ACE)
                            sBlackJack->playerScore = playerCard1Points + CARD_SCORE_ACE_EXPANDED;

                        dealerCard1Points = sPlayingCards[sBlackJack->dealerCardNumbers[0]].points;
                        
                        if (dealerCard1Points == CARD_SCORE_ACE)
                            sBlackJack->dealerScore = CARD_SCORE_ACE_EXPANDED;
                        else
                            sBlackJack->dealerScore = dealerCard1Points;
                        SetPlayerDigits(sBlackJack->playerScore);
                        SetDealerDigits(sBlackJack->dealerScore);
                        if (sBlackJack->playerScore == CARD_SCORE_BLACK_JACK)
                        {
                            ProcessHitBJ();
                            return;
                        }

                        if ((sBlackJack->playerScore != 9) && (sBlackJack->playerScore != 10) && (sBlackJack->playerScore != 11) &&
                            (sBlackJack->dealerScore != 11))
                        {
                            SetOptionMode(OPTION_HIT);
                            return;
                        }

                        if ((sBlackJack->playerScore >= 9) && (sBlackJack->playerScore <= 11) &&
                            (sBlackJack->dealerScore != 11))
                        {
                            if (GetCoins() > sBlackJack->betBlackJack)
                                SetOptionMode(OPTION_DOUBLE);
                            else
                                SetOptionMode(OPTION_HIT);
                            return;
                        }

                        if (sBlackJack->dealerScore == 11)
                        {
                            if (GetCoins() > (sBlackJack->betBlackJack / 2))
                                SetOptionMode(OPTION_INSURANCE);
                            else
                                SetOptionMode(OPTION_HIT);
                            return;
                        }
                    }
                    else
                    {
                        PlaySE(SE_FAILURE);
                    }
                }
            if (sBlackJack->optionMode == OPTION_DOUBLE) // Double    
            {
                PlaySE(SE_SHOP);
                SetOptionMode(OPTION_NONE);
                // delay?
                
                ProcessDouble();
                if (sBlackJack->clearBlackJack == TRUE)
                    return;
            }
            if (sBlackJack->optionMode == OPTION_INSURANCE) // Insurance
            {
                PlaySE(SE_SHOP);
                SetOptionMode(OPTION_NONE);
                RemoveCoins(sBlackJack->betBlackJack / 2);
                SetCreditDigits(GetCoins());
                // delay?
                sBlackJack->insuranceBet = TRUE;
                SetOptionMode(OPTION_HIT);
            }
            return;
        }
    }
    else
    {
        PlaySE(SE_FAILURE);
        return;
    }
}

static void MoveCursor(int direction)
{
    int curY;
    int destY;
    curY = gSprites[sBlackJack->cursorSpriteId].y;
    destY = curY;
    
    if ((sBlackJack->optionMode != OPTION_HIT) && (sBlackJack->optionMode != OPTION_NONE))
    {
        switch (direction)
        {
            case 0: if (curY > 57) destY = curY - 16; break;
            case 2: if (curY < 89) destY = curY + 16; break;
        }
    }
    if (sBlackJack->optionMode == OPTION_HIT)
    {
        switch (direction)
        {
            case 0: if (curY > 57) destY = curY - 16; break;
            case 2: if (curY < 73) destY = curY + 16; break;
        }
    }
    if (sBlackJack->optionMode == OPTION_NONE)
    {
        return;
    }
    if (curY == destY)
    {
        PlaySE(SE_WALL_HIT);
        return;
    }
    gSprites[sBlackJack->cursorSpriteId].y = destY;
    PlaySE(SE_CLICK);
}

static void ShuffleCards(void)
{
    u32 allCardNumbers[CARD_COUNT];
    u32 temp;
    u32 i, j;

    for (i = 0; i < CARD_COUNT; i++)
    {
        allCardNumbers[i] = i;
    }

    for (i = 0; i < CARD_COUNT; i++)
    {
        j = Random() % CARD_COUNT;
        temp = allCardNumbers[i];
        allCardNumbers[i] = allCardNumbers[j];
        allCardNumbers[j] = temp;
    }

    for (i = 0; i < MAX_PLAYER_CARDS; i++)
    {
        sBlackJack->playerCardNumbers[i] = allCardNumbers[i];
    }

    for (i = 0; i < MAX_DEALER_CARDS; i++)
    {
        sBlackJack->dealerCardNumbers[i] = allCardNumbers[MAX_PLAYER_CARDS + i];
    }

    UpdateCards();
}

static void UpdateCards(void)
{
    u8 i;
    // Update player cards
    for (i = 0; i < MAX_PLAYER_CARDS; i++)
    {
        SetCardSprite(sBlackJack->playerCardIds[i], sBlackJack->playerCardNumbers[i], i, 1);
    }

    // Update dealer cards
    for (i = 0; i < MAX_DEALER_CARDS; i++)
    {
        SetCardSprite(sBlackJack->dealerCardIds[i], sBlackJack->dealerCardNumbers[i], i + MAX_PLAYER_CARDS, 0);
    }
}

static void SetCardSprite(u8 cardId, u8 cardNum, u8 cardIndex, u8 isPlayerCard)
{
    s16 x = cardPositions[cardIndex].x;
    s16 y = cardPositions[cardIndex].y;
    u8 subpriority = cardPositions[cardIndex].priority;

    LoadCompressedSpriteSheet(&sPlayingCards[cardNum].sheet);

    cardId = CreateSprite(&sPlayingCards[cardNum].template, x, y, subpriority);
    gSprites[cardId].oam.priority = 1;
    gSprites[cardId].invisible = TRUE;

    if (isPlayerCard == 1)
    {
        sBlackJack->playerCardIds[cardIndex] = cardId;
        sBlackJack->playerCardNumbers[cardIndex] = cardNum;
    }
    else
    {
        sBlackJack->dealerCardIds[cardIndex - MAX_PLAYER_CARDS] = cardId;
        sBlackJack->dealerCardNumbers[cardIndex - MAX_PLAYER_CARDS] = cardNum;
    }
}

static void CreateFacedown(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Facedown);
    sBlackJack->DealerFaceDownId = CreateSprite(&sSpriteTemplate_Facedown, 48, 56, 0);
    gSprites[sBlackJack->DealerFaceDownId].oam.priority = 0;
    gSprites[sBlackJack->DealerFaceDownId].invisible = TRUE;
}

static void CreateCursorSprite(void)
{    
    LoadCompressedSpriteSheet(&sSpriteSheet_Cursor);
    sBlackJack->cursorSpriteId = CreateSprite(&sSpriteTemplate_Cursor, 173, 57, 9);
    gSprites[sBlackJack->cursorSpriteId].oam.priority = 3;
}

static void CreatePopUpSprite(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Popup);
    sBlackJack->LogoId = CreateSprite(&sSpriteTemplate_Popup, 80, 72, 1);
    gSprites[sBlackJack->LogoId].oam.priority = 3;
}

static void CreateOptions(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_Option1);
    sBlackJack->option1SpriteId = CreateSprite(&sSpriteTemplate_Option1, 219, 58, 9);
    gSprites[sBlackJack->option1SpriteId].oam.priority = 2;

    LoadCompressedSpriteSheet(&sSpriteSheet_Option2);
    sBlackJack->option2SpriteId = CreateSprite(&sSpriteTemplate_Option2, 219, 74, 9);
    gSprites[sBlackJack->option2SpriteId].oam.priority = 2;

    LoadCompressedSpriteSheet(&sSpriteSheet_Option3);
    sBlackJack->option3SpriteId = CreateSprite(&sSpriteTemplate_Option3, 219, 90, 9);
    gSprites[sBlackJack->option3SpriteId].oam.priority = 2;    
}

static void AdjustCards(void)
{
    if (sBlackJack->numPlayerCards > 5)
    {
        gSprites[sBlackJack->playerCardIds[1]].x = 128;    
        gSprites[sBlackJack->playerCardIds[2]].x = 112;    
        gSprites[sBlackJack->playerCardIds[3]].x = 96;    
        gSprites[sBlackJack->playerCardIds[4]].x = 80;    
    }
    else
    {
        gSprites[sBlackJack->playerCardIds[1]].x = 112;    
        gSprites[sBlackJack->playerCardIds[2]].x = 80;    
        gSprites[sBlackJack->playerCardIds[3]].x = 48;    
        gSprites[sBlackJack->playerCardIds[4]].x = 16;
    }
    if (sBlackJack->numDealerCards > 5)
    {
        gSprites[sBlackJack->dealerCardIds[1]].x = 32;    
        gSprites[sBlackJack->dealerCardIds[2]].x = 48;    
        gSprites[sBlackJack->dealerCardIds[3]].x = 64;    
        gSprites[sBlackJack->dealerCardIds[4]].x = 80;    
    }
    else
    {
        gSprites[sBlackJack->dealerCardIds[1]].x = 48;    
        gSprites[sBlackJack->dealerCardIds[2]].x = 80;    
        gSprites[sBlackJack->dealerCardIds[3]].x = 112;    
        gSprites[sBlackJack->dealerCardIds[4]].x = 144;    
    }
}

static void BJVBlankCallback(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void ShowHelpBar(const u8 *str)
{
    const u8 color[3] = { TEXT_COLOR_TRANSPARENT, 1, 2 };

    FillWindowPixelBuffer(0, 0xFF);
    DeactivateAllTextPrinters();
    AddTextPrinterParameterized3(0, 0, GetStringRightAlignXOffset(0, str, 240) - 4, 0, color, 0, str);
    PutWindowTilemap(0);
    CopyWindowToVram(0, 3);
}

static void StartExitBJ(void)
{
    if (sBlackJack->betBlackJack)
    {
        AddCoins(sBlackJack->betBlackJack);
        sBlackJack->betBlackJack = 0;
    }
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    sBlackJack->state = BJ_STATE_EXIT;
}

static void ExitBJ(void)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        FREE_AND_SET_NULL(sBlackJack);
    }
}