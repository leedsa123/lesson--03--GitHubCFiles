#include <stdio.h>
#include <time.h>

void take_enter() {
   printf("Press enter to stop the counter"); 

   while(1) {
      if (getchar())
      break;
   }
}
main () {
   // Calculate the time taken by take_enter()
   clock_t t;
   t = clock();
   printf("Timer starts");
   take_enter();
   printf("Timer ends");
   t = clock() - t;
   double time_taken = ((double)t)/CLOCKS_PER_SEC; // calculate the elapsed time
   printf("The program took %f seconds to execute", time_taken);
}