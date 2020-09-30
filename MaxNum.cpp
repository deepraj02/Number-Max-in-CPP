#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c, max;

	cout<<"Enter the First Number"<<endl;
	cin>>a;

	cout<<"Enter the Second Number"<<endl;
	cin>>b;

	cout<<"Enter the Third Number"<<endl;
	cin>>c;

	max=(a>b && a>c)?a:((b>c)?b:c);

	cout<<"The Biggest Number Entered is:-- "<<max<<endl;

	return 0;
}


