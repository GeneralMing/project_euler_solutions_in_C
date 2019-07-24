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
	This one is self explanatory and just requires the knowledge of 
	sum of an A.P and the concept of binomial coefficients. The sum
	of squares is basically the sum of cubes from 1 to n, implemnted
	by using the formula (n+1)^3 = n^3 + 3*n^2 + 3*n + 1. Replace n+1
	with the numbers from 1 - 100 and voila, the 3*n^2 term starts to 
	give you the sum of all squares. This is basic high school math ;P
	Find the difference between the two sums and you'll have the answer.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 100;
	int sum1 = (n * (n + 1) * (2 * n + 1))/ 6;
	int sum2  = (n * (n + 1))/2;
	printf("%d\n", sum2*sum2 - sum1);
	return 0;
}