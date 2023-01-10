#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	while(n--)
	{
	    long a;
	    cin>>a;
	    cout<<a+ (a*(a+1))/2<<endl;
	}
	return 0;
}
