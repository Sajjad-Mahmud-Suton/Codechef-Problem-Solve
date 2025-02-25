#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        int A,B,C;
        cin >> A >> B >> C;
        if(A<=B && C<=B)
        cout << "YES"<< endl;
        else
        cout << "NO" << endl;
    }
}