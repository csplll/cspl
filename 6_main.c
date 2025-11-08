//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>

// 计算数组所有元素的和
int calculateSum(int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

// 计算数组所有元素的积
int calculateProduct(int arr[], int length) {
    int product = 1;  // 乘积初始值为1（乘法的单位元）
    for (int i = 0; i < length; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    // 输入长度为5的数组
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    // 调用函数计算和与积
    int sum = calculateSum(arr, 5);
    int product = calculateProduct(arr, 5);
    // 输出结果
    printf("%d %d\n", sum, product);
    return 0;
}
