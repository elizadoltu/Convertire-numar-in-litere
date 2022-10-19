#include <iostream>
using namespace std;

int construireOglindit(int x) {

	int ogl = 0;
	while (x) {

		ogl = ogl * 10 + x % 10;
		x /= 10;
	
	}
	return ogl;
}
