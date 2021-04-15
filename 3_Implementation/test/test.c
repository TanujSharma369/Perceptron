#include "perceptron.h"

#include "unity.h"
/**
 * @brief Set up the object
 * 
 */
void setUp(){}

/**
 * @brief set up the object
 * 
 */
void tearDown(){}

/**
 * @brief checking for 0
 * 
 */
void check_activation1(){
    TEST_ASSERT_EQUAL( 1, activation(0) );
}

/**
 * @brief checking for <0
 * 
 */
void check_activation2(){
    TEST_ASSERT_EQUAL( 0, activation(-1) );
}

/**
 * @brief checking for 1
 * 
 */
void check_activation3(){
    TEST_ASSERT_EQUAL( 1, activation(1) );
}

/**
 * @brief checking for 0>
 * 
 */
void check_activation4(){
    TEST_ASSERT_EQUAL( 1, activation(10) );
}

/**
 * @brief checking for 10>
 * 
 */
void check_activation5(){
    TEST_ASSERT_EQUAL( 1, activation(100) );
}
/**
 * @brief checking for <-10
 * 
 */
void check_activation6(){
    TEST_ASSERT_EQUAL( 0, activation(-100) );
}
/**
 * @brief main function to start testing
 * 
 * @return int 
 */
int main(){
UnityBegin("test");
RUN_TEST(check_activation1); 
RUN_TEST(check_activation2);
RUN_TEST(check_activation3);
RUN_TEST(check_activation4);
RUN_TEST(check_activation5);
RUN_TEST(check_activation6);

return (UnityEnd());
}