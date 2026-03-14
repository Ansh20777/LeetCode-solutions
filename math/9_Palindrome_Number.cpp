class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0 || (x%10==0 && x!=0))
        return 0;
    
    int rev=0;
    while(x>rev){
    if ( (rev*10) > (INT_MAX-x%10) )
        return 0;
        rev=rev*10+x%10;
            x/=10;
    }
    return x==rev || x==rev/10;
    }
};

// time complexity -> O(log n)
// space complexity -> O(1)
