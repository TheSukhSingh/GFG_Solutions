#include <iostream>
#include<cmath>
using namespace std;

int stringAverage(string a) {
    int sum = 0;
    int length = a.length();
    for (int i = 0; i < length; i++) {
        sum += a[i];
    }
    return floor(sum / length);
}

int main() 
{
    int t;
    cin>>t;
    for (int i=0; i<t; ++i)
    {
    string s;
    cin >> s;
    cout << stringAverage(s) << endl;
    }
    return 0;
}