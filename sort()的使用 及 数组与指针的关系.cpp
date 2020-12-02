#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;

int main() {
	int i=0, marks[100],man;
	cin >> man;
	while (i < man)
	{
		cin >> marks[i];
		i++;
	}
	i = 0;
	sort(marks,marks+man);




	int bottom = 2;
	int top = man - 2;
	double sum = 0;
	double tman = man - 4;
	
	while (bottom<top)
	{
		sum += marks[bottom];
		bottom++;


	}
	cout << fixed << setprecision(2) << sum /tman;
	return 0;

}











