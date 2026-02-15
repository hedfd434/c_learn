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
double dot_product(vector * v_1, vector * v_2)
{
    //where v_1 is force vector and v_2 is displacement vector
    double relative_angle = fabs(v_1->angle - v_2->angle);

    double dot_product = fabs(v_1->magnitude) * fabs(v_2->magnitude) * cos(relative_angle * (M_PI / 180.0 ));


    return dot_product;
}

//cross product
double cross_product(vector * v_1, vector * v_2)
{
    //in case of torque
    //where v_1 is radius and v_2 is applied force
    //v_1 contains radius of vector point application and an angle of the radius that starts from the imaginary x axis and center of this plane is located in the hinge of the lever
    //v_2 contains magnitude and ang angle of applied force to the point specified in the vector v_1

    double relative_angle = v_2->angle - v_1->angle;
    double cross_product = v_1->magnitude * v_2->magnitude * sin(relative_angle * M_PI / 180.0);

    return cross_product;
}