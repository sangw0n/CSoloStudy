//#include <stdio.h>
//
// ������ Ư�� ��Ʈ�� 0���� ����� ����
// bit_num�� �ִ� ��Ʈ�� 0���� �����ϱ�
//unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num)
//{
//	 1����Ʈ ������ ��Ʈ �̵��� 0~7���� ������
//	if (bit_num < 8) dest_data = dest_data & ~(0x01 << bit_num);
//
//	return dest_data;
//}
//
// ������ Ư�� ��Ʈ�� 1���� ����� ����
// bit_num�� �ִ� ��Ʈ�� 0���� �����ϱ�
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
//	 2 �� n��
//	 5 * 8 = 40
//	/*printf("%d", data >> 4);*/
//
//	 2�� ��Ʈ�� 0���� �����ϱ�
//	unsigned char lamp_state; // 1 ����Ʈ , �����
//	lamp_state = lamp_state & 0xFB;
//
//	 ������ ��Ʈ�� 0���� �����ϱ�
//	unsigned char lamp_state;
//	unsigned char bit_num = 2;
//	 ��Ʈ�� 2������ �Ű��ְ� ������Ŵ
//	unsigned char mask = ~(0x01 << bit_num);
//	 2�� ��Ʈ�� 0���� ����
//	lamp_state = lamp_state & mask;
//
//	 2�� ��Ʈ�� 1�� �����ϱ�
//	unsigned char lamp_state;
//	lamp_state = lamp_state | 0x04;// 0x04 : 0000 0100
//
//	 ������ ��Ʈ�� 1�� �����ϱ� 
//	unsigned char lamp_state;
//	unsigned char bit_num = 2; // 1�� ���� ��Ʈ ��ȣ
//	unsigned char mask = 0x01 << bit_num;
//	lamp_state = lamp_state | mask;
//	return 0;
//}