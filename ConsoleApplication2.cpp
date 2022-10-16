#include<iostream>
using namespace std;
int main() {
	int a;

	cin >> a;
	bool winter = a == 12 || a == 1 || a == 2;
	bool spring = a == 3 || a == 4 || a == 5;
	bool summer = a == 6 || a == 7 || a == 8;
	bool autumn = a == 9 || a == 10 || a == 11;
	if (winter)
		cout << "Winter";
	else if (spring)
		cout << "Spring";
	else if (summer)
		cout << "Summer";
	else if (autumn)
		cout << "Autumn";
	else
		cout << "Error";
}