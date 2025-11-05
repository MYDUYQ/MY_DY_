//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
int one(int a,int b)
{
    int c=1;
    for(int i=0;i<b;i++)
    {//c=c*a
        c*=a;
    }
    return c;
}
int main()
{
    int d=0;
    for(int i=1;i<6;i++)
    {
        d+=one(i,2);
    }
    printf("%d\n",d);
    return 0;
}
