#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if(a == b+c) cout << "YES\n";
        else if (b == a + c) cout << "YES\n";
        else if(c == a +b) cout << "YES\n";
        else cout << "NO\n";
    }
}
