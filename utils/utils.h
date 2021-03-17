//
// Created by Seweryn on 09.03.2021.
//

#ifndef SDL_UTILS_H
#include <SDL.h>
#include <stdbool.h>
#define SDL_UTILS_H

/**
 * initialize application
 */
void initialize();

/**
 * quit application
 */
void quit();

/**
 * delay in ms
 */
void delay(int);

/**
 * listen keyboard input in different thread
 * @param event out parameter representing keyboard event
 */
SDL_Thread* listen_exit_event(SDL_WindowEvent* event);

/**
 * clean input thread
 * @param thread active event input thread
 */
void stop_listen_exit_event(SDL_Thread* thread);

#endif //SDL_UTILS_H
