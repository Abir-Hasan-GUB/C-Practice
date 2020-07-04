#include<stdio.h>

int main()
{
    int array[100],n,i;

    printf("How Many Input ? : ");
    scanf("%d",&n);

    printf("Enter Your Input : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    int low_index = 0;
    int high_index = n;
    int mid_index;

    printf("\nHow to you find number ? : ");
    int num;
    scanf("%d",&num);

    while(low_index<=high_index)
    {
        mid_index = (low_index + high_index) / 2;

        if(num == array[mid_index])
        {
            break;
        }

        if(num < array[mid_index])
        {
            high_index = mid_index - 1;
        }

        else
        {
            low_index = mid_index + 1;
        }

    }

    if(low_index > high_index)
    {
        printf("\n%d is not found in this array...!\n",num);
    }

    else
    {
        printf("\n%d Is found. Position is %d\n",array[mid_index],mid_index+1);
    }

    return 0;
}
