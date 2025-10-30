//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main()
{
   int m=100;
   while(m<=999)
   {int a=m%10;
   int b=m/10%10;
   int c=m/100;
    if (m==a*a*a+b*b*b+c*c*c)
   {
    printf("%d\n",m);
   }m++;}
   
    return 0;
}
