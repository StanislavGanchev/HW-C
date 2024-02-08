// Дефинирайте макро, което се казва DEBUG. Направете, функция която да сортира масив възходящо и да намира сумата на елементите, които се намират на индекси, които се делят с точност на 3 и да я принтира на екрана. Направете функцията така, че ако DEBUG макрото е дефинирано, на екрана да се принтира сортирания масив и елементите, които се намират на индекси, които се делят с точност на 3 (като допълнение на сумата)


#include<stdio.h>
#define DEBUG 1



void sort(int arr[], int size1){
    int temp;
    for(int i=0;i<size1-1;i++){
        for(int j=0;j<size1-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
}


void main(){
    //Vzimame masiva ot potrebitelq i go sortirame
    int size;
    printf("\n How many elements in the array do you want:\n ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    sort(arr,size);
    
    // ako e definirano makroto, to trqbva da printirame sumata na chislata, delqshti se na 3 i samite chisla
    #ifdef DEBUG
        //sortirame masiva
        printf("Sortiran Masiv:\n");
        for(int i=0;i<size;i++){
            printf("%d\n", arr[i]);
        }


        //izvejdame elementite, koito sa na indeksi, koito se delqt na 3
        printf("\n\nElementite s indexi, delqshti se na 3 = \n");
        for(int k=3;k<size;k+=3){
                printf("%d\n", arr[k]);
        }

        //izvejdame sumata na elementite na indeksi, delqshti se na 3
        int sum = 0;
        for(int j=0;j<size;j++){
            if(arr[j]%3 == 0){
                sum+=arr[j];
            }
        }
        printf("Sumata na elementi na indexi, delqsti se na 3 = %d \n\n", sum);
    #endif
}