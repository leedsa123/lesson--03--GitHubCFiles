/*Write a function that returns the result of an operation performed over 2 provided integers (right part and left part) and 1 operator.
The operator can be: *, -, +, /*/

#include<stdio.h>

float operation(int, int,char);

int main(){

    int a = 5;
    int b = 4;

    char c = '/';

    float result = operation(a, b, c);

    printf("%d%c%d=%f", a, c, b, result);
}

float operation(int nb1, int nb2, char op){

    switch (op)
    {
    case '+':
        return nb1 + nb2;
       // break;
    case '-':
        return nb1 - nb2;
       // break;
    case '*':
        return nb1 * nb2;
       // break;
    case '/':
        return (float)nb1 / nb2;
        //break;
    default:
        return 501;
    }
}