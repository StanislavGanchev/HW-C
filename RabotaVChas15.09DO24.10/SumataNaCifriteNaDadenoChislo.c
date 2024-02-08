#include<stdio.h>
void main(){
    int c,n,result;
    do{
        printf("\n n=");
        scanf("%d", &n);
        if(n<9){
            printf("\n %d", n);
            break;
        }
        do{
            c=n%10;
            n=n/10;
            result=result+c;
        }while(n>=1);
        printf("Sborut e: %d", result);
    }while(0);

}
