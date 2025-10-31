//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
int main()
{int a[5];
    printf("请输入四个数字");
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    a[4]=a[1]+a[2]+a[3]+a[0];
    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
    return 0;
}
