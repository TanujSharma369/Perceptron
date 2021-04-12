#include<stdio.h>
#include "perceptron.h"
int weights[3];

struct Data{
    int x[3];
    int y[3];
    int output[3];
};


int main(int argc, char const *argv[])
{
    initWeights(weights);
    display(weights);
    
    return 0;
}
