#include <coinflip.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inputData(void)
{
    printf("Coin Flip Simulation\n\n");
    printf("Enter amount of flips: ");

    int amount;
    sc