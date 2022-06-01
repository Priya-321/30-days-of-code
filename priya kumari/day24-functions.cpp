#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int e ,int f)
{
    if(e<f)
    return f;
    else 
    return e;
}
int main() {
    int a, b, c, d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    int max1=max(a,b);
    int max2=max(c,d);
    int Max=max(max1,max2);
    printf("%d",Max);
   return 0;
}
