//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main()
{
    int arr[3][3];
    for (int j=0;j<3;j++)
    {
       for (int i=0;i<3;i++)
       {scanf ("%d",&arr[i][j]);}
    }
    for (int i=0;i<3;i++)
    {
       for (int j=0;j<3;j++){if (j==0){printf("%d",arr[i][j]);}else{printf(" %d",arr[i][j]);}}
    
    printf("\n");}
    return 0;
}
