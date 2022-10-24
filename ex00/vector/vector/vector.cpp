#include "vector.h"

int main(int argc, char* argv[]) {
	Arr2D<char> arr = Arr2D<char>(10, 10);
	arr.init('*');
	arr.show();

	arr.at(0, 0) = '-';
	arr.at(0, 1) = '-';
	arr.at(1, 0) = '-';
	arr.at(1, 1) = '-';
	arr.show();

	arr.fill(2,2,5,5,'-');
	arr.show();
	arr.fill(0, 0, 10, 10, 'b');
	arr.show();
	return 0;
}
