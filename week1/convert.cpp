/*
 * This program calculates the sum of values 1..40
 */

#include <iostream>
#include <vector>

using namespace std;

const int N = 40;

// Pass vector by reference
inline void sum(int*p, int n, vector<int>& d)
{
	int i;
	*p = 0;
	for(i = 0; i < n; ++i)
		*p = *p + d[i];
}

// Main program
int main()
{
	int i;
	int accum = 0;

	vector<int> data(N);

	for(i = 0; i < N; ++i)
		data[i] = i;
	
	sum(&accum, N, data);
	printf("sum is %d\n", accum);
	return 0;
}
