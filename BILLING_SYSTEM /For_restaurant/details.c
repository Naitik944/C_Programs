//
// Created by Naitik Singh on 02/10/26.
//

#include "details.h"

#include <stdio.h>
#include <time.h>

void print_restaurant_details(void) {
    printf("Aaradya Donne Biryani House\n"
           "  No: 50, CS Mansion Church \nStreet, Bangalore-560001 No:\n"
           "9902422199 -- GSTIN No: \n29ARQPG9410K1Z9\n"

    "__________________________________________________________________\n"
    "Name:\n"
    "__________________________________________________________________\n"
    );
}

void print_etc_details(int table) {
    time_t current_time = time(NULL);
    struct tm *current_date = localtime(&current_time);
    char date[sizeof("dd/mm/yy")];

    if (current_date == NULL ||
        strftime(date, sizeof(date), "%d/%m/%y", current_date) == 0) {
        fputs("Unable to determine the current date.\n", stderr);
        return;
    }

    printf("Date: %s\tDINE IN: Table %d\n", date, table);
}