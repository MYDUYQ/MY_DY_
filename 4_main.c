//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a+b>c&&a+c>b&&b+c>a)
{printf("能组成三角形");}
else{printf("不能组成三角形");}
return 0;
}
