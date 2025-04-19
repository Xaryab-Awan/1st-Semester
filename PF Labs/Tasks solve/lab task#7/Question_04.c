#include <stdio.h>
int main()
{
	int size, i, max = 0;
	printf("enter size of array:");
	scanf("%d", &size);
	int arr_1[size];
	for (i = 0; i < size; i++)
	{
		printf("enter the element %d= ", i + 1);
		scanf("%d", &arr_1[i]);
		if (arr_1[i] > max)
		{
			max = arr_1[i];
		}
	}
	int arr_2[max + 1];
	for (i = 0; i <= max; i++)
	{
		arr_2[i] = 0;
	}

	for (i = 0; i < size; i++)
	{
		arr_2[arr_1[i]]++;
	}

	for (i = 0; i <= max; i++)
	{
		if (arr_2[i] > 1)
		{
			printf("%d occur more than once\n", i);
		}
	}
}