#include<stdio.h>
void week(int num);
int main()
{
    printf("Enter any number of day of week (1 to 7) : ");
    int num;
    scanf("%d",&num);
    if(num > 7){
        printf("Please input correct number...\n");
    }else{
         week(num);
    }
    return 0;
}
///Function for find day name...
void week(int num){
        if(num == 1){
        printf("Saturday\n");
    }else if(num == 2){
        printf("Sunday\n");
    }else if(num == 3){
        printf("Monday\n");
    }else if(num == 4){
        printf("Tuesday\n");
    }else if(num == 5){
        printf("Wednesday\n");
    }else if(num == 6){
        printf("Thursday\n");
    }else{
        printf("Friday\n");
    }
   }
