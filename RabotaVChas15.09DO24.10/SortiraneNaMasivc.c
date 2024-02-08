#include<stdio.h>
void main(){
    int n,i;

    printf("\n broi na elementite=");
    scanf("%d", &n);

    int a[n];

    for(i=0;i<n;i++){
        printf("\n a[%d]=", i+1);
        scanf("%d", a[i]);
    }
}
