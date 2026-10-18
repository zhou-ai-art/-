#include<stdio.h>
int main()
{
	int kai = 0;
	int j = 0;
	int i = 0;
	int zhou = 0;
	int cheng = 0;
	int m = 0;
	int p = 0;
	int b = 0;
	int w = 0;
	int arr[10][10];
	scanf_s("%d%d", &b, &w);
	for (i = 0;i < b;i++)
	{
		for (j = 0;j < w;j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	for (i = 0;i < b;i++)
	{
		for (j = 0;j < w;j++)
		{
			zhou = 1;
			for (m = 0;m < w;m++)
			{
				if (arr[i][j] <= arr[i][m])
				{
					zhou = 0;
				}



			}
			cheng = 1;
			for (p = 0;p < b;p++)
			{
				if (arr[i][j] >= arr[p][j])
				{
					cheng = 0;
				}


			}

			if (zhou == 1 && cheng == 1)
			{
				printf("fournd!!\n");
				printf("it is : %d", arr[i][j]);
				kai = 1;

			}


		}

	}

	if (kai != 1)
	{
		printf("not fournd");

	}

	return 0;
}