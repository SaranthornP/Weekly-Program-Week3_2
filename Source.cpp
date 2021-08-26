#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int k = 0;
	while (k != a*2-1) {
		printf("*");
		k++;
	}
	k = 0;
	printf("\n");
	for (int i = 1; i <= a - 1; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		if(i!=a-1){
			printf("*");
		}
		for (int j = (a - 1 - i) * 2 - 1; j > 0; j--) {
			printf(" ");
		}
		printf("*\n");
	}
	for (int i = a - 2; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*");
		for (int j = (a - 1 - i) * 2 - 1; j > 0; j--) {
			printf(" ");
		}
		printf("*\n");
	}
	while (k != a * 2 - 1) {
		printf("*");
		k++;
	}
	return 0;
}