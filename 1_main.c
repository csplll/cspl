//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include<stdio.h>
void add(int arr[3][3]);
void abb(int arr[3][3]);
int main(){
    int arr[3][3];
    add(arr);
    abb(arr);
    return 0;
}
void add(int arr[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void abb(int arr[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j==2){
                printf("%d\n",arr[i][j]);
            }else{
                printf("%d ",arr[i][j]);
            }
        }
    }
}
