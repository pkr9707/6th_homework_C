#include <stdio.h>

int main()
{
	char n;
	int i,j;
	printf("값을 입력하세요: ");
	n = getchar();
	i = n - 48;
	for (j = 1; j <= i; j++) {
	
		printf("%d ", i);
	
	}
	getchar();
	getchar();
    return 0;
}
