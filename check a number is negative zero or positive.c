#include<stdio.h>
int main()
{
    printf("Enter any number: ");
    int num;
    scanf("%d",&num);

    if(num > 0){
        printf("%d is positive number\n",num);
    }else if(num < 0){
        printf("%d is negative number\n",num);
    }else if(num == 0){
        printf("%d is zero\n",num);
    }
    return 0;
}
