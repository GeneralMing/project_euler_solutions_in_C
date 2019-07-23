/*
	Copyright (c) Mark 100. All rights reserved.
	URL: 
	Author: General Ming
*/


/*
	Time: real	0m0.077s
		  user	0m0.077s
		  sys	0m0.000s
*/

/*
	This problem can be tackled in a simple mathematical way by just prime
	factorizing each of the numbers from 2 to 20 and picking out the highest
	power of each prime factor and multiplying them but since I wanted to code
	a solution, I made a simple solution. Just check all the numbers from 11-19
	for divisibility and inncrement the next argument by 20. 20 was chosen to 
	ensure least number of iterations. The solution is quite straightforward in 
	this case and no trick exists. :)
*/

#include<stdio.h>
#include<stdlib.h>

int isdivisible(int i)
{
	return !(i%19) && !(i%18) && !(i%17) && !(i%16) && !(i%15) && !(i%14) && !(i%13) && !(i%12) && !(i%11);
}

int main()
{
	int i = 20;
	while(1)
	{
		if(isdivisible(i))
			break;
		i += 20;
	}
	printf("%d\n", i);
	return 0;
}