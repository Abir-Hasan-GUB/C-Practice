#include<stdio.h>
int main()
{
    int year;

    scanf("%d",&year);
        if(year == 0){
        return 0;
    }

    if(year % 100 == 0){
        printf("Not Leap Year");
    }else if(year % 400 == 0 || year % 4 == 0){
        printf("Leap Year");
    }else{
        printf("Not Leap Year");
    }
    main();

}
