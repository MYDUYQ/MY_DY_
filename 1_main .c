//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main()
{
    int a;
    scanf ("%d",&a);
    int *ptr=&a;
    *ptr=*ptr+10;
    printf("%d %d",a,*ptr);
    return 0;
}
