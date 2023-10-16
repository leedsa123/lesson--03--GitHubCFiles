#include<stdio.h>
int main(void){
    
// define your number

    float Num = 4.3567;

// convert Num to an integer

    int ones = Num;
    float tenths = Num - ones;

    printf("This number's components are %d and %g",ones,tenths);

    return 0;
}