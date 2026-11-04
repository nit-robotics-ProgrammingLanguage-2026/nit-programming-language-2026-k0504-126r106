#include <stdio.h>
int main(void){
    int a;
    scanf("%d",&a); ///データを入力する
    int f=!(a<0||(a>=10&&a<12)||a>=15);
    if(f==1){ ///指定されてる条件以外ならOKと表示する
        printf("OK");
    }
    else{
        printf("NG");
    }
    return 0;
}
