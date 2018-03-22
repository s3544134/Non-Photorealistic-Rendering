#ifndef TIMER_H
#define TIMER_H

/*define the number of nanoseconds in a second.*/
#define SECOND 1000000000LL
#include <ctime>

/* function used to calculate the difference between two times */
double timespec_subtract(struct timespec *result, struct timespec *start, struct timespec *end);

#endif
