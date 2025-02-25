#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n ; i++)
    {
        int A;
        cin >> A;

        if(A>50)
        cout << "RIGHT" << endl;
        else
         cout << "LEFT" << endl;
    }
}