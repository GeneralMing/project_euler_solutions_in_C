/*
	Copyright (c) Mark 100. All rights reserved.
	URL: 
	Author: General Ming
*/

/*
	Time: real	0m0.16s
		  user	0m0.16s
		  sys	0m0.000s
/*
/*
	The 'ispalindrome' function checks if the passed argument is a palindrome number or not.
	There were two set of solutions to this problem. The first is to check all 5 digit numbers
	and 6 digit numbers to see if the number was a palindrome or not and then find the max of 
	all such palindromic numbers. But this way we would have to run a loop till 997799 starting
	from 10001. Thats about 897798 iterations of the for loop. But by checking the multiples,
	we have to iterate only 405450 which is like half the amount of iterations. So we chose this
	method to solve. The palindrome function is simple enough that we split the digits and add
	them up based on their place value reverse order to get the reverse number. This way we avoid
	string based comparison and save time on running.
*/

#include<stdio.h>
#include<stdlib.h>

int ispalindrome(int n);

int ispalindrome(int n)
{
	int num = n, digits = 0;
	while(n != 0)
	{
		digits = digits * 10;
		digits = digits + n%10;
		n = n/10;
	}
	if(digits == num)
		return 1;
	else
		return 0;
}

int main()
{
	int n1, n2, max = 0;
	for(int i = 100; i <1000; i++)
		for(int j = i; j < 1000; j++)
		{
			if(ispalindrome(i*j))
			{
				if(max < i*j)
					max = i*j;
			}
		}
	printf("%d\n", max);
}