#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int A,B;
	    cin>>A>>B;
	    if(A>0 and B>0)
	     cout<<"Solution"<<endl;
	     else if(B==0)
	      cout<<"Solid"<<endl;
	      else
	      cout<<"Liquid"<<endl;
	}
	return 0;
}
