#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;

int main() {
	int i=0, marks[100],man;
	cin >> man;
	while (i < man)			//i<man即可;从0到14,而man是15,因此14应当被记录
							//而14记录完之后,i++,i变为15,然后再次while判断(二者相等),判断为false,跳出循环
	{
		cin >> marks[i];
		i++;
	}
	i = 0;
	sort(marks,marks+man);      //sort的作用范围为左闭右开区间




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











