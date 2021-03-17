//
// Created by Seweryn on 09.03.2021.
//

#ifndef SDL_WINDOW_H
#include <SDL.h>
#define SDL_WINDOW_H

#endif //SDL_WINDOW_H

/**
 * Window structure to handle application window
 */
typedef struct window window;

/**
 * Create window structure
 * @param width width of window
 * @param height height of window
 * @param title title of window
 * @return window structure
 */
window* make_window(int, int, char*);

/**
 * destroy window and free memory
 * @param window window to free and destroy
 */
void destroy_window(window* window);

/**
 * set window width
 * @param window window to modify
 * @param width width of window
 */
void set_window_width(window*, int);

/**
 * get window width
 * @param window
 * @return width of window
 */
int get_window_width(window*);

/**
 * set window height
 * @param window window to modify
 * @param height of window
 */
void set_window_height(window*, int);

/**
 * get window height
 * @param window
 * @return height of window
 */
int get_window_height(window*);

/**
 * set width and height of window
 * @param window window to modify
 * @param width new value of window width
 * @param height new value of window height
 */
void set_window_size(window*, int, int);

/**
 * get window title
 * @param window
 * @return title of window
 */
char* get_window_title(window*);

/**
 * set window title
 * @param window window to modify
 * @param title new title of window
 */
void set_window_title(window*, char*);

/**
 * get sld window structure
 * @param window application window
 * @return sld window
 */
SDL_Window* get_sld_window(window* window);