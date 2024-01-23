// C program to reverse digits
// of a number
#include <stdio.h>

// Driver code
int main()
{
	int n, rev = 0;

	printf("Enter Number to be reversed : ");
	scanf("%d", &n);

	// r will store the remainder while we
	// reverse the digit and store it in rev
	int r = 0;
	 while (n != 0)
	{
		r = n % 10;
		rev = rev * 10 + r;
		n /= 10;
	}

	printf("Number After reversing digits is: %d", rev);

	return 0;
}
