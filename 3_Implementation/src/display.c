#include "perceptron.h"
#include<stdio.h>
void displayWeight(int *weights)
{
    for(int i=0;i<3;i++)
    {
        printf("%d|",weights[i]);
    }
}

void displayData(struct Data *data){
    for(int i=0;i<4;i++)
     printf("%d",data->x[i]);
}