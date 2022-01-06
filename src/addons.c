/*
** EPITECH PROJECT, 2022
** my_runner
** File description:
** add-ons
*/

#include "../include/runner.h"

void play_background_music(window_t *music)
{
	music->play_background_music.music =
	sfMusic_createFromFile("../music/riothxh.mp3");
}
