//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>

int main() {
    int arr[5];
    int i;
    
    // 输入数组元素
    printf("请输入5个整数：");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 定义指针指向数组首元素
    int *p = arr;
    
    // 通过指针将所有元素乘以2
    for (i = 0; i < 5; i++) {
        *(p + i) *= 2;  // 等价于 arr[i] *= 2
    }
    
    // 打印修改后的数组
    printf("修改后的数组：");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));  // 等价于 printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
