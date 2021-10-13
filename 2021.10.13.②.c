#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int i = 0;
	for (i = 0; i < 3; i++) {
		char password[1024] = { 0 };
		printf("请输入密码:");
		scanf("%s", password);
		//scanf输入整形或者浮点型,需要&
		//如果输入字符串,不需要输入&
		if (strcmp(password, "8521") == 0) {
			//字符串password没办法直接写password==8521
			//需要借助函数strcmp来判断,==0则为真,非零则为假.
			printf("密码正确.\n");
		}
		else {
			printf("密码错误.\n");
		}
	}if (i >= 3) {
		printf("输入密码错误三次,系统退出.\n");
	}
}