#include <iostream>
using namespace std;

int main() {
    int T;  
    cin >> T; 

    for(int i=1; i<=T; i++)
    {  
        int N, temp = 0;  
        cin >> N; 

        while (N > 0) 
        {  
            temp = temp * 10 + (N % 10); 
            N = N/10;
        }

        cout << temp << endl;
    }

    return 0;
}
