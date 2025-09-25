#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, h, a, neg{0}, c{0};
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> h;
        for(int j = 0; j < h; j++)
        {
            cin >> a;
            if (a == 0) c++;
            else if (a == -1) neg++;
        }
        if (neg % 2 != 0) c += 2;
        cout << c << "\n";
        c = 0;
        neg = 0;
    }
}
