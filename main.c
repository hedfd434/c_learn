#include <stdio.h>
#include "lib.h"

int z = 20;

int y = 10;



int main(int argc, char **argv)
{

    for(int i = 0; i < argc; i++)
    {
        printf("argc = %d ddddd = %s\n", i, argv[i]);
    }
    
    // car* ptr_2 = car_init(200, "toYODA");

    // y = z++;
    /* example above is equal to:
    y = z;
    z++;*/

    // y = ++z;
    /* example above is equal to 
    z++;
    y = z;*/


    /* in overall if iteration operator at first place the itaration is first then assigment of value*/
    /* works also with decremenetation*/
    return 0;
}