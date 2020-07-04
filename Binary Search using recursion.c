#include <stdio.h>

void binary_search(int [], int, int, int);

int main()
{
    int item, size, i, pos;
    int list[25];

    printf("Enter size of a list: ");
    scanf("%d", &size);

    printf("\n\nEnter elements\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&list[i]);
    }

    printf("\n");
    printf("\nEnter Item to search\n");
    scanf("%d", &item);

    binary_search(list, 0, size, item);

    return 0;

}


void binary_search(int list[], int lo, int hi, int item)
{
    int mid;

    if (lo > hi)
    {
        printf("\n\nItem not found\n");
        return;
    }
    mid = (lo + hi) / 2;
    if (list[mid] == item)
    {
        printf("\n\nItem found...Location is : %d\n\n",mid+1);
    }
    else if (list[mid] > item)
    {
        binary_search(list, lo, mid - 1, item);
    }
    else if (list[mid] < item)
    {
        binary_search(list, mid + 1, hi, item);
    }

}
