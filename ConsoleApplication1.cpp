#include <stdio.h>
void main()
{
	/*
	int a = 15;
	int b = 3;
	b /= a;							// b = b / a == 0,2
	printf(" % d % d \n", a, b);    // 15 - 0
	a = b++;						// a = 0 // b++    vai incrementar 1 no b... porém vai manter o "A" do jeito q está
	printf(" % d % d \n", a, b);	// 0 - 1


	// ******************************************************

	int i = 15;
	int j = 3;
	j %= i;							// j = j mod i == 3 mod 15  == 3
	printf(" % d % d \n", i, j);	// 15 - 3
	i = j++;						// i=j(3) --- j=3+1
	printf(" % d % d \n", i, j);	// 3 - 4

	// ******************************************************

	int num1 = 15;
	int num2 = 3;
	int num3;
	num2 += num1;						// 3 + 15 = 18
	num3 = num2;						// 18
	num2 = 2;							// 2
	printf("%d %d \n", num1, num2);		//15 - 2
	num1 = num2++;						// 2 - 3
	printf("%d %d \n", num1, num2);		// 2 - 3


	// ******************************************************
	
	int a = 15;
	int b = 3;
	int c, d;
	b += a;									// 3 + 15 =		b = 18 
	c = b;									// c = 18		c = 18
	b = 2;									// b = 2		b = 2
	d = c / b;								// d = 18/2 =	d= 9
	printf("%d %d %d %d \n", a, b, c, d);	// 15 2 18 9

	// *********************************************************

	int a = 15;
	int b = 3;
	int c, d;
	c = a / b;								// c = 15 / 3 =  c=5
	d = a % b;								// d = 15 mod 3 d= 0
	printf("%d %d %d %d \n", a, b, c, d);	// 15, 3, 5, 0

	
	
	// *********************************************************
	
	int a = 8;
	int b;
	b = ++a;							// b=9
	printf(" % d % d\n", a, b);			// 9 - 9
	b = a++;							
	printf(" % d % d\n", a, b);			// 10 - 9

	*/

	int a = 15;
	int b = 2;
	b *= a;
	printf(" % d % d\n", a, b);
	b = a--;
	printf(" % d % d\n", a, b);

}


