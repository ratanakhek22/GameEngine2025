//
// Created by ratan on 1/1/2026.
//

#ifndef GAMEENGINE2025_LABEL_H
#define GAMEENGINE2025_LABEL_H

#include "raylib.h"

class Label {
    int xPos = 0;
    int yPos = 0;
    int fontSize = 20;
    const char *text = nullptr;
    Color color;

public:
    // constructor
    Label(Rectangle rect, const char * textInput, Color textColor, int fSize, int gap);

    // methods
    void centerPos(Rectangle rect);
    void draw() const;

    // gets
    int getxPos() const { return xPos; }
    int getyPos() const { return yPos; }
    int getFontSize() const { return fontSize; }
    const char *getText() const { return text; }
};

#endif //GAMEENGINE2025_LABEL_H