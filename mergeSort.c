#include<stdio.h>
#include<math.h>

void mergeSort(int*,int,int);
void merge(int*,int,int,int);
int main(int argc, char const *argv[])
{
    int p,r;
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array to sort........\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    p=0;
    r=size-1;
    mergeSort(a,p,r);
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

void mergeSort(int* a, int p,int r){
    if(p<r){
        int q = (p+r)/2;
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
        merge(a,p,q,r);
    }
}

void merge(int* a, int p,int q,int r){
    //determine size of the subarrays..
    int n1=q-p+1;
    int n2=r-q;
    //create two arrays..
    int L[n1+1];
    int R[n2+1];
    int i,j;
    //copy the values in two sub-arrays respectively
    for(int i=0;i<n1;i++){
        L[i] = a[p+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = a[q+i+1];
    }
    L[n1]=32767;
    R[n2]=32767;
    i=0,j=0;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;        
        }
    }
}   
