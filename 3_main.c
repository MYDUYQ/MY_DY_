//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main()
{
    int a;
    printf("请输入一个<50的正整数");
    scanf("%d",&a);
    if (a==1){
        printf("密钥不安全，请重新输入");
        return 0;
    }int i=2;
    while (a%i==0)
    {
         i<=a;i++;
    printf("密钥不安全，请重新输入"); return 0;  }
    printf("密钥安全，密码设置成功");
    return 0;
} 
