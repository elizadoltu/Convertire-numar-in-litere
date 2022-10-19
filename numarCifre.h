#include <iostream>
using namespace std;

int cateCifre(int number) {

	int count = 0;
	while (number) {

		++count;
		number /= 10;

	}
	return count;
}
