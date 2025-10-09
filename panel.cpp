#include "panel.h"

void Panel::draw(int x, int y, int width, int height, Texture2D spriteSheet, float scale) {
    const int tileSize = 16;
    int cornerSize = (int)(tileSize * scale);
    int middleWidth = width - (cornerSize * 2);
    int middleHeight = height - (cornerSize * 2);

    Rectangle srcRects[9];
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            int index = row * 3 + col;
            srcRects[index] = {
                (float)(col * tileSize),
                (float)(row * tileSize),
                (float)tileSize,
                (float)tileSize
            };
        }
    }

    Rectangle destRects[9] = {
        {(float)x, (float)y, (float)cornerSize, (float)cornerSize},
        {(float)(x + cornerSize), (float)y, (float)middleWidth, (float)cornerSize},
        {(float)(x + width - cornerSize), (float)y, (float)cornerSize, (float)cornerSize},
        {(float)x, (float)(y + cornerSize), (float)cornerSize, (float)middleHeight},
        {(float)(x + cornerSize), (float)(y + cornerSize), (float)middleWidth, (float)middleHeight},
        {(float)(x + width - cornerSize), (float)(y + cornerSize), (float)cornerSize, (float)middleHeight},
        {(float)x, (float)(y + height - cornerSize), (float)cornerSize, (float)cornerSize},
        {(float)(x + cornerSize), (float)(y + height - cornerSize), (float)middleWidth, (float)cornerSize},
        {(float)(x + width - cornerSize), (float)(y + height - cornerSize), (float)cornerSize, (float)cornerSize}
    };

    for (int i = 0; i < 9; i++) {
        DrawTexturePro(
            spriteSheet,
            srcRects[i],
            destRects[i],
            (Vector2){0.0f, 0.0f},
            0.0f,
            WHITE
        );
    }
}
