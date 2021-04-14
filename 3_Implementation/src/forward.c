#include "perceptron.h"
#include<stdio.h>

void forwardPropagation(struct Data *data, int epochs){
    int gx = 0;
    int i=0,pos=-1;
    int temp=0;
    while(temp!=epochs){
    gx=0;
    gx = data->weights[0] + data->weights[1] * data->x[i] + data->weights[2] * data->y[i];
    gx = activation(gx);
    if(gx != data->output[i]){
         pos+=1;
         if(pos==0)
         data->weights[0]-= 1;
         else 
         data->weights[pos]+=1; 
        printf("| %d ",data->weights[pos]);
         i=0;
         if(pos==2) pos = -1;
         
    }
    else{
     i++;
     if(i==4){
      i=0;
     printf("\nlearned in %d epochs\n",temp);
     break;
     }
    }
   temp++;
    } 

}