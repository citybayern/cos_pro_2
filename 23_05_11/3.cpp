#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int teakwondo,int running,int shooting[], int shooting_len) {
	int answer = 0;

	if (teakwondo >= 25) 
    answer += 250;
	else 
    answer += teakwondo * 8;

	int count = 0;

	for (int i = 0; i < shooting_len; i++) {
		if (shooting[i] == 10)
      count++;
		answer += shooting[i];
	}
	if (count >= 7) answer += 100;

	return answer;
}

int main() {
	int teakwondo = 27;
	int running = 63;
	int shooting[] = { 9,10,8,10,10,10,7,10,10,10 };
	int shooting_len = 10;
	int ret = solution(teakwondo, running, shooting, shooting_len);
	printf("solution ÇÔ¼öÀÇ º¯È¯ °ªÀº %d ÀÔ´Ï´Ù.\n", ret);

	return 0;
}
