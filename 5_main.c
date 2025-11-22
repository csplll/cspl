//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>

// 自定义函数：将数组元素向后移动一位，末尾元素丢弃，首位补0
void shiftRight(int *ptr_arr, int len) {
    // 从倒数第二个元素开始，依次将后一个元素的值赋给前一个元素
    for (int i = len - 2; i >= 0; i--) {
        *(ptr_arr + i + 1) = *(ptr_arr + i);
    }
    // 第一个位置补0
    *ptr_arr = 0;
}

int main() {
    int arr[5];
    int i;

    // 输入数组元素
    printf("请输入5个整数：");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // 调用函数进行右移操作
    shiftRight(arr, 5);

    // 输出移动后的数组
    printf("移动后的数组：");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
