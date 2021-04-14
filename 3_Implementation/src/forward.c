#include "perceptron.h"
#include<stdio.h>

void forwardPropagation(struct Data *data, int epochs){
    int gx = 0;
    int i=0,pos=-1;
    int temp=1;
    int flag=0;
    while(temp<=epochs){
    gx=0;
    gx = data->weights[0] + data->weights[1] * data->x[i] + data->weights[2] * data->y[i];
    gx = activation(gx);
    if(gx != data->output[i]){
         pos+=1;
         if(pos==0)
         data->weights[0]-= 1;
         else 
         data->weights[pos]+=1; 
         i=0;
         if(pos==2) pos = -1;
         
    }
    else{
     i++;
     if(i==4){
      i=0;
      flag=1;
     }
     
    }
    printf("\nEpoch:%d/%d ->->->->->->->->->100:\n",temp,epochs);
   temp++;
    } 
    if(flag==1)
     printf("\nLearning Accuracy : 100%c",'%');
    else
    printf("\nLearning Accuracy : 50%c",'%'); 
}