#include<stdio.h>
void main(){
    int a=0,b=1,c,i=2,n;
    printf("\n n=");
    scanf("%d", &n);
    do{
        if(n<3){
            if(n == 2){
                printf("\n 0");
                printf("\n 1");
                break;
            }else if(n == 1){
                printf("\n 0");
            }
        }
    }while(0);

    //dosega gledahme samo za 1-vo i 2-ro, sega cikul
    for(i=1;i<=n;i++){
        c=a+b;
        printf("\n %d", c);
        a=b;
        b=c;
    }


}
