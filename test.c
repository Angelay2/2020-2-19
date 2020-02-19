#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

// 循环分for(牵涉遍历) / while循环

/* 六大遍历
1. 数字遍历
for (i = a; i < b; i++)
i 完成了对数字 [a,b) 之间的遍历

2.数组遍历
for(i = 0; i < n; i++)
a[i] 完成了对数组 a 的遍历

3. 数位遍历(回归树 进制转化)
for(i = n; i; i /= m)
i % m 完成了 m 进制下对 n 每一位的遍历

4. 字符串遍历
for(i = 0; str[i]; i++)
str[i] 完成了对字符串 str 的遍历

5. 链表遍历
for(cur = head; cur; cur = cur -> next)
cur 完成了对链表 head 的遍历

6. 容器遍历
for(iter = v.begin(); iter != v.end; iter++)
迭代器 iter 完成了对容器 v 的遍历*/ 

// 输出一个整数的每一位
int main1(){
	int n = 12345;

	int i;
	for (i = n; i; i /= 10){
		printf("%d ", i % 10);
	}

	system("pause");
	return 0;
}
// 二进制下的每一位
int main2(){

	int n =  1048576;

	int i;
	for (i = n; i; i /= 2){
		printf("%d\n", i % 2);
	// 000000000000000000001 原数是20 个0 前面一个1 => 2^20
	}

	system("pause");
	return 0;
}
// 打印16 进制下的每一位
int main3(){

	int n = 1048575;

	int i;
	for (i = n; i; i /= 16){
		printf("%X ", i % 16);// 五个15 全F
	}

	system("pause");
	return 0;
}
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