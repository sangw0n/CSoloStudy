//#include <stdio.h>
//
//#define VALUE1 2
//#define VALUE2 3
//
//int main() 
//{
//	 �� ������ �ʱ갪�� 5, 3���� �ʱ�ȭ
//	int data1 = 5, data2 = 3;
//
//	 # ------ ��� ������ ---------
//	 ����
//	int result1 = data1 + data2;
//	 ����
//	int result2 = data1 - data2;
//	 ������ ��
//	int result3 = data1 / data2;
//	 ������ ������
//	int result4 = data1 % data2;
//	 ����
//	int result5 = data1 * data2;
//
//	printf("����:%d ����:%d ������(��):%d ������(������):%d ����:%d", result1, result2, result3, result4, result5);
//
//	 # ------ ���� ������ ---------
//	int i = 5, sum;
//	sum = i++;
//
//	 sum = ++i ���� ���� ������Ű�� ����
//	 sum = i++ ���� �� ���� ������Ŵ
//
//	printf("%d\n", i);
//	printf("%d\n", sum);
//
//	 # ------ ���� ������ ---------
//	int result1 = VALUE1 > 3; // false 0
//	int result2 = VALUE1 <= VALUE2; // true 1
//	int result3 = VALUE1 == VALUE2; // false 0
//	int result4 = VALUE1 != VALUE2; // true 1
//
//	printf("result : %d, %d, %d, %d", result1, result2, result3, result4);
//
//	 # ------ �� ������ ---------
//	int result1 = 0 || 1; // true 1
//	int result2 = 3 && -1; // true 1
//	int result3 = VALUE1 == 2 && VALUE2 == 2; // false 0
//	int result4 = VALUE1 == 2 && VALUE2 == 3; // true 1
//	int result5 = !VALUE1; // false 0
//	printf("result : %d, %d, %d, %d, %d", result1, result2, result3, result4, result5);
//
//	int data = 5, result = 0;
//
//	result = result-- && (data = 0);
//	printf("%d %d", result, data);
//
//	return 1;
//}