#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_apple, int num_carrot, int k)
{
	int answer = 0;

	if (num_apple > num_carrot * 3)
		answer = num_carrot;
	else
		answer = num_carrot;
	  num_apple -= 3 * answer;
		num_carrot -= answer;

	for (int i = 0; k - (num_apple + num_carrot + i) > 0; i++)
		if (i % 4 == 0)
			answer--;
	
	return answer;
}

int main(void)
{
	int num_apple1 = 5;
	int num_carrot1 = 1;
	int k1 = 2;
	int ret1 = solution(num_apple1, num_carrot1, k1);

	printf("Solution함수의 반환 값은 %d입니다.\n", ret1);

	int num_apple2 = 10;
	int num_carrot2 = 5;
	int k2 = 4;
	int ret2 = solution(num_apple2, num_carrot2, k2);

	printf("Solution함수의 반환 값은 %d입니다.\n", ret2);

	return 0;
}
