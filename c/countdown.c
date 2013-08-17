#include <stdio.h>



int main(void)
{
int num ;
num = 0;
printf("What is your number?") ;
scanf("%d", &num);
num = (num - 1);
for (;num > 0;num--)
{
printf("%d\n", (int)num);
}

return 0 ;
}
