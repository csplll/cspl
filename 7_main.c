//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>

void reverseArray(int arr[], int length) {
    int i, temp;
    for (i = 0; i < length / 2; i++) {
        temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main() {
    int arr[5];
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, 5);
    for (i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
