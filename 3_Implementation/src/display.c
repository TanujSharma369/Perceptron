#include "perceptron.h"
#include<stdio.h>
/**
 * @brief displaying weights
 * 
 * @param data 
 */
void displayWeight(struct Data *data){
    for(int i=0;i<3;i++){
        printf("\t%d",data->weights[i]);
    }
}

/**
 * @brief displaying dataset
 * 
 * @param data 
 */
void displayData(struct Data *data){
    printf("\tX\tY\tOUTPUT\n");
   for(int i=0;i<4;i++){
     printf("\t%d\t%d\t%d\n",data->x[i],data->y[i],data->output[i]);
   } 
}