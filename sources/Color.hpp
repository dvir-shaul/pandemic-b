#pragma once
#include <vector>
#include <string>

using namespace std;

namespace pandemic{
    
    enum Color{
        Black,
        Blue,
        Red,
        Yellow
    };

    inline const std::vector<std::string> colors_by_order = {"Black","Blue","Red","Yellow"};
};