//#include <stdio.h>
//
//void Test(int* p)
//{
//	*p = 5;
//}
//
//int main()
//{
//	 4바이트 
//	 2바이트 
//
//	short birthday;
//	short* ptr;
//	ptr = &birthday;
//	*ptr = 500;
//
//	printf("%p", &ptr);
//
//	void* ptr;
//	int data = 1000;
//
//	ptr = &data;
//	*(int*)ptr = 10000;
//
//	int data = 0x12345678;
//	short* ptr;
//
//	ptr = (short*)&data;
//	*ptr = 0x0412;
//
//	printf("%p", data);
//
//	int tips = 0;
//	Test(&tips);
//	printf("%d", tips);
//
//	int* pa;
//	int* pb;
//	
//	 pa = 100~103 
//	 pb = 108~111
//	 5?
//
//	char a = 0x12, b = 0x34;
//	short c = 0x5678;
//	int t;
//
//	char* ptr_ = (char*)&t;
//	
//	ptr_[3] = a;
//	ptr_[2] = b;
//
//	short* ptr = (short*)&t;
//
//	ptr[0] = c;
//
//	printf("%x", t);
//
//	char a = 0x12, b = 0x34;
//	short c = 0x5678;
//
//	int t;
//	char* ptr = &t;
//
//	*(short*)ptr = c;
//	*(ptr + 2) = b;
//	*(ptr + 3) = a;
//
//	printf("%x", t)
//
//	return 0;
//} 
