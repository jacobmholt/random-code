#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int min = 0, max = 0, result = 0, times = 0;
    printf("How many numbers do you want?");
    scanf("%d", &times);
    printf("Minimum Number");
    scanf("%d", &min);
    printf("Maximum Number");
    scanf("%d", &max);
    printf("Your Random numbers are:\n");
    for(;times>0;times--){
    result = rand() % max + min;
    printf("%d\n", (int)result);
    }
    return 0;
}
