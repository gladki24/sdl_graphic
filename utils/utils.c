//
// Created by Seweryn on 09.03.2021.
//

#include "utils.h"

static int update_window_event(void *event) {
    SDL_Event* pollEvent;
    SDL_WindowEvent* windowEvent = (SDL_WindowEvent*) event;

    while (true) {
        while (SDL_PollEvent(pollEvent));
        windowEvent = &pollEvent->window;

        if (windowEvent->type == SDL_WINDOWEVENT_CLOSE)
            break;
    }

    return true;
}

void initialize() {
    SDL_Init(SDL_INIT_VIDEO);
}

void quit() {
    SDL_Quit();
}

void delay(int ms) {
    SDL_Delay(ms);
}

SDL_Thread *listen_exit_event(SDL_WindowEvent *event) {

    SDL_Thread *thread = SDL_CreateThread(
            update_window_event,
            "THREAD_KEYBOARD_EVENT",
            event
    );

    return thread;
}

void stop_listen_exit_event(SDL_Thread* thread) {
    SDL_DetachThread(thread);
}