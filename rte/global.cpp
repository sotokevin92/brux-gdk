/*=============*\
| GLOBAL SOURCE |
\*=============*/

#include "main.h"
#include "sprite.h"
#include "global.h"

bool gvQuit = 0;
int gvMouseX = 0, gvMouseY = 0;
Uint32 gvScrW = 400, gvScrH = 240;
Uint32 gvWinW = 640, gvWinH = 360;
HSQUIRRELVM gvSquirrel;
FILE *gvLog;
SDL_Window *gvWindow;
SDL_Renderer *gvRender;
SDL_Texture *gvScreen;
int gvError;
Uint32 gvTicks = 0;
char *gvVNo = "v.1.0.1";
const float pi = 3.14159265;
bool gvClearScreen = 1;
SDL_Event Event;
vector<SDL_Texture*> vcTextures;
bool gvDebug = 1;
vector<xySprite*> vcSprites;
vector<TTF_Font*> vcFonts;
Uint32 gvBackColor;
Uint32 gvDrawColor;
vector<Mix_Chunk*> vcSounds;
vector<Mix_Music*> vcMusic;
string gvAppDir;
string gvWorkDir;