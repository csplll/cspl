//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int nums[10];
    int i;

    printf("请输入10个整数（用空格分隔）：");
    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }

    bubbleSort(nums, 10);

    printf("排序后：");
    for (i = 0; i < 10; i++) {
        // 核心修改：判断是否为最后一个元素（索引9）
        if (i == 9) {
            printf("%d", nums[i]);  // 最后一个元素：只打印数字，无空格
        } else {
            printf("%d ", nums[i]); // 非最后一个元素：数字+空格
        }
    }
    printf("\n");

    return 0;
}
