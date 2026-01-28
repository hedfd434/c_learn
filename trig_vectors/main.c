#include <stdio.h>
#include "trig.h"


int main()
{

    vector vector_1 = {2.5, 45.0, 0.0, 0.0};

    vector vector_2 = {0.0, 0.0, 0.0, 0.0};

    vector_dissasemble(&vector_1);

    printf("vector_1: mag = %f, ang = %f, x_component = %f, y_component = %f", vector_1.magnitude, vector_1.angle, vector_1.x_component, vector_1.y_component);

    return 0;
}