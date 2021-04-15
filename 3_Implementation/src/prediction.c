#include "perceptron.h"

/**
 * @brief predicting the results
 * 
 * @param x 
 * @param y 
 * @param data 
 * @return int 
 */
int predict(int x, int y, struct Data *data){
int gx = data->weights[0] + data->weights[1] * x + data->weights[2] * y;
    gx = activation(gx);
    return gx;
}