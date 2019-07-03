/*
	Copyright (c) Mark 100. All rights reserved.
	URL: 
	Author: General Ming
*/

/*
	Time: real	0m0.156s
		  user	0m0.152s
		  sys	0m0.004s
/*

/*
The 'isprime' function check if the passed arugument to is a prime number or not.
It checks if the number is a multiple of two or is 1 or 0. If it meets any of these
criteria it immediately disqualifies the number. Then we check for all odd numbers, 
if they perfectly divide the given number until the square root of the number as 
we know the rule. Then we iterate in the 'main' function from the square root of
the given number as it is much faster than checking from zero and then we check
if it divides the given number perfectly.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(int n);

int isprime(int n)
{
	int root = (int)sqrt(n) + 1;
	if(n == 1 || n == 0)
		return 0;
	if(n == 2)
		return 1;
	if(n%2 == 0)
		return 0;
	for(int i = 3; i < root; i += 2)
		if(n%i == 0)
			return 0;
	return 1;
}

int main()
{
	long int n = 600851475143;
	int root = (int)sqrt(n) + 1;
	int i;
	for(i = root; i >= 2; i -= 1)
		if(isprime(i))
			if(n%i == 0)
				break;
	printf("%d\n", i);
	return 0;
}