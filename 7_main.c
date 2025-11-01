//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include<stdio.h>
int main(){
    int arr[5];
    scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
    arr[4]=arr[3];
    arr[3]=arr[2];
    arr[2]=arr[1];
    arr[1]=arr[0];
    arr[0]=0;
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
        if(i<4){
            printf(" ");
        }
    }return 0;
}
