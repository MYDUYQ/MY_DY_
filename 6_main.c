//202510125113
//my070310@163.com
//李雪峰
#include <stdlib.h> // 包含malloc/free函数

int main() {
    // 动态申请5个int的内存空间
    int *arr = (int *)malloc(5 * sizeof(int));
    // 输入数据
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    // 遍历输出
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    // 释放内存
    free(arr);
    arr = NULL; // 避免野指针
    return 0;
}
