#include<stdio.h>
void main(){
    int a,b,c,dis;
    int x1,x2;

    printf("\n a=");
    scanf("%d", &a);

    printf("\n b=");
    scanf("%d", &b);

    printf("\n c=");
    scanf("%d", &c);

    dis = (b*b) - 4*a*c;

    if(dis > 0){
        x1 = (-b + sqrt(dis))/2*a;
        x2 = (-b - sqrt(dis))/2*a;
        printf("\n Korenite sa: x1=%d x2=%d", x1,x2);
    }
    if(dis == 0){
        x1 = -b / (2*a);
        x2=x1;
        printf("\n Uravnenieto ima samo edin koren i toi e: x1=%d", x1);
    }
    if(dis < 0){
        printf("Uravnenieto nqma realni koreni");
    }

}
