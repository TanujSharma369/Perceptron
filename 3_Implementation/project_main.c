#include<stdio.h>
#include "perceptron.h"

/**
 * @brief main function calling 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[])
{
    /**
     * @brief declaring object
     * 
     */
    struct Data data;
    /**
     * @brief Construct a new init Weights object
     * 
     */
    initWeights(&data);
    /**
     * @brief Construct a new init Data X object
     * 
     */
    initDataX(&data);
    /**
     * @brief Construct a new init Data Y object
     * 
     */
    initDataY(&data);
    /**
     * @brief Construct a new init Output object
     * 
     */
    initOutput(&data);
    printf("\nDataSet Provided\n\n");
    /**
     * @brief Construct a new display Data object
     * 
     */
    displayData(&data);
    printf("\n\nInitial weights\n\n");
    /**
     * @brief Construct a new display Weight object
     * 
     */
    displayWeight(&data);
    printf("\n");
    /**
     * @brief Start learning
     * 
     */
    forwardPropagation(&data, 20);
  
   printf("\n\nNow try to make predictions:\nEnter any two values from provided Dataset:\n");
   /**
    * @brief Construct a new display Data object
    * 
    */
   displayData(&data);
   printf("\n");
   int x , y;
   /**
    * @brief taking input from user to predict output
    * 
    */
   scanf("%d%d",&x,&y);
   /**
    * @brief making prediction
    * 
    */
   int prediction = predict(x,y,&data);
   printf("\nPrediction\n\nX\tY\tOUTPUT\n%d\t%d\t%d",x,y,prediction);

   /**
    * @brief testing for correct prediction
    * 
    */
   int position=0;
      if(x==0 && y==0)
       position = 0;
      else if(x==1 && y==0)
       position = 2;
      else if(x==0 && y==1)
       position = 1;
      else
       position = 3;
     if(data.output[position] == prediction)
         printf("\n\nPrediction pass\n");
     else
      printf("\n\nPredection fail\n");
    getchar();
    /**
     * @brief end of main function
     * 
     */
    return 0;
}
