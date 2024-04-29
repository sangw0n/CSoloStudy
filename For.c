//#include <stdio.h>
//
//void ShowMultiplication(int step)
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d * %d = %d\n", step, i, step * i);
//	}
//}
//
//void main()
//{
//	int sum = 0, num;
//	for (num = 1; num < 100; num++) {
//		printf("num(%d) + sum (%d) = ", num, sum);
//
//		sum += num;
//
//		printf("%d\n", sum);
//	}
//	printf("\nResult : num = %d sum = %d\n", num, sum);
//
//	int sum = 0;
//	int num = 1; // 시작 조건
//
//	while (num <= 5)
//	{
//		printf("num(%d) + sum (%d) = ", num, sum);
//		sum += num;
//		printf("%d\n", sum);
//
//		// 다움 숫자를 더하기 위해서 숫자를 증가시킴
//		num++;
//	}
//	printf("\nResult : num = %d sum = %d\n", num, sum);
//
//	int count = 0;
//
//	while (count < 10)
//	{
//		printf("안녕하세요!\n");
//		count++;
//	}
//
//	int num = 0;
//	int sum = 0;
//
//	do {
//		printf("num(%d) + sum (%d) = ", num, sum);
//		sum += num;
//		printf("%d\n", sum);
//
//		num++;
//	} while (num <= 5);
//
//	printf("\nResult : num = %d sum = %d\n", num, sum);
//	
//	for (int m = 2; m <= 9; m++) {
//		ShowMultiplication(m);
//		printf("\n");
//	}
//
//	for (int i = 2; i <= 5; i++)
//	{
//		for (int m = 1; m <= 9; m++)
//		{
//			printf("%d * %d = %d\n", i, m, i * m);
//		}
//		printf("\n");
//	}
//}