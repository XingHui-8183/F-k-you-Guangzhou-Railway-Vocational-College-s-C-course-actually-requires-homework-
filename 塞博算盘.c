#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    
    // 菜单
    printf("========== 塞博算盘 ==========\n");
    printf("1. 加法\n");
    printf("2. 减法\n");
    printf("3. 乘法\n");
    printf("4. 除法\n");
    printf("请输入您的选择 (1-4): ");
    
    // 读取选择
    if (scanf("%d", &choice) != 1) {
        printf("错误：无效的输入！\n");
        return 1;
    }
    
    // 你这选择 好像不对啊 
    if (choice < 1 || choice > 4) {
        printf("错误：选择无效！请选择 1-4 之间的数字。\n");
        return 1;
    }
    
    // 我看看你干啥了 
    printf("请输入第一个数字: ");
    if (scanf("%f", &num1) != 1) {
        printf("错误：无效的数字输入！\n");
        return 1;
    }
    
    printf("请输入第二个数字: ");
    if (scanf("%f", &num2) != 1) {
        printf("错误：无效的数字输入！\n");
        return 1;
    }
    
    // 你选啥模式了卧槽 
    if (choice == 1) {
        // 加法
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 2) {
        // 减法
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 3) {
        // 乘法
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    } else if (choice == 4) {
        // 除法，别来个0就行 
        if (num2 == 0) {
            printf("错误：除数不能为零！\n");
            return 1;
        }
        result = num1 / num2;
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
    }
    
    return 0;
}
