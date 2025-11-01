//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0||n>50){
        printf("错误");
    }else{
        int is_prime=1;
        int i=2;
        while(i<n){
            if(n%i==0){
                is_prime=0;
                break;
            }i++;
        }if(is_prime&&n!=1){
            printf("密钥安全，密码设置成功");
        }else{
            printf("密钥不安全，请重新输入");
        }
    }
}
