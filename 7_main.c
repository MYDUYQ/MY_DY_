//202510125113
//my070310@163.com
//李雪峰
int main()
{
    int a[5];
    int i;
    for (i = 0; i <4;i++)
    {
       scanf("%d",&a[i]);
    }
       for (i=4;i>0;i--)
       {
       a[i]=a[i-1];
       }
       a[0]=0;
       for (i= 0; i < 5; i++)
       {
         if (i == 4) {
            printf("%d", a[i]);  
        } else {
            printf("%d ", a[i]); 
        };
       }
      
    return 0;
}
