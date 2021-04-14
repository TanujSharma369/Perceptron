#include "perceptron.h"
void initWeights(struct Data *data){
    for(int i=0;i<3;i++)
     data->weights[i]=0;
}

void initDataX(struct Data *data){
  data->x[0]=0;
  data->x[1]=0;
  data->x[2]=1;
  data->x[3]=1;
}
void initDataY(struct Data *data){
  data->y[0]=0;
  data->y[1]=1;
  data->y[2]=0;
  data->y[3]=1;
}
void initOutput(struct Data *data){
  data->output[0]=0;
  data->output[1]=1;
  data->output[2]=1;
  data->output[3]=1;
}

