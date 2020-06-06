
//Screen dimension constants
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

// Init SDL and create window
int SDL_ADAPTER_init();

// Polls for SDL events coming from the system (quit, keydown, mousebutton down etc.)
// The function call is blocking until we get the sdl quit event.
void SDL_ADAPTER_pollevents();
