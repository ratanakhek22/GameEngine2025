//
// Created by ratan on 1/1/2026.
//

#include "Label.h"

Label::Label(const Rectangle rect, const LabelConfig &config)
    : text(config.text), color(config.color) {
    fontSize = config.fontSize.has_value() ? config.fontSize.value() : rect.height - config.gap; // NOLINT
    this->centerPos(rect);
}

Label::Label(const int xPos, const int yPos, const LabelConfig &config)
    : text(config.text), color(config.color), xPos(xPos), yPos(yPos) {
    fontSize = config.fontSize.has_value() ? config.fontSize.value() : 20;
}

void Label::centerPos(const Rectangle rect) {
    xPos = rect.x + (rect.width - MeasureText(text, fontSize)) / 2; // NOLINT
    yPos = rect.y + (rect.height - fontSize) / 2; // NOLINT
}

void Label::draw() const {
    DrawText(text, xPos, yPos, fontSize, color);
}