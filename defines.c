// 컴파일러에게 명시한 파일을 읽도록 지시하는것 
//#include <stdio.h>
//
// 3을 치환해서 VALUE_1로, 보기 편하고 소스코드를 더 편하게 관리가능
//#define VALEU_1 3
//#define VALEU_2 3
//
// 명령을 치환해서 사용하는 것이 함수와 비슷해서 매크로 함수라고 이야기한다
//#define DEFINEADD(a) (a+a)
//
//int main()
//{
//	int value = VALEU_1 + VALEU_2;
//	printf("Define Value Add :  %d \n", value);
//	
//	printf("매크로 함수 결과 : %d\n", DEFINEADD(9));
//
//	putchar('H');
//	putchar('i');
//	putchar('~');
//
//	puts("Hello ~~ World");
//	puts("김필원");	
//
//	int month = 12, day = 3;
//	printf("너는 생일이 언제니?\n");
//	printf("나의 생일은 %d월 %d일입니다.", month, day);
//
//	float value = 2.111111;
//	printf("float : %f", value);
//
//	int value = -222222;
//	printf("unsinged : %u", value);
//
//	int value = 8;
//	printf("[%1d] [%03d] [%-5d]", value, value, value);
//
//	double value = 3.141592;
//	printf("[%f] [%.4f] [%8.4f] [%-8.4f]", value, value, value, value);
//
//	printf("\"Hello World\"\a");
//
//	return 1;
//}