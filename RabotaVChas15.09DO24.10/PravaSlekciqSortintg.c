#include <stdio.h>
int main(){
    int a[100], n, i, j, position, swap;

    printf("Broi elementi:");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("%d element = ", i+1);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++){
        position=i;
        for(j = i + 1; j < n; j++){
            if(a[position] > a[j]){
                position=j;
            }
        }
        if(position != i){
            swap=a[i];
            a[i]=a[position];
            a[position]=swap;
        }
    }
    printf("Sortiran masiv: \n");

    for(i = 0; i < n; i++){
        printf("\n %d", a[i]);
    }

return 0;
}