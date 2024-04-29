//#include <stdio.h>
//
//int main()
//{
//	 제어문 : 프로그램의 실행 흐름을 제어하는 문법
//
//	 조건문
//
//	/* 단일 명령문 */
//	int data = 6;
//	if (data > 3) printf("data는 3보다 큰 수 입니다. \n");
//	printf("작업 종료 \n");
//
//	/* 복합 명령문 */
//	int score = 92;
//	char grade;
//	if (score >= 90)
//	{
//		grade = 'A';
//		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
//	}
//	printf("작업 종료 \n");
//
//	 --------------------------------------------------
//
//	 if ~ else ~
//
//	/* 단일 명령문 */
//	int data = 2;
//	if (data > 3) printf("data는 3보다 큰 수 입니다.\n");
//	else printf("data는 3보다 작거나 같은 수 입니다. \n");
//	printf("작업 종료\n");
//
//	/* 복합 명령문 */
//	int score;
//	char grade;
//	
//	printf("점수를 입력하세요: ");
//	scanf_s("%d", &score);
//
//	if (score >= 90)
//	{
//		grade = 'A';
//		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
//	}
//	else {
//		grade = 'B';
//		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
//	}
//	printf("작업 종료 \n");
//
//	 --------------------------------------------------
//
//	 조건 수식 연산자
//	 # if ~ else ~ 와 비교
//	int value = 10000;
//	double point;
//
//	 if ~ else ~
//	if (value >= 10000) point = value * 0.1;
//	else point = value * 0.05;
//
//	 조건 수식 연산자
//	point = (value >= 10000) ? value * 0.1 : value * 0.05;
//
//	 --------------------------------------------------
//
//	 중첩된 if문
//	int year = 2016, month = 5, day = 31;
//
//	day++;
//
//	if (day > 31)
//	{
//		month++;
//		day = 1;
//		if (month > 12)
//		{
//			year++;
//			month = 1;
//		}
//	}
//	printf("Data : %d년 %d월 %d일\n", year, month, day);
//
//	 --------------------------------------------------
//
//	 Switch 조건문
//	int score = 86;
//	char grade;
//	switch (score / 10)
//	{
//	case 10:
//	case 9:
//		grade = 'A';
//		break;
//	case 8:
//		grade = 'B';
//		break;
//	case 7:
//		grade = 'C';
//		break;
//	case 6:
//		grade = 'D';
//		break;
//	default:
//		grade = 'F';
//		break;
//	}
//	printf("당신의 점수는 %d점이고 등급은 %c입니다. \n", score, grade);
//
//	int result = -5;
//	result = (result < 0) ? result * -1 : result;
//	printf("%d", result);
//
//	return 1;
//}