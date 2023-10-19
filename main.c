#include <stdio.h>
#include <stdlib.h>

int inc(int counter);
int main(int argc, char *argv[]) {
	
	int i=10;
	printf("함수 호출 전 i=%d\n",i);
	inc(i);
	// i=inc(i); 이렇게 하면 결과값 달라짐 
	printf("함수 호출 후 i=%d\n",i);
	return 0;
}

int inc(int counter) {
	
	counter++;
	return counter;
}
