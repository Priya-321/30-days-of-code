#include <iostream>
using namespace std;

int main() {
char P1,P2;
	cin>>P1>>P2;
	if(P1=='R' || P2=='R')
	{
	    cout<<"R"<<endl;
	}
	else if(P1=='B' || P2=='B')
	{
	    cout<<"B"<<endl;
	}
	else
	{
	    cout<<"G"<<endl;
	}
	return 0;
}
