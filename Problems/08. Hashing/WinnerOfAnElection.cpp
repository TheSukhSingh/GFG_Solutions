class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        //concept used :- hashing(unordered_map) + 
        //                      strings (lexicographically smaller)
        
        unordered_map<string , int > m ;
        
        for(int i = 0 ; i < n  ; i++)
        {
            m[arr[i]]++ ;
        }
        
        vector<string> res ; //winner_candidate, votes 
        int maxVotes = 0 ;
        string currWinner ; 
        for(auto it : m)
        {
            string candidate = it.first ;
            int votes = it.second ;
            
            if(votes > maxVotes )
            {
                maxVotes = votes  ;
                currWinner = candidate ;
            }
            else if(votes == maxVotes && currWinner > candidate)
            {
                //currWinner > candidate -----> 'candidate' is lexicographically 
                //   smaller than 'currWinner' 
                currWinner = candidate ;
            }
        }
        
        res.push_back(currWinner );
        res.push_back(to_string(maxVotes));
        
        return res ;
    }
};