/*
** EPITECH PROJECT, 2022
** Utils
** File description:
** my_runner
*/

#include "../include/runner.h"

window_t positions(window_t win)
{
    win.move = 0;
    win.gravity = 0;

    win.pos_ground1.y = 950;
    win.pos_ground2.y = 950;
    win.pos_ground3.y = 950;
    win.pos_ground4.y = 950;

    win.pos_sprite.y = 900;
    win.pos_sprite.x = 150;
    return (win);
}

void draw_sprites(window_t win)
{
    sfRenderWindow_drawSprite(win.window, win.b_ground_1, NULL);
    sfRenderWindow_drawSprite(win.window, win.b_ground_2, NULL);
    sfRenderWindow_drawSprite(win.window, win.ground_1, NULL);
    sfRenderWindow_drawSprite(win.window, win.ground_2, NULL);
    sfRenderWindow_drawSprite(win.window, win.ground_3, NULL);
    sfRenderWindow_drawSprite(win.window, win.ground_4, NULL);
    sfRenderWindow_drawSprite(win.window, win.sprite, NULL);
}

window_t sprites(window_t win)
{
    win.origin.x = 50;
    win.origin.y = 50;

    win.ground1 = sfTexture_createFromFile("./images/floor.png", NULL);
    win.ground_1 = sfSprite_create();
    sfSprite_setTexture(win.ground_1, win.ground1, sfTrue);
    win.ground2 = sfTexture_createFromFile("./images/floor.png", NULL);
    win.ground_2 = sfSprite_create();
    sfSprite_setTexture(win.ground_2, win.ground2, sfTrue);
    win.ground3 = sfTexture_createFromFile("./images/floor.png", NULL);
    win.ground_3 = sfSprite_create();
    sfSprite_setTexture(win.ground_3, win.ground3, sfTrue);
    win.ground4 = sfTexture_createFromFile("./images/floor.png", NULL);
    win.ground_4 = sfSprite_create();
    sfSprite_setTexture(win.ground_4, win.ground4, sfTrue);
    win.b_ground1 = sfTexture_createFromFile("./images/background.png", NULL);
    win.b_ground_1 = sfSprite_create();
    sfSprite_setTexture(win.b_ground_1, win.b_ground1, sfTrue);
    win.b_ground2 = sfTexture_createFromFile("./images/background.png", NULL);
    win.b_ground_2 = sfSprite_create();
    sfSprite_setTexture(win.b_ground_2, win.b_ground2, sfTrue);
    win.texture = sfTexture_createFromFile("./images/cube.png", NULL);
    win.sprite = sfSprite_create();
    sfSprite_setTexture(win.sprite, win.texture, sfTrue);

    win = positions(win);
    return (win);
}
