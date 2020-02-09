#include <stdio.h>
#include <stdlib.h>

// 内存对齐
// CPU在访问内存时, 内存访问的基本单位是字节,在32位平台下有2^32个字节
// 不是所有的硬件平台都能访问任意地址下的任意数据
// 某些硬件平台只能在某些地址下访问特定数据
// (进学校 校门个数 安装门的工作量)
// 为了降低工作量 简单有效 所以CPU访问内存时 不是从任意地址访问 而是在特定地址处访问(硬件)
// 但是使用随意使用(软件) 软件遇到的地址和硬件的地址区别
// 核心目标: 以空间换时间提升效率 => 内存对齐
// 如果没有内存对齐 会导致效率降低 由于硬件平台限制 只能从若干地址处访问
// 如果若干成员横跨多个区域 就有可能要进行多次访问 避免减少这种情况 简单
// 故而采用内存对齐 => 用空间换时间
// 结构体内存对齐
// 在结构体内,所有元素或部分元素在存储时 在内存空间内不连续的情况就是内存对齐


struct A{
	double a;
	char b;
	int c;// 8+4+4 = 16  整除8 => 16
};
struct B{
	char a;
	double b;
	int c;// 1+12+4 = 17 要想整除12 => 24
};
int main(){

	printf("%d\n", sizeof(struct A));// 16
	printf("%d\n", sizeof(struct B));// 24

	system("pause");
	return 0;
}
//
int main1(){
	int num = 7;
	int sum = 7;
	sum = num++, sum++, ++num;
	printf("%d\n", sum);// 8
	system("pause");
	return 0;
}
int main2(){
	//int i = 10, j = 10, k = 3;
	//k *= i + j;
	//printf("%d\n", k);// 60
	int i, j, a[2][3];
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			a[i][j] = i * 3 + j + 1;
			printf("%d",a[i][j]);
		}
	}
	
	system("pause");
	return 0;
}