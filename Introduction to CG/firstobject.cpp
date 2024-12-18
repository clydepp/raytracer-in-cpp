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

    const unsigned int image_width = 512, image_height = 512;

    for (int i = 0; i < 8; ++i){
        float x_proj = corners[i][0] / corners[i][2]; // P'.x
        float y_proj = corners[i][1] / corners[i][2]; // P'.y

        float x_proj_remap = (1 + x_proj) / 2;
        float y_proj_remap = (1 + y_proj) / 2;
        float x_proj_pix = x_proj_remap * image_width;
        float y_proj_pix = y_proj_remap * image_height;

        printf("Projected corner %d: x:%f, y:%f\n", i, x_proj_pix, y_proj_pix);
    }

    return 0;
}