/*
** EPITECH PROJECT, 2020
** defender project
** File description:
** tavern pnj
*/

#include "../../../../include/rpg.h"

int init_tavern_pnj(game_t *game)
{
    if (!(game->game_scenes[TAVERN_MAP].pnj = malloc(sizeof(elem_t) * 2)))
        return (1);
    game->game_scenes[TAVERN_MAP].pnj[PNJ_F] = create_element(
        game->game_scenes[TAVERN_MAP].pnj[PNJ_F],
                "media/pnj/tavern_pnj.png", 1520, 671);
    game->game_scenes[TAVERN_MAP].pnj[PNJ_S] = create_element(
        game->game_scenes[TAVERN_MAP].pnj[PNJ_S],
                "media/pnj/w_tavern.png", 890, 144);
    return (0);
}