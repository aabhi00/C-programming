#include<stdio.h>
//fibonacci series using loop
void fib(int n){
    int i, curr = 1, pre = 0, next = 0;
    printf("the fibonacci series is\n 0, 1");
    for(i = 0; i < n - 2; i++){
    next = pre + curr;
    printf(", %d",next);
    pre = curr;
    curr = next;
    }
}

//fibonacci series using recursion
int recFib(int n){
    if(n == 0){
        return 0;
    }                     // base case as first two terms of series is 0 & 1
    else if(n == 1){
         return 1;
    }
  else
   return (recFib(n-1) + recFib(n-2));//every next term is sum of it's previous two terms
   
  
}

//function for finding factorial of a number
int fact(int n){
    int f = 1;
    if(n == 0 || n == 1) //factorial of 0 || 1 is 1
    return 1;
    f = n * fact(n-1);
    return f;
}


int main(){
    int x,n,i;
    printf("enter the number to find the factorial\n");
    scanf("%d",&x);
    printf("the factorial of %d is %d",x,fact(x));
    printf("\nenter the no of term to print the fibonacci series\n");
    scanf("%d",&n);
    fib(n);
    printf("\nthe fibonacci series using recursive function\n");
    for(i = 0; i < n; i++)
    printf("%d, ", recFib(i));
    return 0;
}