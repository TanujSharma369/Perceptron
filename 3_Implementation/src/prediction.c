#include "perceptron.h"
int predict(int x, int y, struct Data *data){
int gx = data->weights[0] + data->weights[1] * x + data->weights[2] * y;
    gx = activation(gx);
    return gx;
}