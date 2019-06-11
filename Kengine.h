
#ifndef KENGINE
#define KENGINE


#include <iostream>
#include <exception>
#include <algorithm>
#include <string>

#include "SDL2pp/SDL2pp.hh"


class Kengine {

  private:
    SDL2pp::SDL sdl (SDL_INIT_VIDEO);
    SDL2pp::Window * window;
    SDL2pp::SDLTTF ttf;
    SDL2pp::Renderer * renderer;

  public:
    Kengine();
    void init( void );

};


#endif /* end of include guard: KENGINE */
