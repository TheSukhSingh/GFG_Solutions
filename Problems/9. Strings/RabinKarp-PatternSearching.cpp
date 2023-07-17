#define d 256 

//Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q) 
{ 
	// Your code here
	int ind = txt.find(pat);
	if(ind ==-1)
	    return false;
	  
	 return true;
} 