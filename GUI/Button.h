//
// Created by ratan on 1/1/2026.
//

#ifndef GAMEENGINE2025_BUTTON_H
#define GAMEENGINE2025_BUTTON_H

#include "raylib.h"
#include "Label.h"

class Button {
    Rectangle rect;
    Color normalColor;
    Color hoverColor;
    Label label;

public:
    // constructor
    Button();

    // methods
    bool isClicked(Vector2 mousePos) const;
    void draw(Vector2 mousePos) const;
};

#endif //GAMEENGINE2025_BUTTON_H