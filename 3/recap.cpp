#include <iostream>
#include <cstdlib> // atoi
using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 3) {
		return 0;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (b <= a) {
		return 0;
	}

	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}

	cout << sum << endl;

	return 0;
}
