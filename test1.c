#include <stdio.h>
#include <stdlib.h>


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