#include <stdio.h>

int main (int argc, char* argv[])
{
	int x = 1;
	while (x != 0)
	{
		printf("Введите чилсо, если оно делится на 2 без остатка, то будет оповещение об этом\n");
		scanf("%d", &x);
		if (x%2== 0)
			printf("Нет остатка у %d.\n", x);
	}
 	return 0;
}
