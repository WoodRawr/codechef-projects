#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	float bal;
	float withdraw;

	cin >> withdraw;
	cin >> bal;

	if ((withdraw < 0 || withdraw > 2000) || static_cast<int>(withdraw) % 5 != 0 || bal < withdraw + 0.5f) {
		//Do nothing since input was invalid
	}
	else {
		bal -= withdraw + 0.5f;
	}

	cout << fixed << setprecision(2) << bal;
}