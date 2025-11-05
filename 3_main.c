//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main()
{int arr[10],i,j,t;
    for(i=0;i<10;i++)
    {scanf("%d",&arr[i]);}
    for (i=0;i<9;i++)
    {
       for (j=0;j<9;j++)
       {
        if(arr[j]>arr[j+1])
        {t=arr[j+1];arr[j+1]=arr[j];
            arr[j]=t;
        }
       }
       
    }
 for (i = 0; i <10; i++)
 {
   printf("%d ",arr[i]);
 }
    
    return 0;
}
