#include <iostream>
using namespace std;

int main()
{
int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
a^=b;
a^=c;
a^=d;
a^=e;
cout<<a<<endl;
return 0;
}