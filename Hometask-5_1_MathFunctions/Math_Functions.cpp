#include "math_functions.h"

int sum(int x, int y) {
	return (x + y);
}

int subtract(int x, int y) {
	return (x - y);
}

long int multipl(int x, int y) {
	return (x * y);
}

long double division(int x, int y) {
	return (static_cast<long double>(x) / static_cast<long double>(y));
}

long double power(int x, int y) {
	int n = 1;
	if (y >= 0) {
		for (int i = 1; i <= y; i++) {
		n *= x;
		}
		return (n);
	}
	else {
		y *= -1;
		for (int i = 1; i <= y; i++) {
			n *= x;
		}
		return static_cast<long double>(1/static_cast<long double>(n));
	}
}