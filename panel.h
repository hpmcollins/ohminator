#ifndef PANEL_H
#define PANEL_H

#include "Atom.h"
#include "raylib.h"

class Panel : public Atom {
public:
    void draw(int x, int y, int width, int height, Texture2D spritesheet, float scale);
};

#endif
