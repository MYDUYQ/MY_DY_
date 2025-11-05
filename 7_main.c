//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>
// 用于实现数组操作的函数
void one() {
    int a[5];
    // 正确输入数组元素
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    // 正确反转数组
    for (int i = 0; i < 2; i++) {
        int temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }
    // 输出数组
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
}
int main() {
    one();
    return 0;
}
