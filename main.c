#include <stdio.h>
#include <stdint.h>
#include <string.h>

uint32_t fib(uint16_t n);

struct an{
	uint16_t n;
	uint32_t a;
} __attribute__ ((packed));
struct fib{
	int8_t m[4];
} __attribute__ ((packed));

int main(void){
	struct fib d;
	d.m[0] = 'f';
	d.m[1] = 'i';
	d.m[2] = 'b';
	d.m[3] = '\0';
	struct an n[40];
	for(int i = 0; i < 40; i++) {
		n[i].n = i + 1;
		n[i].a = fib(i + 1);
	}
	FILE* fp = fopen("fib.bin", "wb");
	fwrite(&d, sizeof(struct fib), 1, fp);
	fwrite(&n, sizeof(struct an), 40, fp);
	fclose(fp);
	return 0;
}
