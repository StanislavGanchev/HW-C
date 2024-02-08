#include<stdio.h>

void main(){
    int result=0;
    int n,half,prosto=0,i,j;

    printf("Kolko chisla e masiva:");
    scanf("%d", &n);

    int a[n];

    for(i=0;i<n;i++){
        printf("\n a[%d] = ", i+1);
        scanf("%d", &a[i]);

        half=a[i]/2+1;
        prosto=0;
        j=2;
        while(j<=half){
            if(a[i]%j == 0){
                prosto=1;
                break;
            }
            j++;
        }
        if(prosto == 0){
            printf("\n %d e prosto", a[i]);
            result = result + a[i];
        }

    }
    printf("\n Sborut ot vsichki prosti chisla v masiva = %d", result);
}
