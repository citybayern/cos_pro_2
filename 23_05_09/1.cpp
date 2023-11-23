#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b)
{
	int answer = 0;
	for (int i = 1; i < a * b; i++)
	{
		if ((b * i) % a == 0)
		{
			answer = b * i;
			break;
		}
	}
	return answer;
}

int main()
{
	int a = 4;
	int b = 6;
	int ret = solution(a, b);

	printf("solution 함수의 반환 값은 %d 입니다 \n", ret);
	return 0;
}
