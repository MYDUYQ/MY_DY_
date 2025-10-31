//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main() {
    int a[5]; 
    int count = 0; 
    int num;  
    while (count < 5) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            a[count] = num;
            count++;  
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", a[i]);  
        } else {
            printf("%d ", a[i]); 
        }
    }
    return 0;
}
