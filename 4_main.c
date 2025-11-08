//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>
int power(int a, int b) {
    int result = 1;
    // 循环b次，每次乘以a（实现a^b = a*a*...*a，共b个a相乘）
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int sum = 0;
    // 计算1² + 2² + 3² + 4² + 5²
    // 调用power函数，每个数的指数为2（即平方）
    sum = power(1, 2) + power(2, 2) + power(3, 2) + power(4, 2) + power(5, 2);
    
    // 输出结果
    printf("%d\n", sum);  // 结果为55
    return 0;
}
