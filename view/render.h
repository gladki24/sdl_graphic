//
// Created by Seweryn on 10.03.2021.
//

#ifndef SDL_RENDER_H

#include "renderer.h"

#define SDL_RENDER_H

#endif //SDL_RENDER_H

/**
 * update screen
 */
void update_screen(renderer *renderer);

/**
 * prepare rectangle
 * @param renderer pointer to renderer
 * @param width width of rectangle
 * @param height height of rectangle
 * @param x x axis rectangle position
 * @param y y axis rectangle position
 */
void render_rectangle(
        renderer *renderer,
        int width,
        int height,
        int x,
        int y
);