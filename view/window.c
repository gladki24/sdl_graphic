//
// Created by Seweryn on 09.03.2021.
//

#include "window.h"

struct window {
        int width;
        int height;
        char* title;
        SDL_Window* sdl_window;
        SDL_Surface* sdl_surface;
};

window* make_window(
        int width,
        int height,
        char* title
        ) {
    window* window = malloc(sizeof(struct window));

    if (window == NULL) {
        return NULL;
    }

    window->width;
    window->height = height;
    window->title = title;
    window->sdl_window = SDL_CreateWindow(
            window->title,
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            width,
            height,
            SDL_WINDOW_SHOWN
            );
    window->sdl_surface = SDL_GetWindowSurface(window->sdl_window);

    return window;
}

void destroy_window(window* window) {
    SDL_DestroyWindow(window->sdl_window);
    free(window);
}


int get_window_width(window* window) {
    return window->width;
}


void set_window_width(window* window, int width) {
    set_window_size(window, width, window->height);
}

int get_window_height(window* window) {
    return window->height;
}

void set_window_height(window* window, int height) {
    set_window_size(window, window->width, height);
}

void set_window_size(window* window, int width, int height) {
    window->width = width;
    window->height = height;

    SDL_SetWindowSize(
            window->sdl_window,
            window->width,
            window->height
            );
}

char* get_window_title(window* window) {
    return window->title;
}


void set_window_title(window* window, char* title) {
    window->title = title;
    SDL_SetWindowTitle(window->sdl_window, window->title);
}

SDL_Window* get_sld_window(window* window) {
    return window->sdl_window;
}

