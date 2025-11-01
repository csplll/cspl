//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int e=a+b+c+d;
    int scores[5]={a,b,c,d,e};
    int i;
    for(int i=0;i<5;i++){
        printf("%d",scores[i]);
        if(i<4){
            printf(" ");
        }
    }       
}
