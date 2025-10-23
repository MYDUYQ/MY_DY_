//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
int main()
{
    float c=0;
    printf("请输入摄氏度（度）");
    scanf("%f",&c);
    float f=c*9/5+32;
    printf("%.1f华摄氏度",f);
    return 0; 
}
