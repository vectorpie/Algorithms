#include<stdio.h>
int main(int argc, char const *argv[])
{
    int *p;
    int* insertionSort(int*,int);
    int a[] = {8,7,6,5,4,3,2,1};
    int size = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<size;i++)
    printf("%d ",a[i]);
    printf("\n");

    p = insertionSort(a,size);

    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

 int* insertionSort(int *a,int size){
     int i,j,key;
     for(j=1;j<size;j++){
         key = a[j];
         i=j-1;
         while(i >= 0 && a[i]>key){
             a[i+1]=a[i];
             i--;
         }
         a[i+1]=key;
     }
     return a;
 }