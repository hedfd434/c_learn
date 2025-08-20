#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "vending_machine.h"

//variables and constant
const char* available_states[4] = {"START", "IDLE", "LIST", "INSERT", "PAY"}; //variable definition

products products_list[10]; //list which holds product list on form of strcutures list

static const char token[1] = ",";

//only for testing purposes
char string_11[20] = "abcd\n\0";

static const char products_list_path[] = "C:/Users/kubaw/Desktop/c_learn/machine_state/products.csv"; //path to file with products
static int product_list_path_lenght = (sizeof(product_list_path_lenght) / sizeof(char)); //variable base on product_list_path length

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
    // float insert_buffer = 0.0; unused
    switch (transaction_1->current_state)
    {
    case IDLE: //idle start state
        //change next state in refere to command
        if(strcmp("insert", command) == 0) //different way of comparing strins... strcmp
        {
            transaction_1->previous_state = transaction_1->current_state;

            transaction_1->current_state = INSERT;
        }
        else if(strcmp("list", command) == 0) //list all of the available items
        {
            transaction_1->previous_state = transaction_1->current_state;

            transaction_1->current_state = LIST;
            //show list of products available to buy with prices
        }
        //add different cases
        break;

    case INSERT:
        /* accessible form many states, next state after insertion is origin state
        so for example if function came from idle it should back to the idle
        if it came from list, it sholuld back to the list 
        and so on*/
        
        float value_buffer = 0;

        value_buffer = atof(command);

        transaction_1->balance += value_buffer;

        transaction_1->previous_state = transaction_1->current_state;

        transaction_1->current_state = IDLE;
        
        break;

    case LIST:

        //print all of the items //add list of read products as the argument of function
        // list_print()



        //give and option to come back to idle, insert more money, or buy product (in future add return option)
        char command_buffer[20];

        scanf("choose next state: \n-to buy product type buy\n-to insert more money type insert\n- to get back to the idle type idle\ncommand: %d", command_buffer);

        if(strcmp(command_buffer, "buy\0"))
        {
            //change state for buy
        }
        else if(strcmp(command_buffer, "isenrt\0"))
        {
            //change state for isnert
        }
        else if(strcmp(command_buffer, "idle"))
        {
            //change state for idle
        }
        
        break;

    default:
        break;
    }

    return 0;
}


int print_stats(transaction* transaction_3)
{
    printf("transaction balance = %d\n", transaction_3->balance);

    printf("transaction current state = %s\n", available_states[(transaction_3->current_state)]);

    printf("transaction previous state = %s\n\n", available_states[(transaction_3->previous_state)]);

    return 0;

}

int read_products(char file_path[], products products_ptr[])
{

    // fopen(file_ptr, "r"); already done before

    // printf("file_path = %s\n", file_path);

    // return 0;

    FILE* file_buffer = fopen(file_path, "r"); //check fiel path
    fseek(file_buffer, 0, 0); //set file pointer to the begining

    int index_buffer = 0;

    float price_buffer = 0;

    char name_buffer[MAX_NAME_LENGTH];

    char line_buffer[MAX_LINE_LENGTH];

    char* string_ptr_buffer = NULL;


    //read the first line with table construction
    fgets(line_buffer, MAX_LINE_LENGTH, file_buffer);

    //or set file pointer
    // fseek(file_buffer, 2, 0);

    for(int i = 0; i < MAX_PRODUCT; i++)
    {
        fgets(line_buffer, MAX_LINE_LENGTH, file_buffer);
        //check if it is not empty
        //ADD IT



        //copy first value which is index
        string_ptr_buffer = strtok(line_buffer, token); //token must be compatible with specified type otherwise segmenation fault may occure

        index_buffer = (atoi(string_ptr_buffer)) - 1;



        // //get the product name
        string_ptr_buffer = strtok(NULL, token);

        strcpy(name_buffer, string_ptr_buffer);

        printf("string_ptr_buffer = %s\n", name_buffer);

        strcpy((products_ptr[index_buffer].name), name_buffer); //check if it works properly



        //get the product price
        string_ptr_buffer = strtok(NULL, token);

        price_buffer = atof(string_ptr_buffer);

        products_ptr[index_buffer].price = price_buffer;
    }


    fclose(file_buffer);
    // fclose(file_ptr);
}

int list_print(products list_ptr[])
{
    for(int i = 0; i < MAX_PRODUCT; i++)
    {
        printf("%d. %s, %f\n", (i + 1) , list_ptr[i].name, list_ptr[i].price);
    }
}