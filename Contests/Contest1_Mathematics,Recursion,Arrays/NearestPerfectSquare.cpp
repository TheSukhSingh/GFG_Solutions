#include <iostream>
#include <cmath>
using namespace std;

long long int nearest(long long int n){
    long long int more = ceil(sqrt(n+1)) * ceil(sqrt(n+1));
    long long int less = floor(sqrt(n-1)) * floor(sqrt(n-1));
    
    long long int diff1 = n - more, diff2 = less - n;
    
    if(diff1 == diff2)  return less;
    else if(diff1 > diff2)  return more;
    else return less;
    
}

int main() {
	//code
	int nr;
	cin >> nr;
	while(nr--){
	    long long int n;
	    cin >> n;
	    cout << nearest(n) << endl;
	}
	return 0;
}