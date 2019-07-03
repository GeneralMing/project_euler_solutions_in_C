/*
	Copyright (c) Mark 100. All rights reserved.
	URL: 
	Author: General Ming
*/


/*
	Time: real	0m0.002s
		  user	0m0.002s
		  sys	0m0.001s
*/

/*
	Since we need to find the sum of all multiples, it would make sense to list out all the
	multiple of a number in a sequence. Since it is a sequence, we can discuss as to what type
	of sequence it is. This one turns out to be an arithmetic progression. The sum of an A.P is
	n*(2*a + (n-1)*d)/2 where 'n' is the number of terms, 'a' is the first term of the series
	and 'd' is the difference between any two consecutive terms of the sequence.
	Use the formula of sum of arithmetic progressions and add the progressions of 3 and 5 
	and subtract the common progression once from them i.e the progression of 15. This gives us
	the sum of all the multiples of both 5 and 3.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int d = 3;
	int a = 3;
	int sum = ((333)*(2*a + 332*d)) << 1;
	d = 5;
	a = 5;
	sum = sum + ((199)*(2*a + 198*d)) << 1;
	a = 15;
	d =  15;
	sum = sum - ((66)*(2*a + 65*d)) << 2;
	printf("%d\n", sum);
}