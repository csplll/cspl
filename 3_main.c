//202510302231
//chenshipeng228@qq.com
//陈仕鹏
#include <stdio.h>
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
