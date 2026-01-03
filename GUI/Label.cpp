//
// Created by ratan on 1/1/2026.
//

#include "Label.h"

Label::Label(const Rectangle rect, const char * textInput,
    const Color textColor = BLACK, const int fSize = 0, const int gap = 10)
    : text(textInput), color(textColor) {
    xPos = rect.x; // NOLINT
    yPos = rect.y; // NOLINT
    fontSize = fSize > 0 ? fSize : rect.height - gap; // NOLINT
}

void Label::centerPos(const Rectangle rect) {
    xPos = rect.x + (rect.width - MeasureText(text, fontSize)) / 2; // NOLINT
    yPos = rect.y + (rect.height - fontSize) / 2; // NOLINT
}

void Label::draw() const {
    DrawText(text, xPos, yPos, fontSize, color);
}