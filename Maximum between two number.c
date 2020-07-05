#include<stdio.h>
int main()
{
    printf("Enter any two number: ");
    int a, b;
    scanf("%d %d",&a,&b);

    if(a>b){
        printf("%d is maximum number\n",a);
    }else{
        printf("%d is maximum number\n",b);
    }
    return 0;
}
