// Title - C 프로그램의 구조와 데이터 출력 방법 / p. 24~35

// Printf 같은 걸 쓰기 위해서
// 이걸 적고 프로그램에 가져온디
#include<stdio.h> 

// C Main Function
int Cmain(void)
{
	// [;] : 문장을 끝내겠다
	//Printf() 함수 : 문자열을 화면에 출력
	
	/*	# 제어문자
		/n : 줄바꿈 (New Line) 
		\r : 현재 커서위치를 맨 앞으로 
		\b : 현재 커서위치를 뒤로 돌려라 (왼쪽으로 움직임)
		\t : tap 키를 누른만큼 공백을 만들어 냄
		\a : 밸소리를 내준다 */

	// --- # Code ---
	10 + 20;

	printf("Be Happy\n");
	printf("My Freind\n");

	printf("My\t Friend!!\n");
	printf("Goot\bd Chance\n");
	printf("Cow\rW\a\n");

	printf("%d\n", 10); // 정수 출력
	printf("%.1lf\n", 3.4); // 실수 출력
	// ---------------

	return 0; // 프로그램을 종료시키는 역할
}

