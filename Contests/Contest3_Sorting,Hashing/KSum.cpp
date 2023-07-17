#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int a;
	cin>>a;
	
	while(a--){
	  
	  int b,c;
	  cin>>b>>c;
	  int arr[b];
	  
	  for(int i=0; i<b; i++){
	      cin>>arr[i];
	  }
	  
	  sort(arr,arr + b);
	  
	  long long sum = 0;
	  for(int i=0; i<c ;i++){
	      sum += arr[i];
	  }
	  
	  cout<<sum<<endl;
	}
	return 0;
}