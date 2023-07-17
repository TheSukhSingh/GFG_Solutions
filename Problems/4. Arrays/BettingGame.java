// User function template for Java
class Solution
{
    static int betBalance(String result)
    {
        // code here
        int money = 4;
        int betAmount = 1;
        
        for(int i=0; i<result.length(); i++){
            
            if(money < betAmount)
                return -1;
            
            if(result.charAt(i) == 'W'){
                money = money + betAmount;
                betAmount = 1;
            }
            else {
                money = money - betAmount;
                betAmount = 2 * betAmount;
            }
        }
        
        return money;
    }
}