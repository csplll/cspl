//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>

int arithmeticSum(int a1, int an, int step) {
    int n = (an - a1) / step + 1;
    return (a1 + an) * n / 2;
}

int main() {
    int sum = arithmeticSum(1, 100, 1);
    printf("%d\n", sum);
    return 0;
}
