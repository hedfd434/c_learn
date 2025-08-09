#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "timers.h"

// time_t epoch_1;

//functions
timer_a* timer_init(char name_1[], int trigger_resolution_1, void (*trigger_callBack)(void))
{
    timer_a* buffer_ptr = calloc(sizeof(timer_a), 1);
    if(buffer_ptr == NULL)
    {
        return NULL;
    }

    //segmentation
    strcpy(buffer_ptr->name, name_1);

    //segmentation
    buffer_ptr->trigger_resolution = trigger_resolution_1;


    if(trigger_callBack == NULL)
    {
        //nothing to register
        return buffer_ptr;
    }
    else
    {
        //register callback
        buffer_ptr->trigger_callBack = trigger_callBack;
    }


    return buffer_ptr;
}

int timer_a_call_back_registration(timer_a* tim_ptr, void (*trigger_callBack)(void))
{
    if(trigger_callBack != NULL)
    {
        tim_ptr->trigger_callBack = trigger_callBack;
    }
    else 
    {
        return -1;
    }
    
    return 0;
}


int timer_a_call_back_un_registration(timer_a* tim_ptr, void (*trigger_callBack)(void))
{
    if(trigger_callBack != NULL)
    {
        tim_ptr->trigger_callBack = NULL;
        
        return -1;
    }
    else
    {
        return -1;
    }


}


int timer_event(timer_a* tim_ptr)
{
    //getting epoch time
    time(&epoch_1);

    if((epoch_1 % (tim_ptr->trigger_resolution)) == 0)
    {
        tim_ptr->trigger_callBack();
    }
    return 0;
}
