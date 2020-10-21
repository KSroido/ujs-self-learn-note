#include<iostream>
using namespace std;
int main()
{

	char b;
	int a, c,temp , zhengshu;
	cout << "Input numerator/denominator:";
	cin >> a >> b >> c;
	temp = a % c;
	zhengshu = (a - temp)/c;
	cout <<"=" <<zhengshu << "U" << temp << "/" << c;
	return 0;





}