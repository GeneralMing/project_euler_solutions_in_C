/*
	Copyright (c) Mark 100. All rights reserved.
	URL: 
	Author: General Ming
*/


/*
	Time: real	0m0.002s
		  user	0m0.002s
		  sys	0m0.000s
*/

/*
	Technically the fibonacci starts with 0 and 1 as the base values
	and continues as the next term being the sum of the current term 
	and the previous term when iterating through the sequence. With this
	in mind we try to write the sequence as 0,1,1,2,3,5,8,13,21,34.....
	Notice that every 3rd term is an even number starting from the initial
	1. So we can write the series as x,x,y,x,x,y,x,x,y.... where x is an odd
	number and y is an even number. So splitting this sequence into x's and y's
	we get ever set of three to be of the form (x,x,y). 
	(1,1,2) --> (3,5,8) --> (13,21,34)
	and in a more generic sense as (A,B,C).
	If the nth set is of this form then the (n+1)th set is of the form
	(B+C, B+2*C, 2*B + 3*C)
	We use this form in the loop of the code to avoid the remainder operator
	and the 'if' statement as it consumes more time to decide and execute.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int start1 = 1;
	int start2 = 2;
	int sum = 0, temp;
	for(int i = 0; start2 < 4000000; i++)
	{
		sum += start2;
		temp = start1 + (start2 << 1);
		start2 = start1 + start2 + temp;
		start1 = temp;
	}
	printf("%d\n", sum);
	return 0;
}