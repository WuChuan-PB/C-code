#include<stdio.h>

int main()
{
	//sizeof()函数 返回数据类型所占的字节
	// 1 size（字节）= 8 bit（比特）
	// 1 MB = 1024 size
	// 1 GB = 1024 MB
	// 1 TB = 1024 GB
	printf("char: %d字节\n", sizeof(char));
	printf("short: %d字节\n",sizeof(short));
	printf("int: %d字节\n", sizeof(int));
	printf("long: %d字节\n", sizeof(long));
	printf("long long: %d字节\n", sizeof(long long));
	printf("float: %d字节\n", sizeof(float));
	printf("double: %d字节\n", sizeof(double));
	return 0;
}