//#include <stdio.h>
//
// 변수의 특정 비트를 0으로 만드는 예제
// bit_num번 있는 비트를 0으로 설정하기
//unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num)
//{
//	 1바이트 변수라서 비트 이동은 0~7까지 가능함
//	if (bit_num < 8) dest_data = dest_data & ~(0x01 << bit_num);
//
//	return dest_data;
//}
//
// 변수의 특정 비트를 1으로 만드는 예제
// bit_num번 있는 비트를 0으로 설정하기
//unsigned char SetBit(unsigned char dest_data, unsigned char bit_num)
//{
//	if (bit_num < 8) dest_data = dest_data | (0x01 << bit_num);
//
//	return dest_data;
//}
//
//int main()
//{
//	char data = 5;
//	 8 4 2 1
//	 4 0100 : 
//	 5 0101 :
//	 6 0110 :
//	 << * >> /
//	 2 의 n승
//	 5 * 8 = 40
//	/*printf("%d", data >> 4);*/
//
//	 2번 비트를 0으로 설정하기
//	unsigned char lamp_state; // 1 바이트 , 양수만
//	lamp_state = lamp_state & 0xFB;
//
//	 임의의 비트를 0으로 설정하기
//	unsigned char lamp_state;
//	unsigned char bit_num = 2;
//	 비트를 2번으로 옮겨주고 반전시킴
//	unsigned char mask = ~(0x01 << bit_num);
//	 2번 비트만 0으로 변경
//	lamp_state = lamp_state & mask;
//
//	 2번 비트를 1로 설정하기
//	unsigned char lamp_state;
//	lamp_state = lamp_state | 0x04;// 0x04 : 0000 0100
//
//	 임의의 비트를 1로 설정하기 
//	unsigned char lamp_state;
//	unsigned char bit_num = 2; // 1로 만들 비트 번호
//	unsigned char mask = 0x01 << bit_num;
//	lamp_state = lamp_state | mask;
//	return 0;
//}