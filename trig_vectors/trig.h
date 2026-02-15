#ifndef __TRIG_H__
#define __TRIG_H__

#define _USE_MATH_DEFINES //define before library
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct vector_type
{
    double magnitude; //in newtons
    double angle; //angle in degrees, measured from x positive semi axis

    double x_component; //in newtons
    double y_component; //in newtons

    bool valid_data;

}vector;


//functions definitions
int vector_sum(vector * v_1, vector * v_2, vector * v_3);
int vector_dif(vector * v_1, vector * v_2, vector * v_3);
int vector_dissasemble(vector * v_1);
int scalar_multi(vector * v_1, double scalar_val);
int scalar_div(vector * v_1, double scalar_val);
double dot_product(vector * v_1, vector * v_2);
double cross_product(vector * v_1, vector * v_2);
#endif
