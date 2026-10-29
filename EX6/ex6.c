#include <stdio.h>
 
#define TOTAL_ORDERS 5
 
int main(void) {
    int i;
    char status;
 
    for (i = 1; i <= TOTAL_ORDERS; i++) {
        printf("Enter the status of order %d (I/S/V): ", i);
        scanf(" %c", &status);
 
        if (status == 'I') {
            printf("Order %d is invalid. Skipping this order.\n", i);
            continue;
        }
 
        if (status == 'S') {
            printf("Order %d marked as skip. Stopping processing of further orders.\n", i);
            break;
        }
 
        if (status == 'V') {
            printf("Order %d is valid. Processing order.\n", i);
        } else {
            printf("Order %d has an unknown status code.\n", i);
        }
    }
 
    return 0;
}
