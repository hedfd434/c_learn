#include <stdio.h>
#include <windows.h>
#include <time.h>

//custom libs
#include "main.h"
#include "timers.h"
#include "messages.h"


// timer_a timer_2;
// time_t timer_1; //= //time(NULL);
int main(int argc, int** argv)
{
    
    timer_a* timer_1_ptr = timer_init("tim1\0", 5, communicate_1);


    timer_a* timer_2_ptr = timer_init("tim2\0", 1, communicate_2);

    //is it possible to call functions like below ?
    // timer_1_ptr->trigger_callBack();
    // printf("timer_1_ptr = %d\n", timer_1_ptr);
    // timer_1_ptr->trigger_callBack();
    while(1)
    {

        timer_event(timer_1_ptr);

        timer_event(timer_2_ptr);

        Sleep(1000);
        // time(&timer_1);
        // printf("time = %ld\n\n", timer_1);
        // printf("test = %ld\n\n", (int)time(NULL));
        // __TIMESTAMP__
        // __TIME__
        // Sleep(500);
        // timeGetTime();
    }

    return 0;
}
