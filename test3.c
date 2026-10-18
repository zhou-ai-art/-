#include <stdio.h>

int main()
{
    char arr[101];
    scanf_s("%s", arr,100);
    int i = 0;
    printf("leters : ");
    for (i = 0; arr[i] != '\0'; i++)
    {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
            printf(" %c", arr[i]);
    }
    printf("\n");
    printf("number : ");
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
            printf(" %c", arr[i]);
    }
    return 0;
}
