#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//for printing an array
void printarr(int arr[], int n){
    int i;
   
    for(i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
}

//selection sort
void selectionSort(int arr [], int n){
    int j, i, s;
    for(j = 0; j < n-1 ; j++){
     s = j;
    for(i = j+1 ; i < n; i++){
    if(arr[i] < arr[s])
    s = i;
    }
swap(&arr[s],&arr[j]);
}
printarr(arr,n);
}

//bubble sort
void bubbleSort(int arr[] , int n){
    int i , j;
    for(i = 0; i < n ; i++){     
        for(j = 0; j<n; j++){
            if(arr[j] > arr[j+1])
            swap(&arr[j],&arr[j+1]);  //swap the adjecent element
        }
    }
    printarr(arr,n);
}
//insertion sort
void insertionSort(int arr[], int n){
    int i, j, key;
    for(i = 1; i < n; i++){
        key = arr[i];
   j = i - 1;
   while(j >= 0 && arr[j] > key){
    arr[j+1] = arr[j];
    j -= 1;
   }
   arr[j+1] = key;
    }
    printarr(arr,n);
}

//partition 
int partition(int arr[],int l, int h){
    int pivot = arr[h];
    int j, i = l - 1;
    for(j = l; j <= h; j++){
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return (i+1);
}

//quick sort
void quickSort(int arr[],int l,int h){
      
    if(l < h){
        //finding the pivot the array
     int pi = partition(arr, l, h);
      //for left side pivot
     quickSort(arr,l,pi-1);
     //for right side of pivot
     quickSort(arr,pi+1,h);
    }
  
 
}


int main()
{
  int n ,i ,k;
printf("enter the size of the array \n");
scanf("%d",&n); 
int arr[n];
printf("enter the elements of the array\n");
for(i = 0 ; i < n ; i++){
    scanf("%d",&arr[i]); // taking elements of array as input
}
selectionSort(arr,n);
bubbleSort(arr,n);
insertionSort(arr,n);
quickSort(arr,0,n-1);
printarr(arr,n);
}