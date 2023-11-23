#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int scores[],int scores_len) {
	int answer = 0;
	int max = 0;
	int min = 100;
	int sum = 0;

	for (int i = 0; i < scores_len; i++) {
		if (scores[i] > max)max = scores[i];
		if (scores[i] < min)min = scores[i];
		sum += scores[i];
	}

	answer = (float)((sum - max - min) / (scores_len - 2));

	return answer;
}

int main() {
	int scores1[10] = { 35,28,98,34,20,50,85,74,71,7 };
	int scores1_len = 10;
	int ret1 = solution(scores1, scores1_len);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret1);

	int scores2[5] = { 1,1,1,1,1 };
	int scores2_len = 5;
	int ret2 = solution(scores2, scores2_len);

	printf("solution 함수의 변환 값은 %d 입니다.\n", ret2);

	return 0;
}
