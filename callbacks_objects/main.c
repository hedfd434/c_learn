#include <stdio.h>
#include <windows.h>
#include <time.h>

//custom libs
#include "main.h"
#include "timers.h"
#include "messages.h"


timer_a timer_2;
time_t timer_1; //= //time(NULL);
int main(int argc, int** argv)
{
    
    while(1)
    {
        time(&timer_1);
        printf("time = %ld\n\n", timer_1);
        // printf("test = %ld\n\n", (int)time(NULL));
        // __TIMESTAMP__
        // __TIME__
        Sleep(500);
        // timeGetTime();
    }

    return 0;
}
