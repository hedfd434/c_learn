#include "trig.h"
#define __TRIG_H__

int vector_sum(vector v_1, vector v_2)
{

    return 0;
}

int vector_dissasemble(vector * v_1)
{
    v_1->x_component = v_1->magnitude * cos((v_1->angle * M_PI /180.0));

    v_1->y_component = v_1->magnitude * sin((v_1->angle * M_PI /180.0));

    return 0;
}