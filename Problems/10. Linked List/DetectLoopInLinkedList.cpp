class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        auto low = head;
        auto high = head;
        while(high and high->next)
        {
            low = low->next;
            high = high->next->next;
            if(low == high) return true;
        }
        return false;
    }
};