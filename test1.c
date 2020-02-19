#include <stdio.h>
#include <stdlib.h>


// 采用递打印每一位
// 反着打印
void PrintNum(int n){

	if (n > 0){

		printf("%d ", n % 10);
		PrintNum(n / 10);

	}

}
// 正着打印
void printNum(int n){

	if (n >= 0){
		printNum(n / 10);
		printf("%d", n % 10);
	}

}
// 打印任意进制下的一个数
void printNUM(int n, int m){
	if (n > 0){
		printNUM(n / m, m);
		printf("%d ", n % m);
	}
}

// 升级版 顾及到16进制下显示出来应是大写字母
void PRINTNUM(int n, int m){
	if (n > 0){
		PRINTNUM(n / m, m);
		putchar("0123456789ABCDEF"[n % m]);// 双引号里为数组 
		//// 最大36进制原因 可以转化为36以下的任意进制
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