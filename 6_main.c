//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
int one ()
{
    int a[5];
    for (int i = 0; i <5; i++)
{
scanf("%d",&a[i]);
}
int b;
b=a[1]+a[2]+a[3]+a[0]+a[4];
int c;
c=a[1]*a[3]*a[0]*a[4]*a[2];
printf("%d %d",b,c);
}
int main()
{
    one();
    return 0;
}
