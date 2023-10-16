/*Write a program that tests whether a provided integer is prime. An integer is prime if it has exactly two distinct divisors: 1 and itself
Note: 1 is not considered as prime.*/

#include <stdio.h> 

int main(){
  
  int n;
  int i;
  int c = 0;
  
// User entry  
    printf("Enter any number n:");
    scanf("%d", &n);

//logic
    for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
}
}
// If a prime number,,,
  if (c == 2) {
        printf("n is a Prime number");
}
 // If not a prime number
  else {
         printf("n is not a Prime number");
}
    
}