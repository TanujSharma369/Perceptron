#include<stdio.h>
#include "src/perceptron.h"


int main(int argc, char const *argv[])
{
    struct Data data;
    initWeights(&data);
    initDataX(&data);
    initDataY(&data);
    initOutput(&data);
    printf("\nDataSet Provided\n\n");
    displayData(&data);
    printf("\n\nInitial weights\n\n");
    displayWeight(&data);
    printf("\n");
    forwardPropagation(&data, 20);
   // printf("\nAfter Learning\n");
   // displayWeight(&data);
   printf("\n\nNow try to make predictions:\nEnter any two values from provided Dataset:\n");
   displayData(&data);
   printf("\n");
   int x , y;
   scanf("%d%d",&x,&y);
   printf("\nPrediction\n\nX\tY\tOUTPUT\n%d\t%d\t%d",x,y,predict(x,y,&data));
    getchar();
    return 0;
}
