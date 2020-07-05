#include<stdio.h>
int main()
{
    printf("Enter any character: ");
    char ch;
    scanf("%c",&ch);

    if((ch<='z' && ch>='a')|| (ch<='Z' && ch>='A')){
        printf("%c is alphabet...\n",ch);
    }else if(ch <= 0 && ch>=9){
        printf("%c is digit..\n",ch);
    }else{
        printf("%c is special character.\n",ch);
    }
    return 0;
}
