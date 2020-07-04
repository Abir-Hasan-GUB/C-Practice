#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter Tow Number: ");
    scanf("%d%d",&num1,&num2);

    if(num1>num2){
        printf("Maximum number is: %d",num1);
    }else{
        printf("Maximum number is : %d",num2);
    }
    return 0;
}
