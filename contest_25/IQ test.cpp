#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, ev{0}, ev_idx, odd{0}, odd_idx, n;
    cin >> t;
    for (int i =1; i <=t; i++)
    {
        cin >> n;
        if (n %2 == 0) {ev+=1; ev_idx = i;}
        else{odd+=1; odd_idx=i;}
    }
    if (ev == 1) cout << ev_idx;
    else cout << odd_idx;

}
