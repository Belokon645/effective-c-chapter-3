#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>;


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
	std::vector<double> homework;

	while (cin >> x)
	{
		homework.push_back(x);
		++count;
		sum += x;
	}

	typedef std::vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	if (size == 0)
	{
		cout << "please try to enter again";
		return 1;
	}

	std::sort(homework.begin(), homework.end());
	streamsize prec = cout.precision();
	cout << "Your final grade: " << setprecision(3) << 0.2 * midterm + 0.4 * sum / count << setprecision(prec) << endl;

	return 0;
}
