#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int x = 2, y = 3, z = -4;

	x = y + 2;
	z = x - 3;
	// x = 5 , y = 3 , z = 2 ;
	printf("x ---> %d\ty ---> %d\tz ---> %d\n", x, y, z);

	z -= x - 5;
	y += z - 7;
	// x = 5 , y = -2 , z = 2 ;
	printf("x ---> %d\ty ---> %d\tz ---> %d\n", x, y, z);

	// x = 6 , y = -2 , z = 2
	printf("x ---> %d\ty ---> %d\tz ---> %d\n", ++x, y--, z++);

	// x = 6 , y = -3 , z = 3
	printf("x ---> %d\ty ---> %d\tz ---> %d\n", x++, --y, ++z);

	int a, b, c;
	printf("\n\n\nEnter extra integer number => ");
	scanf("%d%d%d", &a, &b, &c);

	printf("\nCalculate the a x b + c x 2 + 1 : %d\n"
		"After add one to 'a' number.\n\n", a++ * b + c * 2 + 1);
	printf("Before add one to 'a' number.\n"
		"Calculate the a x (b+c) x 2 + 1 : %d\n\n", ++a * (b + c) * 2 + 1);
	printf("Calculate the a x b - c x 2 - z : %d\n"
		"After minus one to 'a' number.\n\n", a-- * b - c * 2 - 1);
	printf("Before minus one to 'a' number.\n"
		"Calculate the (a x b) - c x (2 - 1) : %d\n", (--a * b) - c * (2 - 1));
}