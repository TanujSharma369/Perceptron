#include "perceptron.h"
#include<stdio.h>

/**
 * @brief forward propagation calculates Σ and reinitlizes the weights accordingly
 * @param epochs number of iterations required to learn 
 */
void forwardPropagation(struct Data *data, int epochs){
    int gx = 0;
    int i=0,pos=-1;
    int temp=1;
    int flag=0;
    char *prediction = "Fail";
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
         prediction = "Fail";
    }
    else{
     i++;
     if(i==4){
      i=0;
      flag=1;
     }
     prediction = "Pass";
    }
    printf("\nEpoch:%d/%d ->->->->->->->->->100: prediction: %s\n",temp,epochs,prediction);
   temp++;
    } 
    if(flag==1)
     printf("\nLearning Accuracy : 100%c",'%');
    else
    printf("\nLearning Accuracy : 50%c",'%'); 
}