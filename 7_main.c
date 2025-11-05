//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
int one ()
{
    int a[5];
    for (int i = 0; i <5; i++)
{
scanf("%d",&a[i]);
}
for(int j;j<2;j++)
{
    int b;
    b=a[j];
    a[j]=a[4-j];
    a[4-j]=b;
}
 for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", a[i]);  
        } else {
            printf("%d ", a[i]); 
        }}
}
int main()
{
    one();
    return 0;
}
