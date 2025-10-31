#include <stdio.h>
void main()
{
    int a[100], n, val, position, i;
    printf("How many value you want to enter: ");
    scanf("%d", &n);

    printf("Enter the values:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position where you want to insert new value: ");
    scanf("%d", &position);
    printf("Enter the new value:");
    scanf("%d", &val);

    for (i = n - 1; i >= position - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[position - 1] = val;
    n++;
    printf("After insertion, array elements: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
}
