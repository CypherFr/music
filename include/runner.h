/*
** EPITECH PROJECT, 2021
** my runner
** File description:
** runner h
*/

#include <stdlib.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Audio.h>

#ifndef RUNNER_H_
	#define RUNNER_H_

typedef struct play_music
{
	sfMusic *music
} play_music_t;

typedef struct window_t {
    sfRenderWindow *window;
    sfEvent event;
    sfTexture *texture;
    sfTexture *ground1;
    sfTexture *ground2;
    sfTexture *ground3;
    sfTexture *ground4;
    sfTexture *b_ground1;
    sfTexture *b_ground2;
    sfSprite *sprite;
    sfSprite *ground_1;
    sfSprite *ground_2;
    sfSprite *ground_3;
    sfSprite *ground_4;
    sfSprite *b_ground_1;
    sfSprite *b_ground_2;
    sfVector2f pos_ground1;
    sfVector2f pos_ground2;
    sfVector2f pos_ground3;
    sfVector2f pos_ground4;
    sfVector2f pos_b_ground1;
    sfVector2f pos_b_ground2;
    sfVector2f pos_sprite;
    sfVector2f origin;
    play_music_t play_background_music;
    int move;
    int gravity;
} window_t;

void play_background_music(window_t *music);
void runner(void);

void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);

#endif
