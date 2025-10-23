//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>
int main(){
    int a;
    int b;
    char c;
    int x;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        x=a+b;
    }else if(c=='-'){
        x=a-b;
    }else if(c=='*'){
        x=a*b;
    }else if(c=='/'){
        if(b==0){
            printf("除数不能为零，请重新输入");
            return 1;
        }
        x=a/b;
    }else{
        printf("请输入有效运算符");
        return 1;
    }printf("%d",x);
    return 0;
}
