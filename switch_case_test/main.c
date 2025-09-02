#include <stdio.h>


int val_1 = 4;
int main()
{
    switch (val_1)
    {
        case 1:
            //code
            printf("single constant\n");
            break;
        case 2: case 3:
            //code
            printf("double constant in single line\n");
            break;
        case 4: case 5:
        case 6: case 7:
            //code
            printf("quadruple constant in two lines\n");
            break;
        default:
            //code
            break;
    }
    return 0;
}