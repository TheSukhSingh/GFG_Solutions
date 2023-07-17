int strstr(string s, string x)
{
     //Your code here
     int len_x = x.length();
     for (int i = 0; i < s.length(); i++)
     {
        //  temporary string that checks if x is there or not.
         string temp = "";
         for (int j = i; j < s.length(); j++)
         {
             temp.push_back(s[j]);
             if (temp == x)
                return i;
         }
     }
     return -1;
}