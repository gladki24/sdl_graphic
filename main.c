#include <stdio.h>
#include "utils/utils.h"
#include "view/render.h"

int main() {
    initialize();

    window* window = make_window(800, 600, "Hello SDL");
    if (window == NULL) {
        return 1;
    }

    renderer* renderer = make_renderer(window);

    SDL_WindowEvent windowEvent;
    SDL_Thread* thread = listen_exit_event(&windowEvent);

    double x = 10;

    while (true) {
        render_rectangle(renderer, 100, 100, (int)x, 10);
        update_screen(renderer);

        if (windowEvent.type == SDL_WINDOWEVENT_CLOSE)
            break;

        x += 0.01;
    }

    stop_listen_exit_event(thread);
    destroy_renderer(renderer);
    destroy_window(window);

    quit();
    return 0;
}
