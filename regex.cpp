#include<iostream>
#include<regex>
#include <string>
using namespace std;
int main()
{
	smatch result;
	string str ;
	regex pattern("(\\d+)/(\\d+)");
	string numerator, denominator;
	int pred_numerator, zhengshu;
	int n, d;

    cout << "Input  numerator/denominator: ";
	cin >> str;
	regex_match(str, result, pattern);    //利用正则
	numerator = result[1];
	denominator = result[2];
	n = stoi(numerator, 0, 10);
	d = stoi(denominator, 0 ,10);
	pred_numerator = n % d;
	zhengshu = (n - pred_numerator) / d;
	cout << zhengshu << "U" << pred_numerator << "/" << denominator;

	return 0;








}



