#include <stdio.h>
#include <string.h>
#include "vending_machine.h"

transaction transaction_main;


// FILE* file_1;
products list[10];
// products product_1;
int main(int rgc, int** argv[])
{





    
    transaction_main.balance = 0.0;
    transaction_main.current_state = IDLE;
    transaction_main.previous_state = START;


    // // file_1 = fopen("C:/Users/kubaw/Desktop/c_learn/machine_state/products.csv", "r");

    // read_products("C:/Users/kubaw/Desktop/c_learn/machine_state/products.csv", list);

    // list_print(list);
    while (1)
    {
        machine_check(&transaction_main);


        print_stats(&transaction_main);
    }
    
    return 0;
}