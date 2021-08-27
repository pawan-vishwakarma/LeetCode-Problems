class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size() ;
        
        int k = 0,i =0  ;
        
        while(i<n){
           
            nums[k] = nums[i] ;
            i++;
            
             while(i<n && nums[k] == nums[i] ){
                i++ ;
            }
            k++ ;
        } 
        
        return k ;
    }
};
