#include<stdio.h>
#include "perceptron.h"
int weights[3];

/*struct Data{
    int x[3];
    int y[3];
    int output[3];
}dataset;
*/

int main(int argc, char const *argv[])
{
     initWeights(weights);
    for(int i=0;i<3;i++)
     prinf("%d->",weights[i]);
    return 0;
}
