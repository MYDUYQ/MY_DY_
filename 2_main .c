//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main()
{
   int m;
   for (m=100;m<=999;m++)
   {
   int a=m%10;
   int b=m/10%10;
   int c=m/100;
   if (m==a*a*a+b*b*b+c*c*c)
   {
    printf("%d ",m);
   
   }}
   
    return 0;
}
