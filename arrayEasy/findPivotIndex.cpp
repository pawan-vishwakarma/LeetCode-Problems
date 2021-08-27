class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int n = nums.size() ;
        int l[10005] ={0};
        
       
        l[0] = nums[0] ;
        for(int i=1 ;i<n;i++){
            l[i] = l[i-1] + nums[i] ;
            // cout<<l[i] <<" " ;
        }
        
        if(l[0] == l[n-1])
            return 0 ;
        
        
        for(int i=1 ;i<n;i++){
            if(l[i] == (l[n-1]-l[i-1]) ){
                return i ;
            }
        }
        return -1 ;
    }
};
