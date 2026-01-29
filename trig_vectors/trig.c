#include "trig.h"
#define __TRIG_H__

//v_1 and v_2 are the products v_3 is the resultant vector
int vector_sum(vector * v_1, vector * v_2, vector * v_3)
{
    vector_dissasemble(v_1);
    vector_dissasemble(v_2);

    double x_axis_sum = (v_1->x_component + v_2->x_component);
    double y_axis_sum = (v_1->y_component + v_2->y_component);
    v_3->magnitude = sqrt((pow(x_axis_sum, 2.0) + pow(y_axis_sum, 2.0)));
    
    if(v_3->magnitude == 0)
    {
        v_3->magnitude = 0;        
    }
    else
    {
        v_3->angle = atan2(y_axis_sum, x_axis_sum) * 180.0 / M_PI; 
        // v_3->angle = asin( y_axis_sum / v_3->magnitude) * 180 / M_PI;
        // v_3->angle = acos( x_axis_sum / v_3->magnitude) * 180 / M_PI;
    }
    

    return 0;
}

int vector_dif(vector * v_1, vector * v_2, vector * v_3)
{
    vector_dissasemble(v_1);
    vector_dissasemble(v_2);

    double x_axis_sum = (( (-1.0) * v_1->x_component) + v_2->x_component);
    double y_axis_sum = ((-1.0) * v_1->y_component + v_2->y_component);
    v_3->magnitude = sqrt((pow(x_axis_sum, 2.0) + pow(y_axis_sum, 2.0)));
    
    if(v_3->magnitude == 0)
    {
        v_3->magnitude = 0;        
    }
    else
    {
        v_3->angle = atan2(y_axis_sum, x_axis_sum) * 180.0 / M_PI; 
        // v_3->angle = asin( y_axis_sum / v_3->magnitude) * 180 / M_PI;
        // v_3->angle = acos( x_axis_sum / v_3->magnitude) * 180 / M_PI;
    }
    

    return 0;
}

int vector_dissasemble(vector * v_1)
{
    v_1->x_component = v_1->magnitude * cos((v_1->angle * M_PI / 180.0));

    v_1->y_component = v_1->magnitude * sin((v_1->angle * M_PI / 180.0));

    return 0;
}

int scalar_multi(vector * v_1, double scalar_val)
{
    v_1->magnitude *= scalar_val;

    vector_dissasemble(v_1);

    return 0;
}

int scalar_div(vector * v_1, double scalar_val)
{
    v_1->magnitude /= scalar_val;

    vector_dissasemble(v_1);
    
    return 0;
}

//dot product

//cross product