#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string dubstep, org;
    bool inward = false;
    cin >> dubstep;
    for (int i = 0; i < dubstep.length(); i++)
    {
        if (dubstep[i] == 'W' && dubstep[i+1] == 'U' && dubstep[i+2] == 'B')
        {
            i +=2;
            if(inward)
            {
                org.push_back(' ');
                inward=false;
            }
        }
        else
        {
            org.push_back(dubstep[i]);
            inward=true;
        }
    }

    cout << org;


}
