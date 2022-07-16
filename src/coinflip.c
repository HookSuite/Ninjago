#include <coinflip.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inputData(void)
{
    printf("Coin Flip Simulation\n\n");
    printf("Enter amount of flips: ");

    int amount;
    scanf("%i",&amount);
    return amount;
}

void generateRandom(int amount)
{
    int results[amount];
    int heads = 0;

    srand(time(NULL));
    for (int i = 0; i != amount; ++i)
        if (rand() & 1)
            results[i] = 1;
        else {
            results[i] = 0;
            ++heads;
        }

    FILE*