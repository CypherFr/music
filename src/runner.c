/*
** EPITECH PROJECT, 2021
** my runner
** File description:
** runner
*/

#include "../include/runner.h"

window_t mv(window_t win)
{
    sfSprite_setPosition(win.sprite, win.pos_sprite);
    sfSprite_setPosition(win.ground_1, win.pos_ground1);
    sfSprite_setPosition(win.ground_2, win.pos_ground2);
    sfSprite_setPosition(win.ground_3, win.pos_ground3);
    sfSprite_setPosition(win.ground_4, win.pos_ground4);
    sfSprite_setPosition(win.b_ground_1, win.pos_b_ground1);
    sfSprite_setPosition(win.b_ground_2, win.pos_b_ground2);

    win.pos_b_ground1.x = (win.move * 0.5) + 5 - 1920;
    win.pos_b_ground2.x = (win.move * 0.5) + 5 + 1918;
    win.pos_ground1.x = (win.move * 2) + 5 - 1920;
    win.pos_ground2.x = (win.move * 2) + (1*5);
    win.pos_ground3.x = (win.move * 2) + (1*5) + 1920;
    win.pos_ground4.x = (win.move * 2) + (1*5) + 3840;

    win.move -= 6;

    if (win.move < -1920) {
        win.pos_ground2.x = (win.move * 2) + (1*5) + 5760;
        win.pos_ground3.x = (win.move * 2) + (1*5) + 7680;
    }
    if (win.move < -3840)
        win.move = 0;
    return (win);
}

window_t positions(window_t win);

void draw_sprites(window_t win);

void close_window(sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event))
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
}

window_t sprites(window_t win);

window_t key_jump(window_t win)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && win.pos_sprite.y == 900)
        win.gravity = -20;

    win.pos_sprite.y = win.pos_sprite.y + win.gravity;

    if (win.pos_sprite.y < 900)
        sfSprite_rotate(win.sprite, 2.25);

    if (win.pos_sprite.y > 900) {
        win.gravity = 0;
        win.pos_sprite.y = 900;
    }
    return (win);
}

void play_background_music(window_t *music);

void runner(void)
{
    window_t win;
    sfVideoMode mode = {1920, 1080, 32};

    win = sprites(win);

    win.window = sfRenderWindow_create(mode, "runner", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(win.window, 60);
    sfSprite_setOrigin(win.sprite, win.origin);

    while (sfRenderWindow_isOpen(win.window)) {
        sfRenderWindow_clear(win.window, sfBlack);
        close_window(win.window);
        win.gravity += 1;
        win = mv(win);
        win = key_jump(win);
        draw_sprites(win);
        sfRenderWindow_display(win.window);
        sfMusic_play(play_background_music.music);
    }
    sfRenderWindow_destroy(win.window);
}
