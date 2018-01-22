#include <stdio.h>

int main()
{
    int i, j, k;
    printf("Please enter the value for i:\n");
	scanf("%i",&i);
	printf("Please enter the value for j:\n");
	scanf("%i",&j);
    printf("Please enter the value for k:\n");
	scanf("%i",&k);
    printf("i   = %i\n", i);
    printf("j   = %i\n", j);
    printf("k   = %i\n", k);
    printf("i+j*k = %i\n",((i+j)*k));
    printf("Hello World");
    return 0;
}
