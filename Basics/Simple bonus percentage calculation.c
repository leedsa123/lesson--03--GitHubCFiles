//Simple bonus percentage program
#include <stdio.h>

int main()
{
    float a, b;// variables
    
    printf("how much of a bonus did you get?");
    scanf(" %f", &a);//answer becaomes variable a
    
    b = .85 * a;// Mutiply requested variable a by .85 to get total variable b
    printf("If you give 15 percent to charity, you will still have %f", b); 
    
    return 0;
    
}