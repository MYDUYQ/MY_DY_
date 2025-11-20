//202510125113
//my070310@163.com
//李雪峰
 #include <stdio.h>
void swap(int len, int*ptr)
 {
  for (int i = len-1; i >0; i--)
 {
   ptr[i]=ptr[i-1];
 }
 ptr[0]=0;
}
int main()
{int a[5];
   for (int i = 0; i <5; i++)
{
scanf("%d",&a[i]);
}
  swap(5,a); 
  for (int i = 0; i <5; i++)
 {
   printf("%d ",a[i]);
 }
    return 0;
}
