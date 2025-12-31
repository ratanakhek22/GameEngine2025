//
// Created by ratan on 12/30/2025.
//

#include "Testing.h"

#include <iostream>
#include <ostream>

void Testing::options(const std::vector<std::string> &options) {
    for (int i = 0; i < options.size(); i++) {
        std::cout << i << ": " << options[i] << std::endl;
    }
}
