#include <iostream>
#include <cstdlib>

using namespace std;

int compose(int n,int k)
{
	if (n == k || k == 0)
		return 1;
	return compose(n - 1,k) + compose(n - 1, k - 1);
}

int main(int argc,char** args)
{
	int n;
	int k;
	cout << "Input n and k : " << endl;
	cin >> n;
	cin >> k;
	cout << "Output: " << endl;
	cout << " /=" << " " << n << endl;
	cout << "||" << "    = " << compose(n,k) << endl;
	cout << " \\=" << " " << k << endl;
	return 0;
	
}