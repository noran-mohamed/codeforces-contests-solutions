#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int mx = a*b*c;
    if(a*b+c > mx) mx = a*b+c;
    if (a+b*c > mx) mx = a+b*c;
    if( (a+b)*c > mx ) mx = (a+b)*c;
    if( a*(b+c) > mx ) mx = a*(b+c);
    if(a+b+c > mx) mx = a+b+c;
    cout << mx;

}
