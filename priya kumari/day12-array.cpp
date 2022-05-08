#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b,c;
	    cin>>a>>b;
	    int matches=0,num;
	    c=a+b;
	    while(c)
	    {
	        int num=c%10;
	        if(num==1)
	          matches=matches+2;
	        if(num==2||num==3||num==5)
	          matches=matches+5;
	        if(num==4)
	           matches=matches+4;
	        if(num==0||num==6||num==9)
	           matches=matches+6;
	        if(num==7)
	          matches=matches+3;
	       if(num==8)
	          matches=matches+7;
	          c=c/10;
	    }
	       cout<<matches<<endl; 
	  }
	    
	return 0;
}
