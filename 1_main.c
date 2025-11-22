//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>

int main() {
    int a;
    printf("请输入整数a的值：");
    scanf("%d", &a);  // 输入整数并赋值给a
    
    int *p = &a;      // 定义指针p，指向变量a
    
    *p += 10;         // 通过指针修改a的值（加10）
    
    printf("%d,%d\n", a, *p);  // 打印a的值和指针指向的值
    
    return 0;
}
