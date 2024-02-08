#include<stdio.h>
void main(){
    int n,half,prosto=0,i;
    printf("\n n=");
    scanf("%d", &n);
    half=n/2+1;
    prosto=0;
    i=2;
    while(i<=half){
        if(n%i == 0){
            prosto=1;
            break;
        }
        i++;
    }
    if(prosto == 1){
        printf("N ne e prosto");
    }else if(prosto == 0){
        printf("N e prosto");
    }

}
