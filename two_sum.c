#include<stdio.h>
void twoSum(int arr[],int t){
    int i,j, l = sizeof(arr)/sizeof(arr[0]);
    int a[10],n = 0;
for(i = 0; i < l; i++){
for(j = i+1; j < l;j++){
   if(arr[j] == t - arr[i]){
   a[n++] = i;
   a[n++] = j;
   }
}
}
printf("the two sum pairs are\n");
     for(i = 0; i < n; i++){
            printf("%d, ",a[i]);
        }
}
int main(){
    int target,arr[] = {3,5,-8,6,2};
    printf("enter the target value\n");
    scanf("%d",&target);
    twoSum(arr,target);
   
}
