class Solution {
public:
    int arrangeCoins(int n) {
        int left = 0 , right = n;
        while ( left <= right ){
            long long  mid = (left + right) /2;
            long long  coins = mid *(mid +1)/2;

            if (coins<=n){
            left = mid +1;
            }
            else {
                right = mid -1 ; 
            }

         } 
         return right;


    }
    
    };
       /* int count =0;
        

        for (int i= 1;i <= n;i++){
            
            if (n>=i){
                n=n-i;
                count ++;
            

               
            }
            
            else {
                break;

            }


        }
        return count ;
    */
    