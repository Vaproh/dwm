/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx       = 0;   /* border pixel of windows */
static const unsigned int snap           = 32;  /* snap pixel */
static const int swallowfloating         = 1;   /* 1 means swallow floating windows by default */
static const unsigned int gappih         = 10;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 10;  /* vert inner gap between windows */
static const unsigned int gappoh         = 10;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 10;  /* vert outer gap between windows and screen edge */
static const int smartgaps_fact          = 1;   /* gap factor when there is only one client; 0 = no gaps, 3 = 3x outer gaps */
static const char autostartblocksh[]     = "autostart_blocking.sh";
static const char autostartsh[]          = "autostart.sh";
static const char dwmdir[]               = "dwm";
static const char localshare[]           = ".local/share";
static const int showbar                 = 1;   /* 0 means no bar */
static const int topbar                  = 1;   /* 0 means bottom bar */
static const int bar_height              = 0;   /* 0 means derive from font, >= 1 explicit height */
static const int vertpad                 = 5;  /* vertical padding of bar */
static const int sidepad                 = 11;  /* horizontal padding of bar */
#define ICONSIZE 19    /* icon size */
#define ICONSPACING 5  /* space between icon and title */
/* Status is to be shown on: -1 (all monitors), 0 (a specific monitor by index), 'A' (active monitor) */
static const int statusmon               = 'A';
static const unsigned int systrayspacing = 0;   /* systray spacing */
static const int showsystray             = 1;   /* 0 means no systray */
static const unsigned int ulinepad       = 5;         /* horizontal padding between the underline and tag */
static const unsigned int ulinestroke  = 2;     /* thickness / height of the underline */
static const unsigned int ulinevoffset = 0;     /* how far above the bottom of the bar the line should appear */
static const int ulineall = 0;                  /* 1 to show underline on all tags, 0 for just the active ones */

/* alt-tab configuration */
static const unsigned int tabmodkey        = 0x40; /* (Alt) when this key is held down the alt-tab functionality stays active. Must be the same modifier as used to run alttabstart */
static const unsigned int tabcyclekey      = 0x17; /* (Tab) when this key is hit the menu moves one position forward in client stack. Must be the same key as used to run alttabstart */
static const unsigned int tabposy          = 1;    /* tab position on Y axis, 0 = top, 1 = center, 2 = bottom */
static const unsigned int tabposx          = 1;    /* tab position on X axis, 0 = left, 1 = center, 2 = right */
static const unsigned int maxwtab          = 600;  /* tab menu width */
static const unsigned int maxhtab          = 200;  /* tab menu height */

/* Indicators: see patch/bar_indicators.h for options */
static int tagindicatortype              = INDICATOR_TOP_LEFT_SQUARE;
static int tiledindicatortype            = INDICATOR_NONE;
static int floatindicatortype            = INDICATOR_TOP_LEFT_SQUARE;
static const char *fonts[]               = { "JetBrains Mono Nerd:size=11", "JoyPixels:pixelsize=11:antialias=true:autohind=true" };
static const char dmenufont[]            = "JetBrains Mono Nerd:size=12";

static char c000000[]                    = "#000000"; // placeholder value

static char normfgcolor[]                = "#abb2bf";
static char normbgcolor[]                = "#23272e";
static char normbordercolor[]            = "#323842";
static char normfloatcolor[]             = "#23272e";

static char selfgcolor[]                 = "#d7dae0";
static char selbgcolor[]                 = "#2c313a";
static char selbordercolor[]             = "#dcdcdc";
static char selfloatcolor[]              = "#b4b4b4";

static char titlenormfgcolor[]           = "#abb2bf";
static char titlenormbgcolor[]           = "#23272e";
static char titlenormbordercolor[]       = "#2E3440";
static char titlenormfloatcolor[]        = "#db8fd9";

static char titleselfgcolor[]            = "#abb2bf";
static char titleselbgcolor[]            = "#23272e";
static char titleselbordercolor[]        = "#b4b4b4";
static char titleselfloatcolor[]         = "#323842";

static char tagsnormfgcolor[]            = "#abb2bf";
static char tagsnormbgcolor[]            = "#23272e";
static char tagsnormbordercolor[]        = "#b4b4b4";
static char tagsnormfloatcolor[]         = "#323842";

static char tagsselfgcolor[]             = "#2c313a";
static char tagsselbgcolor[]             = "#d7dae0";
static char tagsselbordercolor[]         = "#d7d7d7";
static char tagsselfloatcolor[]          = "#d7d7d7";

static char hidnormfgcolor[]             = "#005577";
static char hidselfgcolor[]              = "#227799";
static char hidnormbgcolor[]             = "#222222";
static char hidselbgcolor[]              = "#222222";

static char urgfgcolor[]                 = "#323842";
static char urgbgcolor[]                 = "#b4b4b4";
static char urgbordercolor[]             = "#86959F";
static char urgfloatcolor[]              = "#86959F";

static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { hidnormfgcolor,   hidnormbgcolor,   c000000,              c000000 },
	[SchemeHidSel]       = { hidselfgcolor,    hidselbgcolor,    c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};

const char *spcmd1[] = {"st", "-n", "spterm", "-g", "120x34", "-e", "ncmpcpp", NULL };
const char *spcmd2[] = {"st", "-n", "spterm", "-g", "650x500", "-e", "spt", NULL };
static Sp scratchpads[] = {
   /* name          cmd  */
   {"ncmpcpp",      spcmd1},
   {"spt",          spcmd2},
};

/* Tags
 * In a traditional dwm the number of tags in use can be changed simply by changing the number
 * of strings in the tags array. This build does things a bit different which has some added
 * benefits. If you need to change the number of tags here then change the NUMTAGS macro in dwm.c.
 *
 * Examples:
 *
 *  1) static char *tagicons[][NUMTAGS*2] = {
 *         [DEFAULT_TAGS] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I" },
 *     }
 *
 *  2) static char *tagicons[][1] = {
 *         [DEFAULT_TAGS] = { "•" },
 *     }
 *
 * The first example would result in the tags on the first monitor to be 1 through 9, while the
 * tags for the second monitor would be named A through I. A third monitor would start again at
 * 1 through 9 while the tags on a fourth monitor would also be named A through I. Note the tags
 * count of NUMTAGS*2 in the array initialiser which defines how many tag text / icon exists in
 * the array. This can be changed to *3 to add separate icons for a third monitor.
 *
 * For the second example each tag would be represented as a bullet point. Both cases work the
 * same from a technical standpoint - the icon index is derived from the tag index and the monitor
 * index. If the icon index is is greater than the number of tag icons then it will wrap around
 * until it an icon matches. Similarly if there are two tag icons then it would alternate between
 * them. This works seamlessly with alternative tags and alttagsdecoration patches.
 */
static char *tagicons[][NUMTAGS] =
{
	[DEFAULT_TAGS]        = { "dev", "alt", "web", "sof", "util", "vid", "mus", "chat", "soc" },
	[ALTERNATIVE_TAGS]    = { "A", "B", "C", "D", "E", "F", "G", "H", "I" },
	[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },
};

/* There are two options when it comes to per-client rules:
 *  - a typical struct table or
 *  - using the RULE macro
 *
 * A traditional struct table looks like this:
 *    // class      instance  title  wintype  tags mask  isfloating  monitor
 *    { "Gimp",     NULL,     NULL,  NULL,    1 << 4,    0,          -1 },
 *    { "Firefox",  NULL,     NULL,  NULL,    1 << 7,    0,          -1 },
 *
 * The RULE macro has the default values set for each field allowing you to only
 * specify the values that are relevant for your rule, e.g.
 *
 *    RULE(.class = "Gimp", .tags = 1 << 4)
 *    RULE(.class = "Firefox", .tags = 1 << 7)
 *
 * Refer to the Rule struct definition for the list of available fields depending on
 * the patches you enable.
 */
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 *	WM_WINDOW_ROLE(STRING) = role
	 *	_NET_WM_WINDOW_TYPE(ATOM) = wintype
	 */
	RULE(.wintype = WTYPE "DIALOG", .isfloating = 1)
	RULE(.wintype = WTYPE "UTILITY", .isfloating = 1)
	RULE(.wintype = WTYPE "TOOLBAR", .isfloating = 1)
	RULE(.wintype = WTYPE "SPLASH", .isfloating = 1)
	RULE(.class = "Gimp", .tags = 1 << 4)
	RULE(.class = "firefox", .tags = 1 << 2)
    RULE(.class = "Brave-browser", .tags = 1 << 8)
	RULE(.class = "pavucontrol", .isfloating = 1)
	RULE(.instance = "spterm", .tags = SPTAG(0), .isfloating = 1)
	RULE(.class = "obs", .tags = 1 << 4)
	RULE(.class = "code-oss", .tags = 1 << 3)
	RULE(.class = "St", .isterminal = 1)
	RULE(.class = "kitty", .isterminal = 1)
	RULE(.class = "vesktop", .tags = 1 << 7, .isfloating = 1)
	RULE(.instance = "spterm", .tags = SPTAG(0), .isfloating = 1)
    RULE(.class = "Virt-manager", .tags = 1 << 3, .isfloating = 1)
    RULE(.class = "vlc", .tags = 1 << 5)
    RULE(.title = "AudioRelay", .tags = 1 << 4)
    RULE(.class = "TelegramDesktop", .tags = 1 << 7, .isfloating = 1)
    RULE(.class = "steam", .tags = 1 << 8)
    RULE(.class = "Spotify", .tags = 1 << 6)
    RULE(.class = "Godot", .tags = 1 << 3)
    RULE(.class = "Jellyfin Media Player", .tags = 1 << 5)
    RULE(.class = "qBittorrent", .tags = 1 << 3)
    RULE(.class = "Thorium-browser", .tags = 1 << 2)
    RULE(.class = "Exodus", .tags = 1 << 3)
    RULE(.class = "Nitrogen", .isfloating = 1)
};

/* Bar rules allow you to configure what is shown where on the bar, as well as
 * introducing your own bar modules.
 *
 *    monitor:
 *      -1  show on all monitors
 *       0  show on monitor 0
 *      'A' show on active monitor (i.e. focused / selected) (or just -1 for active?)
 *    bar - bar index, 0 is default, 1 is extrabar
 *    alignment - how the module is aligned compared to other modules
 *    widthfunc, drawfunc, clickfunc - providing bar module width, draw and click functions
 *    name - does nothing, intended for visual clue and for logging / debugging
 */
static const BarRule barrules[] = {
	/* monitor   bar    alignment         widthfunc                 drawfunc                clickfunc                hoverfunc                name */
	{ -1,        0,     BAR_ALIGN_LEFT,   width_tags,               draw_tags,              click_tags,              hover_tags,              "tags" },
	{  0,        0,     BAR_ALIGN_RIGHT,  width_systray,            draw_systray,           click_systray,           NULL,                    "systray" },
	{ -1,        0,     BAR_ALIGN_LEFT,   width_ltsymbol,           draw_ltsymbol,          click_ltsymbol,          NULL,                    "layout" },
	{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_status2d,           draw_status2d,          click_statuscmd,         NULL,                    "status2d" },
	{ -1,        0,     BAR_ALIGN_NONE,   width_wintitle,           draw_wintitle,          click_wintitle,          NULL,                    "wintitle" },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "(@)",      spiral },
	{ "[\\]",     dwindle },
	{ "---",      horizgrid },
	{ ":::",      gaplessgrid },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */

/* Dmenu */
static const char *dmenucmd[] = {
	"dmenu_run",
	"-m", dmenumon,
	"-fn", dmenufont,
	"-nb", normbgcolor,
	"-nf", normfgcolor,
	"-sb", selbgcolor,
	"-sf", selfgcolor,
	NULL
};

/* Rofi */
/*static char *roficmd[] = { "rofi", "-show", "drun", NULL };  normal */
/*static char *roficalc[] = { "rofi", "-show", "calc", NULL };  for emoji */
/*static char *rofiemoji[] = { "rofi", "-show", "emoji", NULL };  for caclulator */

/* Terminals */
static const char *stcmd[]  = { "st", NULL }; /* st terminal */
static const char *kittycmd[]  = { "kitty", NULL }; /* st terminal */

/* screenshots */
/*static const char *screenshot[] = { "/home/vaproh/.local/bin/scripts/vap-ss", NULL };  for static screenshots*/
/*static const char *capturess[] = { "/home/vaproh/.local/bin/scripts/vap-cap-reg", NULL };  for region capture ss*/
/*static const char *capwin[] = { "/home/vaproh/.local/bin/scripts/vap-act-ss", NULL };  for capturing focussed windows*/

/* commands */
/*static const char *powermenu[] = { "/home/vaproh/.local/bin/scripts/wm_power_menu", NULL };*/
/*static const char *lf[] = { "setsid", "-f", "st", "-e", "lfrun", NULL };*/
/*static const char *new_look[] = { "/home/vaproh/.local/bin/scripts/new_look", NULL };*/

/* This defines the name of the executable that handles the bar (used for signalling purposes) */
#define STATUSBAR "dwmblocks"

static const Key keys[] = {
	/* modifier                     key            function                argument */
	/*{ MODKEY,                       XK_space,      spawn,                  {.v = roficmd } },*/
	/*{ MODKEY,						XK_c,	       spawn,		           {.v = roficalc } },*/
	/*{ MODKEY,						XK_e,	       spawn,		           {.v = rofiemoji } },*/
	/*{ MODKEY,	                	XK_Return,     spawn,                  {.v = stcmd } },*/
	{ MODKEY,	                	XK_Return,     spawn,                  {.v = kittycmd } },
	/*{ MODKEY,	                	XK_p,	       spawn,                  {.v = powermenu } },*/
	{ MODKEY,                       XK_b,          togglebar,              {0} },
	{ MODKEY,                       XK_j,          focusstack,             {.i = +1 } },
	{ MODKEY,                       XK_k,          focusstack,             {.i = -1 } },
	{ MODKEY,                       XK_i,          incnmaster,             {.i = +1 } },
	{ MODKEY,                       XK_o,          incnmaster,             {.i = -1 } },
	{ MODKEY,                       XK_h,          setmfact,               {.f = -0.05} },
	{ MODKEY,                       XK_l,          setmfact,               {.f = +0.05} },
	{ MODKEY|ShiftMask,             XK_h,          setcfact,               {.f = +0.25} },
	{ MODKEY|ShiftMask,             XK_l,          setcfact,               {.f = -0.25} },
	{ MODKEY|ShiftMask,             XK_o,          setcfact,               {0} },
	{ MODKEY|ShiftMask,             XK_j,          movestack,              {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,          movestack,              {.i = -1 } },
	{ MODKEY,                       XK_z,   	   zoom,                   {0} },
	{ MODKEY|Mod1Mask,              XK_u,          incrgaps,               {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_u,          incrgaps,               {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_i,          incrigaps,              {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_i,          incrigaps,              {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_o,          incrogaps,              {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_o,          incrogaps,              {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_6,          incrihgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_6,          incrihgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_7,          incrivgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_7,          incrivgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_8,          incrohgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_8,          incrohgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_9,          incrovgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_9,          incrovgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_0,          togglegaps,             {0} },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_0,          defaultgaps,            {0} },
	{ MODKEY,                       XK_Tab,        view,                   {0} },
	{ MODKEY,		                XK_q,          killclient,             {0} },
	{ MODKEY|ShiftMask,             XK_q,          quit,                   {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_q,          quit,                   {1} },
	{ MODKEY,		                XK_F5,         xrdb,                   {.v = NULL } },
	{ MODKEY,                       XK_t,          setlayout,              {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,          setlayout,              {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,          setlayout,              {.v = &layouts[2]} },
	{ MODKEY,                       XK_g,          setlayout,              {.v = &layouts[3]} },
	{ MODKEY,                       XK_y,          setlayout,              {.v = &layouts[4]} },
	{ MODKEY,                       XK_w,          setlayout,              {.v = &layouts[5]} },
	{ MODKEY,                       XK_s,          setlayout,              {.v = &layouts[6]} },
	{ MODKEY,                       XK_r,     	   setlayout,              {0} },
	{ MODKEY|ShiftMask,             XK_space,      togglefloating,         {0} },
	{ MODKEY,                       XK_grave,      togglescratch,          {.ui = 0 } },
	{ MODKEY|ControlMask,           XK_grave,      setscratch,             {.ui = 0 } },
	{ MODKEY|ShiftMask,             XK_grave,      removescratch,          {.ui = 0 } },
	{ MODKEY,                       XK_0,          view,                   {.ui = ~SPTAGMASK } },
	{ MODKEY|ShiftMask,             XK_0,          tag,                    {.ui = ~SPTAGMASK } },
	{ MODKEY,                       XK_comma,      focusmon,               {.i = -1 } },
	{ MODKEY,                       XK_period,     focusmon,               {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,      tagmon,                 {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period,     tagmon,                 {.i = +1 } },
    { Mod1Mask,                     XK_Tab,        alttabstart,            {0} },
	/*{ MODKEY,			XK_Print,      spawn,		       {.v = screenshot } },*/
	/*{ ControlMask,			XK_Print,      spawn,		       {.v = capturess } },*/
	/*{ ShiftMask,			XK_Print,      spawn,		       {.v = capwin } },      */
	/*{ MODKEY,			XK_d,	       spawn,		       {.v = lf } },      */
	/*{ MODKEY,                       XK_n,	       spawn,                  {.v = new_look } },*/
	{ MODKEY,			XK_x,	       togglescratch,	       {.ui = 0 } },
	{ MODKEY|ShiftMask,	XK_x,	       togglescratch,	       {.ui = 1 } },
	TAGKEYS(                        XK_1,                                  0)
	TAGKEYS(                        XK_2,                                  1)
	TAGKEYS(                        XK_3,                                  2)
	TAGKEYS(                        XK_4,                                  3)
	TAGKEYS(                        XK_5,                                  4)
	TAGKEYS(                        XK_6,                                  5)
	TAGKEYS(                        XK_7,                                  6)
	TAGKEYS(                        XK_8,                                  7)
	TAGKEYS(                        XK_9,                                  8)
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask           button          function        argument */
	{ ClkLtSymbol,          0,                   Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,                   Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,                   Button2,        zoom,           {0} },
	{ ClkStatusText,        0,                   Button1,        sigstatusbar,   {.i = 1 } },
	{ ClkStatusText,        0,                   Button2,        sigstatusbar,   {.i = 2 } },
	{ ClkStatusText,        0,                   Button3,        sigstatusbar,   {.i = 3 } },
	{ ClkStatusText,        0,                   Button4,        sigstatusbar,   {.i = 4 } },
	{ ClkStatusText,        0,                   Button5,        sigstatusbar,   {.i = 5 } },
	{ ClkClientWin,         MODKEY,              Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,              Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,              Button3,        resizemouse,    {0} },
	{ ClkClientWin,         MODKEY|ShiftMask,    Button3,        dragcfact,      {0} },
	{ ClkClientWin,         MODKEY|ShiftMask,    Button1,        dragmfact,      {0} },
	{ ClkTagBar,            0,                   Button1,        view,           {0} },
	{ ClkTagBar,            0,                   Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,              Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,              Button3,        toggletag,      {0} },
};

