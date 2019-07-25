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
	This problem is the same as problem number 3. There was another 
	approach to this one but its more time consuming to code and hard to
	compute. But the end result is the big code and smaller execution time.
	Its to use the sieve of eratosthenes to mark all prime numbers till a
	number and check for divisibilty by those numbers only. For more info 
	on this method, visit https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
	You could call this as a preparation for primes of some sort.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(long long int n)
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

void findprime(long long int n)
{
	long long int i;
	long long int count;
	for(i = 1, count = 1; count < n; i += 2)
	{
		if(isprime(i))
			count++;
	}
	printf("%lld\n", i - 2);
}
int main()
{
	long long int n = 10001;
	findprime(n);
	return 0;
}