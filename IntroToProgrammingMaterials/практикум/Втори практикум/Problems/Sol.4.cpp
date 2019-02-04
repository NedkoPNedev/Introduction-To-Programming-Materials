#include <iostream>
using namespace std;

int main()
{
    int *a;
    char *b;
    double *c;
    float *d;
    cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << " " << sizeof(d) << endl;
    /*int num;
	cin>>num;
	if(num%2==0)
	{
		cout<<"Even\n";
	}
	else
	{
		cout<<"Odd\n";
	}
	/*
	cout<< !(a&1)<<endl;*/
	return 0;
}
