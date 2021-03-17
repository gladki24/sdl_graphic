//
// Created by Seweryn on 09.03.2021.
//

#ifndef SDL_RENDERER_H
#include "window.h"
#include <SDL.h>
#define SDL_RENDERER_H

#endif //SDL_RENDERER_H

/**
 * Renderer state as struct
 */
typedef struct renderer renderer;

/**
 * initialize renderer
 * @return renderer struct
 */
renderer* make_renderer(window*);

/**
 * destroy renderer
 * @param renderer to destroy
 */
void destroy_renderer(renderer*);

/**
 * get sdl renderer structure
 * @param renderer
 */
SDL_Renderer* get_sdl_renderer(renderer*);