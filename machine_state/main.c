#include <stdio.h>

#include "vending_machine.h"

transaction transaction_main;

int main(int argc, int** argv[])
{
    transaction_main.balance = 0;
    transaction_main.current_state = START;
    transaction_main.previous_state = IDLE;

    while (1)
    {
        machine_check(&transaction_main);


        print_stats(&transaction_main);
    }
    
    return 0;
}