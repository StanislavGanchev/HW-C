struct QuadraticRootsResult{
    x1,
    x2,
    norealroots
}



int findroots(void){
    int x1,x2,a,b,c;
    printf("a = \n");
    scanf("%d", &a);
    printf("b = \n");
    scanf("%d", &b);
    printf("c = \n");
    scanf("%d", &c);
    int d = b*b - 4*a*c;
    if(d>0){
        x1 = (-b + sqrt(d)) / 2*a;
        x2 = (-b - sqrt(d)) / 2*a;
        printf("\n first solution is: %d", x1);
        printf("\n second solution is: %d", x2);
        return x1,x2;
    }else if(d == 0){
        x1 = -b/2*a;
        printf("\n There's only one solution: %d", x1);
        return x1;
    }else if(d<0){
        printf("\n There aren't any solutions");
        return 0;
    }
}