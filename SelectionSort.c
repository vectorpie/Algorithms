#include<stdio.h>

void selectionSort(int*,int);
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter the size of the array to sort.....\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements to sort.......\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    selectionSort(a,size);
    printf("Your result is here.....\n");
    for(int i=0;i<size;i++){
        printf("%d ", a[i]);
    }
    return 0;
}

void selectionSort(int* a,int size){
    int indexMin,temp;

    for(int j=0;j<size-1;j++){
        indexMin = j;
        for(int i=j+1;i<size;i++){
            if(a[i] < a[indexMin]){
                indexMin = i;
            }
        }
        if(j != indexMin){
            temp=a[j];
            a[j]=a[indexMin];
            a[indexMin]=temp;

        }
    }

}
