// Направете функция, която използва различен алгоритъм за сортиране в зависимост от операционната система, на която се намира. Ако операционната система е windows да се използва метод на мехурчето. Ако системата е linux да използва метод на пряката селекция. Ако операционната система е MacOS да се използва метода на прякото вмъкване. Ако операционната система не е нито една от трите, функцията да обръща масива (първият му елемент, да стане последен, втория предпоследен и т.н).


#include<stdio.h>

void main(){
    #ifdef __WIN32__
        int arr[5] = {64, 34, 25, 12, 22};
        int n = sizeof(arr) / sizeof(arr[0]);

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printf("Sorted array: \n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n\nSorted, using bubble sort\n");

    #elif __linux__
        int arr[5] = {3,2,12,34,52};
        int i = 0;
        int n = 5;
        int temp;
        while(i<n){
            k = i;
            for(j=i+1;j<n;j++){
                if(a[j]<a[k]){
                    k = j;
                }
            }
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
            i++;
        }
        printf("\n");
        for(i=0;i<n;i++){
            printf("a[%d]=%d", i, a[i]);
        }
        printf("sorted, using straight selection sort");

    #elif __APPLE__
        int arr[3] = {3,43,1};
        int size = 3;
        int key, i, j;
        for(i=1;i<size;i++){
            key = arr[i];
            j = i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j=j-1;
            }
        }
        printf("sorted, using insertion sort");

    #endif
}