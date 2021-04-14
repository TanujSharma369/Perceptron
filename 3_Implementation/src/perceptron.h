extern struct Data{
    int x[4];
    int y[4];
    int output[4];
    int weights[3];
}Data;

void initWeights(struct Data *data);
void displayWeight(struct Data *data);
void displayData(struct Data *data);
void initDataX(struct Data *data);
void initDataY(struct Data *data);
void initOutput(struct Data *data);
int activation(int gx);
void forwardPropagation(struct Data *data, int epochs);
int error(struct Data *data);
void reInitWeights(struct Data *data, int pos);
