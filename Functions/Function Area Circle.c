/*Write a function that computes and returns the area of a circle with provided radius r.*/

#include<stdio.h>

float circleArea(float radius);


int main(void){
    
    float rad= 9;
        
    float area=circleArea(rad);
        
    printf("The area of the circle is %.2f",area);
 
}

float circleArea(float radius){

    float area= 3.14*radius*radius;
    
    return area;

}