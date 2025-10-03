#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string wrd;
    int sum{0}, t;
    cin >> t;
    while(t--)
    {
        cin >> wrd;
        if (wrd == "Tetrahedron") sum += 4;
        else if (wrd == "Cube") sum += 6;
        else if (wrd == "Octahedron") sum += 8;
        else if (wrd == "Dodecahedron") sum += 12;
        else if (wrd == "Icosahedron") sum += 20;
    }
    cout << sum;


}
