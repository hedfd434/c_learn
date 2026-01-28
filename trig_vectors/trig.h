#ifndef __TRIG_H__
#define __TRIG_H__

#define _USE_MATH_DEFINES //define before library
#include <math.h>


typedef struct vector_type
{
    double magnitude; //in newtons
    double angle; //angle in degrees, measured from x positive semi axis

    double x_component; //in newtons
    double y_component; //in newtons

}vector;


//functions definitions
int vector_sum(vector v_1, vector v_2);
int vector_dissasemble(vector * v_1);
#endif
