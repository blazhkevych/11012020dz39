/*
* Пользователь 	вводит с клавиатуры объем в байтах.Перевести его в килобайты, мегабайты, гигабайты и терабайты.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double bytes;
	cout << "Enter count of bytes: ";
	cin >> bytes;
	cout << endl << bytes << " bytes is:" << endl;
	cout << "Bits = " << fixed << bytes * 8.0 << endl;
	cout << "KBytes = " << fixed << setprecision(15) << bytes / 1024.0 << endl;
	cout << "MBytes = " << fixed << setprecision(15) << bytes / (1024.0 * 1024.0) << endl;
	cout << "GBytes = " << fixed << setprecision(15) << bytes / (1024.0 * 1024.0 * 1024.0) << endl;
	cout << "TBytes = " << fixed << setprecision(15) << bytes / (1024.0 * 1024.0 * 1024.0 * 1024.0) << endl;

	return 0;
}
