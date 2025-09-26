#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, nmax, nmin, a, c{0};
    cin >> n;
    cin >> nmax;
    nmin = nmax;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        if (a > nmax){c++; nmax = a;}
        else if(a < nmin) {c++; nmin = a;}
    }
    cout << c;
}
