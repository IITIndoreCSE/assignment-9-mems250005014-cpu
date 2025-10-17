#include <iostream>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
  
    Color colors[5] = {
        {120, 60, 200},
        {10, 100, 255},
        {45, 200, 75},
        {255, 255, 0},
        {0, 128, 128}
    };

    
    for (int i = 0; i < 3; ++i) {
        colors[i].red   = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue  = 255 - colors[i].blue;
    }

    
    cout << "Updated RGB values:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Color " << i + 1 << ": ("
             << colors[i].red << ", "
             << colors[i].green << ", "
             << colors[i].blue << ")\n";
    }

    return 0;
}

