#include <stdio.h>
int main()
{
    int a[10], i,search,n;
    printf("\nEnter number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter number to search: ");
    scanf("%d", &search);
    for (i=0; i<=9; i++)
        if (search== a[i])
        {
            printf("\nItem found at location %d", i+1);
            break;
        }
    if (i > 9)
        printf("\nItem does not exist.");
    return 0;
}

