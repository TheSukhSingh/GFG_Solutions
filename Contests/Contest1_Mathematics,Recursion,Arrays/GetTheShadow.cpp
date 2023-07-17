#include <iostream>
#include <vector>
using namespace std;

void rnumber(vector<int> A) {
    long long int actA = 0;
    long long int actSumSq = 0;
    long long int expB;
    long long int expSumSq;
    long long int i = 0;
    
    for(i = 0; i < A.size(); i++){
        actA = actA + (long long int)A[i];
        actSumSq = actSumSq + (long long int)A[i]*A[i];
    }
    
    expB = (long long int)(A.size())*(A.size()+1)/2;
    expSumSq = (long long int)(A.size())*(A.size()+1)*(2*A.size()+1)/6;
    
    long long int diffSumSq = expSumSq - actSumSq;
    long long int diffA = expB - actA;
    
    long long int toggle = diffSumSq/diffA;
    
    long long int miss = (toggle + diffA)/2;
    long long int repp = miss - diffA;
    
    cout<<(int)repp<<" "<<(int)miss<<endl;

    return ;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    vector<int> a;
	    
	    for(int i=0; i<N; i++){
	        int temp;
	        cin>>temp;
	        a.push_back(temp);
	    }
	    rnumber(a);
	}
	return 0;
}