#include "main.h"

int _sqrt_helper(int number, int temp, int sqrt) {
	if (sqrt == temp) {
		return sqrt;
	} else {
		temp = sqrt;
		sqrt = (number / temp + temp) / 2;
		return _sqrt_helper(number, temp, sqrt);
	}
	return (0);
}


int _sqrt_recursion(int n) {
	int i = n / 2;

	if (n < 0) {
		return -1;
	}
	if (n == 0 || n == 1) {
		return n;
	}

	return _sqrt_helper(n, 0, i);
	return (i);
	return (0);
}
