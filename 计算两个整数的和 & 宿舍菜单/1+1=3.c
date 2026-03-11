#include <stdio.h>

int main() {
    int a, b, sum;
    printf("请输入两个整数：\n");
    printf("例如 1+1 \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}
