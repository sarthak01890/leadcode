class Solution {
public:
    int fan(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n){
         int slow = n;
         int fast = n;
         while (fast!=1){
            slow=fan(slow);
            fast=fan(fast);
            fast=fan(fast);
            if(slow==fast && slow!=1)
            {
                return false;
            
            }
         }
         return true;
    };
    };