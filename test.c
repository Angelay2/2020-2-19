#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

// ѭ����for(ǣ�����) / whileѭ��

/* �������
1. ���ֱ���
for (i = a; i < b; i++)
i ����˶����� [a,b) ֮��ı���

2.�������
for(i = 0; i < n; i++)
a[i] ����˶����� a �ı���

3. ��λ����(�ع��� ����ת��)
for(i = n; i; i /= m)
i % m ����� m �����¶� n ÿһλ�ı���

4. �ַ�������
for(i = 0; str[i]; i++)
str[i] ����˶��ַ��� str �ı���

5. �������
for(cur = head; cur; cur = cur -> next)
cur ����˶����� head �ı���

6. ��������
for(iter = v.begin(); iter != v.end; iter++)
������ iter ����˶����� v �ı���*/ 

// ���һ��������ÿһλ
int main1(){
	int n = 12345;

	int i;
	for (i = n; i; i /= 10){
		printf("%d ", i % 10);
	}

	system("pause");
	return 0;
}
// �������µ�ÿһλ
int main2(){

	int n =  1048576;

	int i;
	for (i = n; i; i /= 2){
		printf("%d\n", i % 2);
	// 000000000000000000001 ԭ����20 ��0 ǰ��һ��1 => 2^20
	}

	system("pause");
	return 0;
}
// ��ӡ16 �����µ�ÿһλ
int main3(){

	int n = 1048575;

	int i;
	for (i = n; i; i /= 16){
		printf("%X ", i % 16);// ���15 ȫF
	}

	system("pause");
	return 0;
}
// ���õݴ�ӡÿһλ
// ���Ŵ�ӡ
void PrintNum(int n){

	if (n > 0){

	printf("%d ", n % 10);
	PrintNum(n / 10);

	}

}
// ���Ŵ�ӡ
void printNum(int n){

	if (n >= 0){
		printNum(n / 10);
		printf("%d", n % 10);
	}

}
// ��ӡ��������µ�һ����
void printNUM(int n, int m){
	if (n > 0){
		printNUM(n / m, m);
		printf("%d ", n % m);
	}
}

// ������ �˼���16��������ʾ����Ӧ�Ǵ�д��ĸ
void PRINTNUM(int n, int m){
	if (n > 0){
		PRINTNUM(n / m, m);
		putchar("0123456789ABCDEF"[n % m]);// ˫������Ϊ���� 
		//// ���36����ԭ�� ����ת��Ϊ36���µ��������
	//putchar("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[n % m]);

	}
}

int main(){
	int n = 1048575;

	/*PrintNum(n);
	printf("\n");
	printNum(n);
	printNUM(n,2);*/

	PRINTNUM(n, 16);// FFFFF
	system("pause");
	return 0;
}