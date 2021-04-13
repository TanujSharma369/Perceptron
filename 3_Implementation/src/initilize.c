#include "perceptron.h"
void initWeights(int *weights){
    for(int i=0;i<3;i++)
     weights[i]=i+1;
}

void initData(struct Data *data){
  data->x[0] = 0;
  data->x[1] = 0;
  data->x[2] = 1;
  data->x[3] = 1; 
}