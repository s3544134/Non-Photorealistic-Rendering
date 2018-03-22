#include "timer.h"

/* function used to calculate the difference between two times provided */
double timespec_subtract(struct timespec *result, struct timespec *start, struct timespec *end){ 
   result->tv_sec = end->tv_sec - start->tv_sec; 
   result->tv_nsec = end->tv_nsec - start->tv_nsec; 
   if(result->tv_nsec < 0){ 
      result->tv_nsec += SECOND; 
      --result->tv_sec; 
   } 
   return result->tv_sec+result->tv_nsec/((double)SECOND); 
}
