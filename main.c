#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i;
	
	for (i=0;i<5;i++) {
		int temp=1;
		printf("temp=%d\n", temp);
		temp++;
	}	
	return 0;
}
/*
for (i=0;i<5;i++) {
		
		static int temp=1; 
		printf("temp=%d\n", temp);
		temp++;
	}	*/ // temp=1,2,3,4,5 출력하고싶을 때의 코드  
