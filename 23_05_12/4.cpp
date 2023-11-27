#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(char* schedule[], int schedule_len)
{
	int x_count = 0;

	for (int i = 0; i < schedule_len; i++)
	{
		if (schedule[i] == "x")
		{
			x_count++;
		}
	}

	int* answer = (int*)malloc(sizeof(int) * x_count);

	for (int i = 0, j = 0; i < 10; i++) {
		if (schedule[i][0] == 'x')
		{
			answer[j++] = i + 1;
		}
	}

	return answer;
}

int main()
{
	char* schedule[] = { "o","x","x","o","o","o","x","o","x","x" };
	int* ret = solution(schedule, 10);
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", ret[i]);
	}
	printf("ÀÔ´Ï´Ù.");

	return 0;
}
