#include<stdio.h>

int main()
{
	//sizeof()���� ��������������ռ���ֽ�
	// 1 size���ֽڣ�= 8 bit�����أ�
	// 1 MB = 1024 size
	// 1 GB = 1024 MB
	// 1 TB = 1024 GB
	printf("char: %d�ֽ�\n", sizeof(char));
	printf("short: %d�ֽ�\n",sizeof(short));
	printf("int: %d�ֽ�\n", sizeof(int));
	printf("long: %d�ֽ�\n", sizeof(long));
	printf("long long: %d�ֽ�\n", sizeof(long long));
	printf("float: %d�ֽ�\n", sizeof(float));
	printf("double: %d�ֽ�\n", sizeof(double));
	return 0;
}