#include <stdio.h>
#include "trig.h"


int main()
{

    vector vector_1 = {2.5 , 0.0, 0.0, 0.0, false};

    vector vector_2 = {2.5 , 90.0, 0.0, 0.0, false};

    vector vector_3 = {3, 45, 0.0, 0.0, false};

    // vector_dissasemble(&vector_1);

    // vector_dif(&vector_1, &vector_2, &vector_3);

    // vector_dissasemble(&vector_3);

    scalar_multi(&vector_3, 4.0);

    printf("vector_3: mag = %f, ang = %f, x_component = %f, y_component = %f", vector_3.magnitude, vector_3.angle, vector_3.x_component, vector_3.y_component);

    return 0;
}