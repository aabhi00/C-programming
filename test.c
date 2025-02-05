#include<stdio.h>
int main()
{
printf("aao dikhate switch case ka use \n");
int x= 1, y = 1,z = 1;
switch(y){
    case 0 : x = 1, y = 1;
    break;
    case 1: x =2 , y = 2;
    break;
    default: x = 1, z = 2; 
}
 printf("%d, %d, %d",x,y,z);
    return 0;
}