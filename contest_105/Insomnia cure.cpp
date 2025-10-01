#include<iostream>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<int, int> mp;

    int k, l, m, n, nk{0}, nl{0}, nm{0}, nn{0}, d;
    cin >> k >> l >> m >> n >> d;
    nk = k; nl=l; nm=m; nn=n;

    while(nk<=d || nl<=d || nm<=d || nn<=d)
    {
        if(mp.find(nk) == mp.end() && nk <= d)
            mp[nk] = 1;

        if(mp.find(nl) == mp.end() && nl <= d)
            mp[nl] = 1;

        if(mp.find(nm) == mp.end() && nm <= d)
            mp[nm] = 1;

        if(mp.find(nn) == mp.end() && nn <= d)
            mp[nn] = 1;

        nk +=k; nl+=l; nm+=m; nn+=n;
    }

    cout << mp.size();
}
