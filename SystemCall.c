#include <time.h>
#include <stdio.h>
#include <sys/time.h>

int main()
{
    const long NUM_TRIAL = 154998254;
    long timeInterval;
    struct timeval begin, end, temp;


    gettimeofday(&begin, NULL);
    for (int i = 0; i < NUM_TRIAL; ++i) {
        gettimeofday(&temp, NULL);
    }
    gettimeofday(&end, NULL);
    timeInterval = end.tv_sec - begin.tv_sec;
    printf("Number of Calls = %u\n", NUM_TRIAL);
    printf("Time Start = %ld\n", begin.tv_sec);
    printf("time End = %ld\n", end.tv_sec);
    printf("Time Interval = %u\n", timeInterval);
    printf("The cost of System Call: %.15lf\n", (double)timeInterval/(double)NUM_TRIAL);

    return 0;
}