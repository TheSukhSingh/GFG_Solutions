string printNumber(string s, int n) 
{
    //code here
    string str;
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        if((s[i] - 'a') == 18)
        {
            str.push_back('7');
            flag = 1;
        }
        if((s[i] - 'a') == 21)
        {
            str.push_back('8');
            flag = 1;
        }
        if((s[i] - 'a') == 24 or (s[i] - 'a') == 25)
        {
            str.push_back('9');
            flag = 1;
        }
        if(flag ==0)
        str.push_back(((s[i]-'a')/3)+'2');
    }
    return str;
}