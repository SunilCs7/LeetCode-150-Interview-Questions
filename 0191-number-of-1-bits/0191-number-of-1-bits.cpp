class Solution {
public:
    int hammingWeight(int n) {
        int counter=0;
        while(n){
            counter+=n&1;
            n>>=1;
        }
         return counter;
    }
   
};