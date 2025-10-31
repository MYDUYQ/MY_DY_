//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main()
{
   int  a[5]={0};
   int b=0;
   int c;
   while (b<5)
   { scanf("%d",&c);
    if (c%2==0)
    {
        a[b]=c;
        b++;
    }
    for (int i=0;i<5;i++)
    {
        printf("%d",a[i]);
        if (i<4){
            printf(" ");
        };
    } 
   } 
    return 0;
}
