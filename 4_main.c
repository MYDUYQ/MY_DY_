//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
void swap()
{{
    int a[5];
    for (int i = 0; i <5; i++)
{
scanf("%d",&a[i]);
}
int *prt=a;
for (int  i = 0; i < 5; i++)
{
    *prt=*prt+1;
    prt++;
}
prt=a;
 for (int i = 0; i <5; i++)
{
printf("%d ",*prt);
prt ++;
}  
}
}
int main()
{
    swap();
    return 0;
}
