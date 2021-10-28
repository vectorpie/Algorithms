#include<stdio.h>

void quickSort(int*a,int,int);
int partition(int*a,int,int);
int main(int argc, char const *argv[])
{
    int size,p,r;
    printf("Enter the size of the array to sort.....\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements to sort.......\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    p=0;
    r=size-1;
    quickSort(a,p,r);
    printf("Your result is here.....\n");
    for(int i=0;i<size;i++){
        printf("%d ", a[i]);
    }
    return 0;
}

void quickSort(int* a,int p, int r){
    int q;
    if(p<r){
        q = partition(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}

int partition(int* a,int p,int r){
    int x;   //pivot element
    x = a[p];
    int temp;
    int i = p;
    for(int j=p+1;j<=r;j++){
        if(x >= a[j]){
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

        }
    }
    temp = a[i];
    a[i] = a[p];
    a[p] = temp;
    
    return i;
}