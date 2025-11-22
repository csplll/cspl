//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>

// 冒泡排序函数，使用指针操作
// 参数：arr_ptr - 指向待排序数组首元素的指针
//      n - 数组元素的个数
void bubbleSort(int *arr_ptr, int n) {
    int i, j;
    // 外层循环控制排序轮数，共需要 n-1 轮
    for (i = 0; i < n - 1; i++) {
        // 内层循环控制每一轮的比较次数，每轮比较次数递减
        // 使用指针 arr_ptr + j 和 arr_ptr + j + 1 来访问相邻元素
        for (j = 0; j < n - 1 - i; j++) {
            // 如果当前元素大于下一个元素，则交换它们
            if (*(arr_ptr + j) > *(arr_ptr + j + 1)) {
                int temp = *(arr_ptr + j);
                *(arr_ptr + j) = *(arr_ptr + j + 1);
                *(arr_ptr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    int i;

    // 输入 10 个整数
    printf("请输入 10 个整数：");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 调用冒泡排序函数
    // 数组名 arr 本身就是指向数组首元素的指针，所以直接传递 arr
    bubbleSort(arr, 10);

    // 输出排序后的数组
    printf("排序后的数组：");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
