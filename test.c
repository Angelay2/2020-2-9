#include <stdio.h>
#include <stdlib.h>

// �ڴ����
// CPU�ڷ����ڴ�ʱ, �ڴ���ʵĻ�����λ���ֽ�,��32λƽ̨����2^32���ֽ�
// �������е�Ӳ��ƽ̨���ܷ��������ַ�µ���������
// ĳЩӲ��ƽֻ̨����ĳЩ��ַ�·����ض�����
// (��ѧУ У�Ÿ��� ��װ�ŵĹ�����)
// Ϊ�˽��͹����� ����Ч ����CPU�����ڴ�ʱ ���Ǵ������ַ���� �������ض���ַ������(Ӳ��)
// ����ʹ������ʹ��(���) ��������ĵ�ַ��Ӳ���ĵ�ַ����
// 

struct A{
	double a;
	char b;
	int c;
};
struct B{
	char a;
	double b;
	int c;
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