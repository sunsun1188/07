#include <stdio.h>
#include <stdlib.h>
	
void f(void);

int i;
int main(void) {
	for (i=0;i<5; i++) {
		f();
	}
	return 0;
} 

void f(void) {
	for (i=0;i<10;i++)
		printf("#");
} 
// i를 전역변수가 아닌 지역변수로 설정하면 "*" 50개 찍힘 
