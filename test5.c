#include < stdio.h>
int main()
{
    int n = 0;
    int a = 0;
    int i = 0;
    int arr[100] = { 0 };
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    int k = 0;
    scanf_s("%d", &k);
    k = k % n;
    for (a = 0;a <k;a++)
    {
        int b = 0;
        b = arr[n - 1];
        for (i = n;i >=1;i--)
        {
            arr[i - 1] = arr[i - 2];

        }
        arr[0] = b;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}



