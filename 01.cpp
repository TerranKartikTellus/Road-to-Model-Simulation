#include <SDL2/SDL.h>
#include <stdio.h>

#define SCREEN_WIDTH 1280 
#define SCREEN_HEIGHT 720
#define SCREEN_TITLE "Simu"

int main(int argc, char** argv){

  SDL_Window *window = nullptr;
  SDL_Renderer* renderer = nullptr;

  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(SCREEN_WIDTH,SCREEN_HEIGHT,0,&window ,&renderer);
  SDL_RenderSetScale(renderer,1,1);

  SDL_SetRenderDrawColor(renderer,0,0,0,255);
  SDL_RenderClear(renderer);

  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  // SDL_RenderClear(renderer);
  for(int i=0;i<200;i++){
  SDL_RenderDrawPoint(renderer,SCREEN_WIDTH/2,SCREEN_HEIGHT/2 + 1);
  }
  SDL_RenderPresent(renderer);

  SDL_Delay(10000);


  return 0;
}