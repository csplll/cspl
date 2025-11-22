//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>

// 自定义函数：使数组每个元素自增1（使用指针实现）
void incrementArray(int *arr, int length) {
    int *p;
    // 指针p从数组首元素开始，遍历到末尾
    for (p = arr; p < arr + length; p++) {
        (*p)++;  // 指针指向的元素自增1（注意括号，确保先解引用再自增）
    }
}

int main() {
    int arr[5];
    int i;
    
    // 输入数组元素
    printf("请输入5个整数：");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 调用自定义函数，传入数组首地址和长度
    incrementArray(arr, 5);
    
    // 输出修改后的数组
    printf("元素自增后的数组：");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
