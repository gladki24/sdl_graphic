//
// Created by Seweryn on 09.03.2021.
//

#include "renderer.h"

struct renderer {
    SDL_Renderer *sdl_renderer;
};

renderer *make_renderer(window *window) {
    renderer *renderer = malloc(sizeof(struct renderer));

    renderer->sdl_renderer = SDL_CreateRenderer(
            get_sld_window(window),
            -1,
            SDL_RENDERER_ACCELERATED
    );

    return renderer;
}

void destroy_renderer(renderer *renderer) {
    SDL_DestroyRenderer(renderer->sdl_renderer);
    free(renderer);
}

SDL_Renderer* get_sdl_renderer(renderer* renderer) {
    return renderer->sdl_renderer;
}