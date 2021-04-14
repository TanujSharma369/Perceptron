#include "perceptron.h"
#include<stdio.h>
void displayWeight(struct Data *data){
    for(int i=0;i<3;i++){
        printf("%d|",data->weights[i]);
    }
}

void displayData(struct Data *data){
    
   for(int i=0;i<4;i++)
     printf("\n| %d |\n|",data->x[i]);
   for(int i=0;i<4;i++)
     printf("\n| %d |\n|",data->y[i]);
   for(int i=0;i<4;i++)
     printf("\n| %d |\n|",data->output[i]);  
}