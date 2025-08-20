#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H

#ifdef TEST
    // int test_void(void);
#endif

//definitions
#define LINE_MAX_LENGTH 100

#define MAX_PRODUCT 10

#define MAX_NAME_LENGTH 20

#define MAX_LINE_LENGTH 100

#define MAX_ARGUMENTS__IN_LINE 4


//structs definitions

//transaction struct
typedef enum {
    START = 0,
    IDLE,
    LIST,
    INSERT,
    PAY,
}ven_states;



typedef struct transaction
{
    ven_states current_state;
    ven_states previous_state;
    float balance;
} transaction;

typedef struct products
{
    float price;
    char name[MAX_NAME_LENGTH];
}products;

// const char* available_states[4];
const char* available_states[5]; //variable prototype





//functions definitions
// int machine_scan(transaction* transaction_1, char command[], int command_LENGTH);
int handle_communicate(transaction* transaction_1, char command[], int command_lenght);


int machine_check(transaction* transaction_2);

int print_stats(transaction* transaction_3);




int read_products(char file_path[], products products_ptr[]);

int list_print(products list_ptr[]);



#endif //INCLUDE_VENDING_MACHINE_H