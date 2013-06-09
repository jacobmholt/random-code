#include <stdio.h>



int main(void)
{
int num ;
num = 0;
printf("What is your number?") ;
scanf("%d", &num);
while (num > 0)
{
printf("%d", &num);
num-- ;
}

return 0 ;
}
