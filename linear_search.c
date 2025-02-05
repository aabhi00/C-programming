#include<stdio.h>
//function to print an array
void printarr(int n, int arr[]){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
printf("enter the size of the array\n");
int n;  
scanf("%d",&n);  // declairation of the size of the array
int i,arr[n],k;
printf("enter the elements of the array \n");
for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);   // taking the array as input
}
printarr(n,arr);
printf("\n enter the key value to be searched \n");
scanf("%d",&k);  // key value as input
for(i = 0; i < n; i++){
    if(arr[i] == k){ // comparing the key value with array elements
        printf("the key %d is present the given array \n",k);
        return 0; // return from the program if found
    }

}
printf("the given key %d is not present in the given array\n",k); // if not found
    return 0;
}