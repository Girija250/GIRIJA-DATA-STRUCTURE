#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], i;
    printf("Enter any 10 array elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("\nOdd numbers stored at odd positions are:\n");
    for(i=0; i<10; i++)
    {
        if(i%2!=0)
            printf("%d ", arr[i]);
    }
    getch();
    return 0;
}
