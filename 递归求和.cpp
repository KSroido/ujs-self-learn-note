#include <iostream>
#include<iomanip>
using namespace std;
int main()
{	
	double n, m;
	double counter;
	counter = 0;
	cin >> n >> m;
		if (n < m && m < 1000000)
		{
			while (n != m+1)
			{
				counter = counter + (1 / (n * n));
				n = n+1;
			}
			cout <<fixed << setprecision(5) <<counter;
		}
		else
			cout << "Error";
	return 0;


}




