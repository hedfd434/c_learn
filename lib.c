#include "lib.h"

//functions def
car* car_init(int max_speed_1, char brand_1[])
{
    car* init_car_buffer = calloc(sizeof(car), 1);

    strcpy(init_car_buffer->brand, brand_1);

    init_car_buffer->max_speed = max_speed_1;
    return init_car_buffer;
}