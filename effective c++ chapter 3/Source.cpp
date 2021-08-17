#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;

int main()
{
	cout << "Please, enter your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Enter your exam grade for mid and final semester: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "Enter all your homeworks grades. in final enter space: ";
	int count = 0;
	double sum = 0;

	double x;

	while (cin >> x)
	{
		++count;
		sum += x;
	}

	streamsize prec = cout.precision();
	cout << "Your final grade: " << setprecision(3) << 0.2 * midterm + 0.4 * sum / count << setprecision(prec) << endl;

	return 0;
}
