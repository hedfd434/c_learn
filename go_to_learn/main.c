#include <stdio.h>

//functions defs
int fun_1(void);
int fun_2(void);

goto point_1;

point_1:


int main(int argc, char argv[])
{
    printf("test 1\n");

    //goto point_1;

    printf("test 2\n");

    //point_1:

    printf("test 3\n");
    return 0;
}

int fun_1(void)
{
    printf("fun_1\n");
    return 1;
}


int fun_2(void)
{
    printf("fun_2\n");
    return 1;
}