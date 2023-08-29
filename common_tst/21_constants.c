// This C code was automatically generated by Aixt Project
// Device = x64
// Board = PC
// Backend = pc

#include <stdbool.h>


const double pi = 3.141592;
const double e = 2.718281;
const long repetitions = 10;

int main() {
	long x = 0;
	for(int i=0; i<repetitions; i++) {
		x += (e * e) + (pi / 2);
	}
	return 0;
}