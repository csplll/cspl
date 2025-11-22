//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>
#include <stdlib.h>  // 包含 malloc 和 free 的头文件

int main() {
    int *arr;
    int i;

    // 动态申请能存储 5 个整数的内存空间
    arr = (int *)malloc(5 * sizeof(int));

    // 输入 5 个整数并存储到动态内存中
    printf("请输入 5 个整数：");
    for (i = 0; i < 5; i++) {
        scanf("%d", arr + i);  // 等价于 &arr[i]，通过指针偏移访问内存地址
    }

    // 遍历打印所有元素
    printf("动态数组的元素为：");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));  // 等价于 arr[i]，通过指针解引用获取值
    }
    printf("\n");

    // 释放动态申请的内存，避免内存泄漏
    free(arr);
    arr = NULL;  // 将指针置为 NULL，防止野指针

    return 0;
}
