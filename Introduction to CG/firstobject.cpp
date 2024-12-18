// defining an array type with element type float
#include <iostream>
typedef float Point[3];

int main(){
    Point corners[8] = {
        {0, 0, 0},
        {12, 0, 0},
        {12, 8, 0},
        {0, 8, 0},
        {0, 0, 10},
        {12, 0, 10},
        {12, 8, 10},
        {0, 8, 10},
    };

    for (int i = 0; i < 8; ++i){
        float x_proj = corners[i][0] / corners[i][2]; // P'.x
        float y_proj = corners[i][1] / corners[i][2]; // P'.y
        printf("Projected corner %d: x:%f, y:%f\n", i, x_proj, y_proj);
    }

    return 0;
}