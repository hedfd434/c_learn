#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H

#ifdef TEST
    // int test_void(void);
#endif

//structs definitions

//transaction struct
typedef enum {
    START = 0,
    IDLE,
    INSERT,
    PAY,
}ven_states;

// const char* available_states[4];
const char* available_states[4]; //variable prototype

typedef struct transaction
{
    ven_states current_state;
    ven_states previous_state;
    int balance;
} transaction;


//functions definitions
// int machine_scan(transaction* transaction_1, char command[], int command_lenght);
int handle_communicate(transaction* transaction_1, char command[], int command_lenght);


int machine_check(transaction* transaction_2);

int print_stats(transaction* transaction_3);



#endif //INCLUDE_VENDING_MACHINE_H