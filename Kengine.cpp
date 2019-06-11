
#include "Kengine.h"

using namespace SDL2pp;

  // CONSTRUCTORS
Kengine::Kengine(){

  init();

}


  //METHODS
void Kengine::init() {

  // Initialize SDL library
  if((SDL_INIT_VIDEO) == -1){
    fprintf(stderr, "Erreur d'initialisaton de la SDL : %s\n", SDL_GetError() );
    exit(EXIT_FAILURE);
  }


  // Create main window: 640x480 dimensions, resizable, "SDL2pp demo" title
	 *window = Window ("SDL2pp demo",
      SDL_WINDOWPOS_UNDEFINED,  SDL_WINDOWPOS_UNDEFINED,
      1920, 1080,
			SDL_WINDOW_RESIZABLE);

	// Create accelerated video renderer with default driver
	 *renderer = Renderer (window, -1,  SDL_RENDERER_ACCELERATED);

}
