#include "sdl_adapter/sdl_adapter.h"

int main(int argc, char* argv[])
{
    SDL_ADAPTER_init();

    // Blocks until we get 'quit' event from SDL
    SDL_ADAPTER_pollevents();

    return 0;
}
