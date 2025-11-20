//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

void swap(int*a,int*b)
{
   
    int temp=*a;*a=*b;*b=temp;
}
int main()
{ int x;int y;
    scanf ("%d %d",&x,&y);
   swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
