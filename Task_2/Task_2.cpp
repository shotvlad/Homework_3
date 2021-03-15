#include <iostream>

using namespace std;

//2. ЕДИНИЦЫ. Найдите все натуральные числа до m, двоичная запись которых состоит из единиц

void binaryOne(int upTo);

int main()
{
	int m = 0;

	cout << "Enter up to what natural number m to output numbers whose binary notation consists of ones: ";
	cin >> m;
	cout << endl;

	if (m <= 0)
	{
		cout << "Error! m <= 0." << endl;

		return -1;
	}
	else {}

	binaryOne(m);

	return 0;
}

void binaryOne(int upTo)
{
	int numbers = 3, degree = 2;

	cout << "Natural numbers up to " << upTo << ", whose binary notation consists of ones: 1";

	while (numbers <= upTo)
	{
		cout << ", " << numbers;

		numbers += pow(2, degree);

		degree++;
	}

	cout << ";" << endl;
}
