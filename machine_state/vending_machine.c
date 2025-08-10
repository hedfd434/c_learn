#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "vending_machine.h"

const char* available_states[4] = {"START", "IDLE", "INSERT", "PAY"}; //variable definition

int machine_check(transaction* transaction_2)
{
    if(transaction_2->current_state != transaction_2->previous_state)
    {
        char command_buffer[10] = "";
        printf("current state = %s\n\n", available_states[transaction_2->current_state]);

        printf("type in a command:");

        scanf("%s", &command_buffer);

        printf("\n\n");

        handle_communicate(transaction_2, &command_buffer[0], (sizeof(command_buffer) / sizeof(char)) );
    }
    return 0;
}


int handle_communicate(transaction* transaction_1, char command[], int command_lenght)
{
    int value_buffer = 0;
    switch (transaction_1->current_state)
    {
    case IDLE:
        if(strcmp("insert", command) == 0) //different way of comparing strins... strcmp
        {
            transaction_1->previous_state = transaction_1->current_state;

            transaction_1->current_state = INSERT;
        }
        else if(strcmp("list", command) == 0)
        {
            //show list of products available to buy with prices
        }
        //add different cases
        break;

    case INSERT:

        value_buffer = atoi(command);

        transaction_1->balance += value_buffer;

        transaction_1->previous_state = transaction_1->current_state;

        transaction_1->current_state = IDLE;
        //change message to int add to balance
        break;

    case PAY:
        break;
        
    // case change:
    //     break;        
    
    default:
        break;
    }

    return 0;
}


int print_stats(transaction* transaction_3)
{
    printf("transaction balance = %d\n", transaction_3->balance);

    printf("transaction current state = %s\n", available_states[(transaction_3->current_state)]);

    printf("transaction previous state = %s\n", available_states[(transaction_3->previous_state)]);

    return 0;

}

