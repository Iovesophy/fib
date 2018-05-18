#include <stdint.h>

uint32_t fib(uint16_t n) {
	if(n <= 1) 
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
