#include<iostream>
using namespace std;
int main()
{
	double n,nums;   
	double temp, total;
	cout << "Input num of student:" << endl;
	total = 0;
	cin >> n;
	nums = n;
	while (n > 0)
	{
		cin >> temp;
		total = total + temp;
		n--;
	}
	cout << "totalScore:" << total<<endl;
	cout << "Average:" << total / nums;

	return 0;



}