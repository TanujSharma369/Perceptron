#include<stdio.h>
#include "perceptron.h"


int main(int argc, char const *argv[])
{
    struct Data data;
    initWeights(&data);
    initDataX(&data);
    initDataY(&data);
    initOutput(&data);
    //displayData(&data);
   // displayWeight(&data);
    return 0;
}
