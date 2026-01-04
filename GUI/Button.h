//
// Created by ratan on 1/1/2026.
//

#ifndef GAMEENGINE2025_BUTTON_H
#define GAMEENGINE2025_BUTTON_H

#include "raylib.h"
#include "Label.h"

class Button {
    Label label = Label();
    Rectangle rect = {0, 0, 0, 0, };
    Color normalColor = WHITE;
    Color hoverColor = WHITE;

public:
    // constructor
    Button() = default;
    Button(Rectangle rect, Color normColor, Color hoverColor,
        const LabelConfig& config = {});

    // methods
    [[nodiscard]] bool isClicked(Vector2 mousePos) const;
    void draw(Vector2 mousePos) const;
};

#endif //GAMEENGINE2025_BUTTON_H