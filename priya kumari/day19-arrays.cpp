#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
        cin >> t;
        int sum1 = 0, sum2 = 0, lead = 0, diff = 0;
        int win;
        for(int i = 0; i < t; i++)
        {
            int a,b;
            cin >> a >> b;
            sum1 += a;
            sum2 += b;
            if(sum1 > sum2) {
                diff = sum1 - sum2;
                if(diff> lead) {
                    lead = diff;
                    win = 1;}
            }
            else {
                diff = sum2 - sum1;
                if(diff > lead){
                    lead = diff;
                    win = 2;}
            }
        }
        cout << win << " "<< lead << endl;
	return 0;
}
