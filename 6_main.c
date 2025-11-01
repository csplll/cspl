//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include<stdio.h>
int main(){
    int arr[5];
    int i,num;
    for(int i=0;i<5;i++){
        do{
            scanf("%d",&num);
        }while(num%2!=0);
        arr[i]=num;
    }for(int i=0;i<5;i++){
        printf("%d",arr[i]);
        if(i<4){
            printf(" ");
        }
    }return 0;
}
