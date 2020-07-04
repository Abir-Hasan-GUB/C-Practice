#include<stdio.h>
int main()
{
    int num;
    printf("Enter Any Number: (<1 for terminate)::");
    scanf("%d",&num);
    if(num < 1)
    {
        printf("Program Terminate...");
        return 0;
    }
    if(num % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

    main();
}
