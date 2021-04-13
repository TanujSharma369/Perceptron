#include<stdio.h>
#include "perceptron.h"
int weights[3];

int main(int argc, char const *argv[])
{
    struct Data data;
    initWeights(weights);
    initData(&data);
    displayData(&data);
    return 0;
}
