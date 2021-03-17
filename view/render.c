//
// Created by Seweryn on 10.03.2021.
//

#include "render.h"

static SDL_Rect make_rectangle(int width,int height,int x,int y);

void update_screen(renderer *renderer) {
    SDL_RenderPresent(get_sdl_renderer(renderer));
}

void render_rectangle(
        renderer *renderer,
        int width,
        int height,
        int x,
        int y
) {

    SDL_SetRenderDrawColor(
            get_sdl_renderer(renderer),
            255,
            255,
            255,
            0);

    SDL_Rect rectangle = make_rectangle(width, height, x, y);

    SDL_RenderDrawRect(
            get_sdl_renderer(renderer),
            &rectangle
    );
}

static SDL_Rect make_rectangle(int width,int height,int x,int y) {
    SDL_Rect rectangle;
    rectangle.w = width;
    rectangle.h = height;
    rectangle.x = x;
    rectangle.y = y;
    return rectangle;
}
