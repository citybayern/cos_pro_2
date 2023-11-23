#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int speed, int cars[], int cars_len)
{
	int answer = 0;

	for (int i = 0; i < cars_len; i++)
	{
		if (cars[i] < speed)
			answer += 0;
		else if (cars[i] >= 110 && cars[i] < 120)
			answer += 3;
		else if (cars[i] >= 120 && cars[i] < 130)
			answer += 5;
		else if (cars[i] > 130)
			answer += 7;
	}
	return answer;
}

int main(void)
{
	int speed = 100;
	int cars[] = { 110, 98, 125, 148, 120, 112, 89 };
	int cars_len = 7;
	int ret = solution(speed, cars, cars_len);
	printf("Solution함수의 반환 값은 %d입니다.\n", ret);
  return 0;
}
