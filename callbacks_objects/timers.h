#ifndef INCLUDE_TIMERS_H
#define INCLUDE_TIMERS_H

//timer structd definition
typedef struct timer_a //is it name or alias ??
{
    char name[5];
    int trigger_resolution;
    //callbackfunction
    void (*trigger_callBack)(void);
}timer_a; //is it name or alias ??1


//variables
time_t epoch_1 = 0;

//functions
/* as a return we get a pointer to timer_a object*/
timer_a* timer_init(char name_1[], int trigger_resolution_1, void (*trigger_callBack)(void));


/* function to register a callback for a given function, works for re-registration*/
int timer_a_call_back_registration(timer_a* tim_ptr, void (*trigger_callBack)(void));

int timer_a_call_back_un_registration(timer_a* tim_ptr, void (*trigger_callBack)(void));

//handling of timers
int timer_event(timer_a* tim_ptr);
#endif //INCLUDE_TIMERS_H