#include <stdio.h>
#include "vending_machine.h"

const char* available_states[4] = {"START" "IDLE", "INSERT", "PAY"}; //multiple definition

int machine_check(transaction* transaction_2)
{
    if(transaction_2->current_state != transaction_2->previous_state)
    {
        char command_buffer[] = "\0";
        printf("current state = %s\n\n", available_states[transaction_2->current_state]);

        printf("type in a command:");

        scanf("%s", &command_buffer);

        handle_communicate(transaction_2, &command_buffer[0], (sizeof(command_buffer) / sizeof(char)) );
    }
    return 0;
}


int handle_communicate(transaction* transaction_1, char command[], int command_lenght)
{
    switch (transaction_1->current_state)
    {
    case IDLE:
        if(command == "insert\0") //add money to the balance //check that in the other way maybe strcmp 
        {
            int money_buffer = 0;
            printf("type how much money do you want to put:");
            scanf("%d", &money_buffer); //assumptions that this number will be greater than zero
            transaction_1->balance += money_buffer;

            transaction_1->previous_state = transaction_1->current_state;

            transaction_1->current_state = INSERT;

            // printf("current_state = %s", states[transaction_1->current_state]);
        }
        break;

    case INSERT:
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

    printf("transaction current state = %s\n", available_states[transaction_3->current_state]);

    printf("transaction previous state = %s\n", available_states[transaction_3->previous_state]);

    return 0;

}

