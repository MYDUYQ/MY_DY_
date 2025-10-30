//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main()
{
    int a,i;
    printf("请输入一个<50的正整数");
    scanf("%d",&a);
    for(i=2;i<a;i++){
    if (a%i==0)
    {printf("密钥不安全，请重新输入"); return 0;  }}
    printf("密钥安全，密码设置成功");
    
    return 0;
}
