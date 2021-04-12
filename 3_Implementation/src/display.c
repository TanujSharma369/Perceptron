#include "perceptron.h"
#include<stdio.h>
void display(int *weights)
{
    for(int i=0;i<3;i++)
    {
        printf("%d|",weights[i]);
    }
}