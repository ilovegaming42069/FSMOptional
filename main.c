#include <stdio.h>
#include <stdbool.h>
#include "mylib/mylib.h"

void doors_closed() {
    printf(" _________________\n");
    printf("|        |        |\n");
    printf("|        |        |\n");
    printf("|        |        |\n");
    printf("|        |        |\n");
    printf("|        |        |\n");
    printf("|        |        |\n");
    printf("|________|________|\n");
    printf("  Door is closed\n");
}

void doors_opening() {
    printf(" _________________\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|____|________|___|\n");
    printf("   <-          ->\n");
    printf("  Door is opening\n");
}

void doors_closing() {
    printf(" _________________\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|    |        |   |\n");
    printf("|____|________|___|\n");
    printf("   ->          <-\n");
    printf("  Door is closing\n");
}

void doors_open() {
    printf(" _________________\n");
    printf("|                 |\n");
    printf("|                 |\n");
    printf("|                 |\n");
    printf("|                 |\n");
    printf("|                 |\n");
    printf("|                 |\n");
    printf("|_________________|\n");
    printf("   Door is open\n");
}

int main(void) {
    int s0 = 0, s1 = 0, P, D, M = 0, S = 0;
    while (true) {
        if (M == 0 && S == 0) {
            doors_closed();
        } else if (M == 1 && S == 1){
            doors_opening();
        } else if (M == 0 && S == 1){
            doors_open();
        } else if (M == 1 && S == 0){
            doors_closing();
        } 
        printf("Enter button input (0 if the sensor does not detect a person // 1 if the sensor detects a person): ");
        scanf("%d", &P);
        printf("Enter button input (0 if the time for door closing/opening has not passed // 1 if the time for door closing/opening has passed): ");
        scanf("%d", &D);


        if (P == 0 || P == 1 && D == 0 || D == 1) {
            states(s0, s1, P, D, &s0, &s1, &M, &S);
        } else {
            printf("Please enter a proper input (0 or 1)\n");
        }
    }
    return 0;
}

