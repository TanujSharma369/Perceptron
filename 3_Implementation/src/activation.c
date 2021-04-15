#include "perceptron.h"
/**
 * @brief Step activation function returns 1 if gx >=0 ele returns 0
 * 
 * @param gx Σ of weights and provided input
 * @return activated int value
 */
int activation(int gx){
    
    if(gx >= 0){
        gx=1;
    }    
    else
        gx=0;    
    
return gx;
}