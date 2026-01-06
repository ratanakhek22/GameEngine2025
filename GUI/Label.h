//
// Created by ratan on 1/1/2026.
//

#ifndef GAMEENGINE2025_LABEL_H
#define GAMEENGINE2025_LABEL_H

#include "raylib.h"
#include <optional>

struct LabelConfig {
    const char* text = "";
    std::optional<int> fontSize;
    Color color = BLACK;
    int gap = 10;
};

class Label {
    const char *text = nullptr;
    Color color = BLACK;
    int xPos = 0;
    int yPos = 0;
    int fontSize = 0;

public:
    // constructor
    Label() = default;
    explicit Label(Rectangle rect, const LabelConfig &config = {});
    Label(int xPos, int yPos, const LabelConfig &config = {});

    // methods
    void centerPos(Rectangle rect);
    void draw() const;

    // gets
    [[nodiscard]] int getxPos() const { return xPos; }
    [[nodiscard]] int getyPos() const { return yPos; }
    [[nodiscard]] int getFontSize() const { return fontSize; }
    [[nodiscard]] const char* getText() const { return text; }
};

#endif //GAMEENGINE2025_LABEL_H