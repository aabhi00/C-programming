#include<stdio.h>
#include<string.h>
//function for reversing the string
//we can also pass the argument as (char str[]) also we can use a different name for the argument
void revstr(char *str)
{
    int i, len, flag = 0;
    len = strlen(str); // strlen() is a library functio gives us the length of the string
    for(i = 0; i < len/2; i++){
        int temp;
        //we can use temp as int or char data type in both case
        // it will work as it will store ascii value in int datatype 
        //and character in char datatype
        temp = str[i];
        str[i] = str[len-i-1]; // swap the character
        str[len-i-1] = temp;

        //checkin for palindrome
        if(str[i] != str[len-i-1]);
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    printf("\ngiven string is not a palindrome\n");
    else
    printf("given string is a palinddrome\n");
}

//using recursion 
void recrev(char *s){
    //static variable preserving it's actual value even after it is out of its scope
    //and we don't have to initialise again and again in case of new scope
    static int i,len, temp;
    len = strlen(s);
    if(i < len/2){
        temp = s[i];
        s[i] = s[len-i-1];
        s[i] = temp;
        i++;
        recrev(s);//recursively calls the recrev() function
    }
}
int main ()
{
    char str[40];
    printf("enter the string to be reversed\n");
    scanf("%s",&str);
    //using strrev() library function from string.h
    printf("after the reversel of string \n %s \n",strrev(str));
    revstr(str);
    printf("the reversed string using function \n %s\n",str);
    // using recursion
    recrev(str); 
    printf("the reverse string using recursion\n %s\n",str);
    return 0;
}