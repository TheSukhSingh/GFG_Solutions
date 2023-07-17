#include <iostream>
#include <algorithm>
using namespace std;

int Count(int n){
	
	if(n == 1){
		return 0;
	}
	
	else if(n%2 == 0){
		return 1 + Count(n/2);
	}else{
		return 1 + min(Count(n-1),Count(n+1));
	}
	
	
}

int main(){
	
	int T;
	cin>>T;
	
	while(T--){
		int N;
		cin>>N;
		cout<<Count(N)<<endl;
	}
}