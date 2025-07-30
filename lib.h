#ifndef INC_LIB_H_
#define INC_LIB_H_

#include <stdlib.h>
#include <string.h>
typedef struct car
{
    int max_speed;
    char brand[10];
} car;

//functions defs
car* car_init(int max_speed_1, char brand_1[]);

#endif //INC_LIB_H_