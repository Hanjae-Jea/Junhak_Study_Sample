#include <stdio.h>
#include <conio.h>

int main(void)
{
	int sum = 0;
	for( int i = 9 ; i >= 1 ; i -- ){
		sum = sum + i;
	}
	printf("Hello World!\n");
	getch();
	return 0;
}