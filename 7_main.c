//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
void one ()
{
    int a[5];
    for (int i = 0; i <5; i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<2;i++)
{
    
   int  b=a[i];
    a[i]=a[4-i];
    a[4-i]=b;
}
 for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", a[i]);  
        } else {
            printf("%d ", a[i]); 
        }
    }
}
int main()
{
    one();
    return 0;
}
