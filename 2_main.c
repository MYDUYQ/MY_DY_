//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
int main()
{
    int c=0;
    printf("请输入数学成绩（0-100）\n");
    scanf("%d",&c);
    if(c>=90&&c<=100){
        printf("等级为A\n");}
        else if(c>=80&&c<=89){
            printf("等级为B");
        }
        else if(c>=70&&c<=79){
            printf("等级为C");
        }
        else if(c>=60&&c<=69){
            printf("等级为D");
        }
        else if(c<=60){
            printf("等级为E");
        }
    return 0;
}
