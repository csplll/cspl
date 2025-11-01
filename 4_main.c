//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>
int main(){
    int count=0;
    int i=100;
    while(i<1000){
        int a=i/100;
        int b=(i/10)%10;
        int c=i%10;
        int sum=a*a*a+b*b*b+c*c*c;
        if(sum==i){
            count++;
            if(count>1){
                printf(" ");
            }
            printf("%d",i);
        }i++;
    }return 0;
}
