#include<stdio.h>
int main()
{
    printf("Enter any character: ");
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("%c is lower case character...\n",ch);
    }else{
        printf("%c is upper case character...\n",ch);
    }
    return 0;
}
