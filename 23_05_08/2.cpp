#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* solution(int* people, int people_len) {
	int* answer = (int*)malloc(sizeof(int) * 4);
	memset(answer, 0, sizeof(int) * 4);

	for (int i = 0; i < people_len; i++) {
		if (95 > people[i]) answer[0]++;
		else if (100 > people[i] && 95<= people[i]) answer[1]++;
		else if (105 > people[i] && 100 <= people[i]) answer[2]++;
		else answer[3]++;
	}
	return answer;
}

int main() {
	int people[] = { 97,102,93,100,107 };
	int people_len = 5;
	int* ret = solution(people, people_len);

	printf("solution ÇÔ¼öÀÇ ¹ÝÈ¯ °ªÀº [");
	for (int i = 0; i < 4; i++) {
		if(i != 0){
			printf(", ");
		}
		printf("%d", ret[i]);
	}
	printf("] ÀÔ´Ï´Ù.");
	free(ret);

	return 0;
}
