#include <iostream>
using namespace std;

int main() {
	int tc,N,X,P,a;
	cin>>tc;
	while(tc>0)
	{
	    cin>>N>>X>>P;
	    a=(X*3)-(N-X);
	    if(a>=P)
           cout<<"Pass"<<endl;
        else
           cout<<"Fail"<<endl;
    tc--;
	}
	return 0;
}
