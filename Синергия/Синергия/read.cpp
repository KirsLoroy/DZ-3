#include "inout.h"
using namespace std;

void read(std::vector<int>& vec) {
	int size, kol;
	cout << "size = ";
    cin >> size;

	for (int i = 0; i < size; i++) {
		cout << "vec[" << i << "] = ";
		cin >> kol;
	}
}
