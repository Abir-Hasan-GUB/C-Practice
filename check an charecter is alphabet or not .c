#include<stdio.h>
int main()
{
    printf("Enter Any Character: ");
    char ch;
    scanf("%c",&ch);

    if((ch <= 'a' || ch<='A') && (ch>='a' || ch>= 'A')){
        printf("%c is a character...\n",ch);
    }else{
        printf("%c is not a character...\n",ch);
    }
    return 0;
}
