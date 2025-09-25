#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, h, a, c{0};
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(a > h) c+=2;
        else c+=1;
    }
    cout << c;
}
