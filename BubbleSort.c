#include<stdio.h>

int* bubblesort(int*,int); 
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
    printf("\n");
    int* p = bubblesort(a,size);
    printf("You result is here.....\n");
    for(int i=0;i<size;i++){
        printf("%d ",p[i]);
    }

    return 0;
}
int* bubblesort(int * a,int size){
    int swapped;
    int unsortedlist = size;
    int temp;
    do
    {
        swapped = 0;
        for(int i=0;i<unsortedlist-1 ; i++){
            if(a[i]>a[i+1]){
                temp =a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swapped = 1;
            }
        }
        unsortedlist--;
    } while (swapped);
        
    
    return a;
}
