#include<stdio.h>
int main()
{
	int i = 0;
	int arr[5] = { 0 };
	for (i = 0; i < 5;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int zhou = 0;
	for (zhou = 0; zhou <=4;zhou++)
	{
		for (i = 0; i < 4;i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int cheng = 0;
					cheng = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = cheng;
			}

		}

	}
	for (i = 0; i < 5;i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\n");
	int sum = 0;
	for (i = 0;i < 5;i++)
	{
		sum += arr[i];

	}
	float av = 0;
	av = sum / 5.0;
	printf("this mid is %.2f", av);

	return 0;
}