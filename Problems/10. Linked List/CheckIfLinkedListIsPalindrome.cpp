/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    long long int reverse(long int n){
        int res=0;
        int rem;
        while(n!=0){
            rem=n%10;
            res=res*10+rem;
            n=n/10;
        }
        return res;
    }
    bool isPalindrome(Node *head)
    { int res=0;
        while(head){
        res=res*10+head->data;
        head=head->next;
    }
     int result=reverse(res);
     if(result==res)
        return true;
     else return false;
        //Your code here
    }
};