#include<stdio.h>
int main()
{
    printf("Enter any three number: ");
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && c<a){
        printf("%d is maximum number\n",a);
    }else if(b>c && a<b){
        printf("%d is maximum number\n",b);

    }else{
        printf("%d is maximum number\n",c);
    }
    return 0;
}
