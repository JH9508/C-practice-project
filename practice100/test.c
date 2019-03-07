// 다음과 같이 구현하시오 .
/*
	조건 1 : for, if 문을 활용하시오 . 
	경일대학교에서는 점수별로 등급을 매기는 프로그램을 개발했다 .
	100점 ~ 90점까지는 'A' 등급
	89점 ~ 80점까지는 'B' 등급
	79점 ~ 70점까지는 'C' 등급
	나머지 는 모두 F등급으로 처리하기로했다 .
	입력은 '0'을 입력했을때 종료되고 그전까지는
	계속해서 입력과 등급출력을 반복해야한다 .
*/

#include <stdio.h>


int main(void) {
	int score=1;
	scanf("%d", &score);
	while (score>0)
	{
		if (score >= 90) {
			printf("A\n");
		}
		else if (score >= 80) {
			printf("B\n");
		}
		else if (score >= 70) {
			printf("C\n");
		}
		else {
			printf("F\n");
		}
		scanf("%d", &score);
	}
	return;
}