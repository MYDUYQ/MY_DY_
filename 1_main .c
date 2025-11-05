//202510125113
//my070310@163.com
//李雪峰
#include <stdio.h>

int main() {
    int matrix[3][3];
    
    // 输入
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // 输出：每行元素间空格，行末无多余空格
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                printf("%d", matrix[i][j]); // 第一个元素直接输出
            } else {
                printf(" %d", matrix[i][j]); // 后续元素前加空格
            }
        }
        printf("\n"); // 每行结束后换行
    }
    
    return 0;
}
