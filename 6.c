#include <stdio.h>

int main()
{
	char n;
	int i,j;
	printf("���� �Է��ϼ���: ");
	n = getchar();
	i = n - 48;
	for (j = 1; j <= i; j++) {
	
		printf("%d ", i);
	
	}
	getchar();
	getchar();
    return 0;
}