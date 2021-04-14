#include<stdio.h>
#include "src/perceptron.h"


int main(int argc, char const *argv[])
{
    struct Data data;
    initWeights(&data);
    initDataX(&data);
    initDataY(&data);
    initOutput(&data);
    printf("\nInitial weights\n");
    displayWeight(&data);
    forwardPropagation(&data, 20);
    printf("\nAfter Learning\n");
    displayWeight(&data);
    getchar();
    return 0;
}
