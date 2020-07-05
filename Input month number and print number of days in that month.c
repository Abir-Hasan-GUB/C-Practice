#include<stdio.h>
void month(int);
int main()
{
    printf("Enter any month number: ");
    int month_number;
    scanf("%d",&month_number);
    if(month_number>12){
        printf("Enter correct month number...\n");
    }else{
        month(month_number);
    }
    return 0;
}
void month(int month){
    if(month == 1){
        printf("It is January month and it has 31 days..\n");
    }else if(month == 2){
        printf("It is February month and it has 28 days..\n");
    }else if(month == 3){
        printf("It is March month and it has 31 days..\n");
    }else if(month == 4){
        printf("It is April month and it has 30 days..\n");
    }else if(month == 5){
        printf("It is May month and it has 31 days..\n");
    }else if(month == 6){
        printf("It is June month and it has 30 days..\n");
    }else if(month == 7){
        printf("It is July month and it has 31 days..\n");
    }else if(month == 8){
        printf("It is August month and it has 31 days..\n");
    }else if(month == 9){
        printf("It is September month and it has 30 days..\n");
    }else if(month == 10){
        printf("It is October month and it has 31 days..\n");
    }else if(month == 11){
        printf("It is November month and it has 30 days..\n");
    }else{
        printf("It is December month and it has 31 days..\n");
    }
}
