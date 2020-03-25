/*
** EPITECH PROJECT, 2020
** rpg Project
** File description:
** events main menu
*/

#include "../../include/my.h"

int events_main_menu(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
                                                    &(game->window->event))) {
        if (game->window->event.type == sfEvtClosed) {
            sfRenderWindow_close(game->window->window);
            game->game_state[MAIN_MENU] = 0;
            game->game_is_up = 0;
        }
    }
    return (1);
}