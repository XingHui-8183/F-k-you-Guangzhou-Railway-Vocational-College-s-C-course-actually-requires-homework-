#include <stdio.h>

/*
 * 计算两个整数的和
 * 使用GB2312编码
 */

int main() {
    int a, b, sum;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}