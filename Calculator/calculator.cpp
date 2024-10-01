#include "calculator.h"
#include <cmath>

int addition(int a, int b){
    return a + b;
}

int subtraction(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    if((a==0) && (b==0) || (a==1) && (b==0)){
        return -1;
    } else {
        return a / b;
    }
}