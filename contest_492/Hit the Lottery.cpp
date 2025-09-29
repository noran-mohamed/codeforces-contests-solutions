#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, c{0};
    cin >> n;
    c += n/100; n %= 100;
    c += n/20; n%= 20;
    c += n/10; n %=10;
    c += n/5; n%=5;
    c+= n%5;
    cout << c;
}
