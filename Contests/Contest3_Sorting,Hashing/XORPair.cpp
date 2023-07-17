#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	//
	int a;
	cin>>a;
	
	while(a--){
	    
	    int n,c;
	    cin>>n>>c;
	    
	    int arr[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    unordered_set<int> umap;
	    
	    bool boo = false;
	    
	    for(int i=0; i<n; i++){
	        
	        if(umap.find(c^arr[i]) != umap.end()){
	           boo = true;
	           break;
	        }
	        
	        umap.insert(arr[i]);
	    }
	    
	    if(boo){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}