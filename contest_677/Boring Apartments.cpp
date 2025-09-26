#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    string num;
    while(t--)
    {
        cin >> num;
        int p1= (num[0] - '0' - 1)*10;
        int len = num.length();
        int p2 =len*(len+1) /2;
        cout << p1+p2 << "\n";
    }
}
