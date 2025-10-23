//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main()
{
    int a;
    int b;
    char ch;
    printf("请输入两个个整数和一个运算符");
    scanf("%d %d %c",&a,&b,&ch);
    switch (ch)
    {
    case '+':
       printf("结果是%d",a+b);
        break;
        case '-':
       printf("结果是%d",a-b);
        break;
        case '*':
       printf("结果是%d",a*b);
        break;
        case '/':
       printf("结果是%d",a/b);
        break;
    }
return 0;
}
