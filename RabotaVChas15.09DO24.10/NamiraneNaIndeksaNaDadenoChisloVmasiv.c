#include<stdio.h>
void main(){

    //vuvejdame masiva



    int n,p;

    printf("\n Kolko elementa shte ima masiva:");
    scanf("%d", &n);

    int a[n];

    for(p=0;p<n;p++){
        printf("%d element e = ", p+1);
        scanf("%d", &a[p]);
    }


    //sega go sortirame


    int  i, j, position, swap;
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



    //sega tursim element


    int izbran;

    printf("\n izberi element ot masiva po tvoe jelanie:");
    scanf("%d", &izbran);

    int h;

    h=0;

    while(h<=i){
        if(izbran == a[h]){
            printf("index-a na elementa, izbran ot teb = %d", h);
            break;
        }
        h++;
    }


}
