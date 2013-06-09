#include <stdio.h>



int main(void)
{
int num ;
num = 0;
printf("What is your number?") ;
scanf("%d", &num);
for (;num > 0;num--)
{
printf("%d\n", &num);
}

return 0 ;
}
