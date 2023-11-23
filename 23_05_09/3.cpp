#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int ladders[][2], int ladders_len, int win)
{
	int answer = 0;
	int player[6] = { 1, 2, 3, 4, 5, 6 };

	for (int i=0; i<ladders_len; i++)
	{
		int prize = player[ladders[i][0] - 1];
		player[ladders[i][0] - 1] = player[ladders[i][1] - 1];
		player[ladders[i][1] - 1] = prize;
	}

	answer = player[win-1];

	return answer;
}

int main(void)
{
	int ladders[5][2] = {{1,2},{3,4},{2,3},{4,5},{5,6}};
	int ladders_len = 5;
	int win = 3;
	int ret = solution(ladders, ladders_len, win);

	printf("Solution함수의 반환 값은 %d입니다\n", ret);

	return 0;
}
