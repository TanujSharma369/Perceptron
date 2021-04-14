#include "perceptron.h"

int activation(int gx){
    
    if(gx >= 0){
        gx=1;
    }    
    else
        gx=0;    
    
return gx;
}