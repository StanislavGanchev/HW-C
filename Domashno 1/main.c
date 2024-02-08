#include<stdio.h>

#define PRINTING printf("%d ", c[i])
#define BIGGER(a, b) ((a) > (b) ? (a) : (b))
#define DEBUG_PRINT_VAR(a) printf("name: %s \nvalue:  %d \nfile: %s \ncolumn: %d\n\n", #a, a, __FILE__, __LINE__)
#define SWAP(a,b,type)  type=a;\
                        a=b;\
                        b=type;
#define ARRAY_SORT(arr, n, order)  for (int i = 0; i < n; i++) {\
                                        printf("Enter element %d: ", i + 1);\
                                        scanf("%d", &arr[i]);\
                                    }\
                                    if(order==1){\
                                    for (int i = 0; i < n - 1; i++) {\
                                            for (int j = 0; j < n - i - 1; j++) {\
                                                if (arr[j] > arr[j + 1]) {\
                                                    int temp = arr[j];\
                                                    arr[j] = arr[j + 1];\
                                                    arr[j + 1] = temp;\
                                                }\
                                            }\
                                    }\
                                }\
                                if(order==2){\
                                    for (int i = 0; i < n - 1; i++) {\
                                        for (int j = 0; j < n - i - 1; j++) {\
                                            if (arr[j] < arr[j + 1]) {\
                                                int temp = arr[j];\
                                                arr[j] = arr[j + 1];\
                                                arr[j + 1] = temp;\
                                            }\
                                        }\
                                    }\
                                }


int main(){

    //Printing an array with object-like macro
    int size = 5;
    int c[size];
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &c[i]);
    }

    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        PRINTING;
    }

    //Printing the bigger variable between 2 with function-like macro
    int a,b;
    printf("\n a=");
    scanf("%d", &a);
    printf("\n b=");
    scanf("%d", &b);
    int result = BIGGER(a, b);
    printf("\nThe bigger value is: %d\n\n", result);

    //printing info for the variable
    int d=6;
    DEBUG_PRINT_VAR(d);

    //swapping the value of 2 numbers with function like macro
    int g=0,h=0,t=0;
    printf("\n a=");
    scanf("%d", &g);
    printf("\n b=");
    scanf("%d", &h);
    SWAP(g,h,t);
    printf("\na=%d", g);
    printf("\nb=%d", h);

    //sorting an array with function-like macro
    int br, order;
    printf("\nNumber of elements=");
    scanf("%d", &br);
    printf("If you want ascending order, type 1, otherwise, type 2: ");
    scanf("%d", &order);
    int array[br];
    ARRAY_SORT(array, br, order);
    for (int k = 0; k < br; k++) {
        printf("%d ", array[k]);
    }
    printf("\n");


    return 0;
}