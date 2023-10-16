#include<stdio.h>
#include<stdbool.h>

int main(void){
    
//declare : a Boolean variable "vb" and initialize it to false

    bool vb;
    
    vb= false;
    
//declare an integer variable "vi" and initialize it to 10
    int vi= 10;
    
//declare a real variable "vf" and initialize it to 3.5   
    float vf= 3.5;
    
 // declare a character "vc" and initialize it to 'i'   
    char vc = 'i';
    
    printf("%d\n", vb);
    printf("%d\n", vi);
    printf("%f\n", vf);
    printf("%c\n", vc);
    
    return 0;
    
}