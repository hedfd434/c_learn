#include <stdio.h>
#include <string.h>
#include "vending_machine.h"

transaction transaction_main;

int main(int argc, int** argv[])
{
    // char set1[10] = "insert";
    // printf("test_print = %s", set1);

    // int z = strcmp("insert", set1);
    transaction_main.balance = 0;
    transaction_main.current_state = IDLE;
    transaction_main.previous_state = START;


    // print_stats(&transaction_main);
    // printf("current_state = %s\n", available_states[0]);
    while (1)
    {
        machine_check(&transaction_main);


        print_stats(&transaction_main);
    }
    
    return 0;
}