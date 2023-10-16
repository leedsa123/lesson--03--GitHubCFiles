/*Write a function that returns the result of an operation performed over 2 provided integers (right part and left part) and 1 operator.
The operator can be: *, -, +, /*/

#include<stdio.h>
int operation (int, int,char);

int main(){

//input numbers to be calculated    
    int a = 5;
    int b = 4;

// math calculate sign    
    char c = '*';
    
    int result = operation(a, b, c);
    
    printf("%d%c%d=%d", a, c, b, result);
}



int operation(int nb1, int nb2, char op){
    
    switch (op)
    {
    // For addition
    case '+':
        return nb1 +nb2;
    
    // For subtraction   
    case '-':
        return nb1 -nb2;
    
    // For multiplication    
    case '*':
        return nb1 *nb2;
    
    // For division   
    case '/':
        return nb1 /nb2;
        
    default:
        return 501;
        }
    
}