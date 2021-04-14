/**
 * @brief structure is used for initlizing the dataset and weights 
 * @param x[]  y[] , output[] contains truth table for OR , AND gate
 * @param weights[]  contains the initial weights 0,0,0
 */
extern struct Data{
    int x[4];
    int y[4];
    int output[4];
    int weights[3];
}Data;

/**
 * @brief initWeights() function initializes weights for learning process
 * 
 * @param data is an pointer object of struct Data 
 */
void initWeights(struct Data *data);

/**
 * @brief displayWeight() function displays the weights dynamically
 */
void displayWeight(struct Data *data);

/**
 * @brief displayData() function displays the Dataset
 */
void displayData(struct Data *data);

/**
 * @brief initDataX() function initializes data for x[]
 */
void initDataX(struct Data *data);

/**
 * @brief initDataY() function initializes data for y[]
 */
void initDataY(struct Data *data);

/**
 * @brief initOUtput() function initializes output for x[] and y[]
 */
void initOutput(struct Data *data);

/**
 * @brief activation() function it is used to fire a particular neuron at a time
 *  @param gx is the value pridicted after activating neuron 
 * @return int returns gx value
 */
int activation(int gx);
 
 /**
 * @brief forwardPropagation() is used to propagate forward and make prediction until we get the correct prediction
 *  @param epochs total number of iterations for learning process
 */
void forwardPropagation(struct Data *data, int epochs);

/**
 * @brief error() calculates the total error made after forward propagation 
 */
int error(struct Data *data);

/**
 * @brief reinitilizes the weights according to calculated error
 * @param pos determines which weight to reinitilize
 */
void reInitWeights(struct Data *data, int pos);

/**
 * @brief it will be used by user to make predictions
 * 
 */
int predict(int x, int y, struct Data *data);
