//
// Created by ratan on 1/1/2026.
//

#include "Button.h"

Button::Button(const Rectangle rect, const Color normColor, const Color hoverColor, const LabelConfig& config)
    : rect(rect), normalColor(normColor), hoverColor(hoverColor) {
    label = Label(rect, config);
}

bool Button::isClicked(const Vector2 mousePos) const {
    return CheckCollisionPointRec(mousePos, rect)
        && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

void Button::draw(const Vector2 mousePos) const {
    const bool hovering = CheckCollisionPointRec(mousePos, rect);
    DrawRectangleRec(rect, hovering ? hoverColor : normalColor);
    label.draw();
}