#include <stdio.h>
int main()
{
	int rain[7][7] = {
		{10, 11, 12, 13, 14, 65, 16},
		{17, 18, 29, 20, 21, 22, 23},
		{24, 42, 26, 27, 28, 79, 30},
		{31, 32, 33, 84, 35, 36, 37},
		{38, 39, 40, 96, 42, 73, 44},
		{45, 46, 47, 48, 49, 60, 51},
		{52, 53, 94, 55, 56, 57, 58}};
	int highest[7] = {0};
	int weeklyrain[7] = {0};
	int sum = 0, index;
	for (int i = 0; i < 7; i++)
	{
		int max = rain[i][0];
		for (int j = 0; j < 7; j++)
		{
			sum += rain[i][j];
			if (rain[i][j] > max)
			{
				max = rain[i][j];
				index = j;
			}
		}
		highest[i] = index;
		weeklyrain[i] = sum;
		sum = 0;
	}
	for (int i = 0; i < 7; i++)
	{
		printf("\nweekly rain in district %d= %d", i + 1, weeklyrain[i]);
		printf("\nthe day with the highest rainfall in district %d= %d", i + 1, highest[i]);
	}
}