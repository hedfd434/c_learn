#include <stdio.h>
#include "trig.h"


int main()
{

    vector vector_1 = {1 , 90, 0.0, 0.0, false};

    vector vector_2 = {10 , 0.0, 0.0, 0.0, false};

    // vector vector_3 = {3, 45, 0.0, 0.0, false};

    vector_dissasemble(&vector_1);

    vector_dissasemble(&vector_2);

    // double dot_product_manual = (vector_1.x_component * vector_2.x_component) + (vector_1.y_component * vector_2.y_component);

    // printf("dot product manula = %f\n", dot_product_manual);

    double cross_product_val = cross_product(&vector_1, &vector_2);

    // printf("vector_1: mag = %f, ang = %f, x_component = %f, y_component = %f\n", vector_1.magnitude, vector_1.angle, vector_1.x_component, vector_1.y_component);

    // printf("vector_2: mag = %f, ang = %f, x_component = %f, y_component = %f\n", vector_2.magnitude, vector_2.angle, vector_2.x_component, vector_2.y_component);

    // vector_dif(&vector_1, &vector_2, &vector_3);

    // vector_dissasemble(&vector_3);

    // scalar_multi(&vector_3, 4.0);

    // printf("vector_3: mag = %f, ang = %f, x_component = %f, y_component = %f", vector_3.magnitude, vector_3.angle, vector_3.x_component, vector_3.y_component);

    printf("cross product = %f\n", cross_product_val);

    // printf("dot product = %f\n", dot_product(&vector_1, &vector_2));

    return 0;
}