//#include <stdio.h>
//
//int main()
//{
//	 ��� : ���α׷��� ���� �帧�� �����ϴ� ����
//
//	 ���ǹ�
//
//	/* ���� ��ɹ� */
//	int data = 6;
//	if (data > 3) printf("data�� 3���� ū �� �Դϴ�. \n");
//	printf("�۾� ���� \n");
//
//	/* ���� ��ɹ� */
//	int score = 92;
//	char grade;
//	if (score >= 90)
//	{
//		grade = 'A';
//		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
//	}
//	printf("�۾� ���� \n");
//
//	 --------------------------------------------------
//
//	 if ~ else ~
//
//	/* ���� ��ɹ� */
//	int data = 2;
//	if (data > 3) printf("data�� 3���� ū �� �Դϴ�.\n");
//	else printf("data�� 3���� �۰ų� ���� �� �Դϴ�. \n");
//	printf("�۾� ����\n");
//
//	/* ���� ��ɹ� */
//	int score;
//	char grade;
//	
//	printf("������ �Է��ϼ���: ");
//	scanf_s("%d", &score);
//
//	if (score >= 90)
//	{
//		grade = 'A';
//		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
//	}
//	else {
//		grade = 'B';
//		printf("������ %d�̰� ����� %c�Դϴ�. \n", score, grade);
//	}
//	printf("�۾� ���� \n");
//
//	 --------------------------------------------------
//
//	 ���� ���� ������
//	 # if ~ else ~ �� ��
//	int value = 10000;
//	double point;
//
//	 if ~ else ~
//	if (value >= 10000) point = value * 0.1;
//	else point = value * 0.05;
//
//	 ���� ���� ������
//	point = (value >= 10000) ? value * 0.1 : value * 0.05;
//
//	 --------------------------------------------------
//
//	 ��ø�� if��
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
//	printf("Data : %d�� %d�� %d��\n", year, month, day);
//
//	 --------------------------------------------------
//
//	 Switch ���ǹ�
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
//	printf("����� ������ %d���̰� ����� %c�Դϴ�. \n", score, grade);
//
//	int result = -5;
//	result = (result < 0) ? result * -1 : result;
//	printf("%d", result);
//
//	return 1;
//}