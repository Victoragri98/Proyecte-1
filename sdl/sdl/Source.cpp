#include <iostream>
#include "include/SDL.h"
#include <stdlib.h>
#pragma comment( lib, "lib/SDL2.lib")
#pragma comment(lib, "lib/SDL2main.lib")

int main(int argc,char* args[]) {
	
	SDL_Window* window=NULL;
	SDL_Renderer* renderer=NULL;
	SDL_Rect miRectangulo;

	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow("Prueba con cubo azul",SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,640,480,SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(renderer, 255,0,0, 255);
	SDL_RenderClear(renderer);

	miRectangulo.x = 50;
	miRectangulo.y = 50;
	miRectangulo.w = 300;
	miRectangulo.h = 300;

	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
	SDL_RenderFillRect(renderer, &miRectangulo);

	SDL_RenderPresent(renderer);

	SDL_Delay(20000);

	SDL_DestroyWindow(window);
	SDL_Quit();
	
	return 0;
}