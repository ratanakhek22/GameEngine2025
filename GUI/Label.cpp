//
// Created by ratan on 1/1/2026.
//

#include "Label.h"

Label::Label(const Rectangle rect, const char * textInput,
    const Color textColor = BLACK, const int fSize = 0, const int gap = 10)
    : text(textInput), color(textColor) {
    fontSize = fSize > 0 ? fSize : rect.height - gap; // NOLINT
    this->centerPos(rect);
}

Label::Label(const int xPos, const int yPos, const char * textInput,
    const int fSize = 20, const Color textColor = BLACK)
    : xPos(xPos), yPos(yPos), fontSize(fSize), text(textInput), color(textColor) {}

void Label::centerPos(const Rectangle rect) {
    xPos = rect.x + (rect.width - MeasureText(text, fontSize)) / 2; // NOLINT
    yPos = rect.y + (rect.height - fontSize) / 2; // NOLINT
}

void Label::draw() const {
    DrawText(text, xPos, yPos, fontSize, color);
}