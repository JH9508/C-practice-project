// ������ ���� �����Ͻÿ� .
/*
	���� 1 : for, if ���� Ȱ���Ͻÿ� . 
	���ϴ��б������� �������� ����� �ű�� ���α׷��� �����ߴ� .
	100�� ~ 90�������� 'A' ���
	89�� ~ 80�������� 'B' ���
	79�� ~ 70�������� 'C' ���
	������ �� ��� F������� ó���ϱ���ߴ� .
	�Է��� '0'�� �Է������� ����ǰ� ����������
	����ؼ� �Է°� �������� �ݺ��ؾ��Ѵ� .
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