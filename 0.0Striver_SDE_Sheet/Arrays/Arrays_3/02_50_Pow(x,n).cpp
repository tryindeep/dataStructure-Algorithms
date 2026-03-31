class Solution {
public:
    double myPow(double x, int n) {

         // Edge case optimizations
        if (x == 1) return 1;
        if (x == -1) return (n % 2 == 0) ? 1 : -1;

        
        long long N = n;
        if(N == 0 ) return 1;

        if(N < 0){
            x = 1/x;
            N = -N;
        }
        
        double result = 1;
        while(N > 0){
            if(N%2 == 1){
                result = result * x;
            }
            x= x*x;
            N = N/2;
        }
        return result;
    }
};