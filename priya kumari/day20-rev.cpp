#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     int n, num, digit, rev = 0;
         cin >> num;
         n = num;
         do
         {
             digit = num % 10;
             rev = (rev * 10) + digit;
             num = num / 10;
         } while (num != 0);
    
         if (n == rev) cout<<"wins\n";
         else cout<<"loses\n";
	}
	return 0;
}
