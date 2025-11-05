//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
int one(int a1,int an,int step)
{
int a=step*(a1+an)/2;
return a;
}

int main()
{
    int a;
    a=one (1,100,100);
    printf("%d",a);
    return 0;
}
