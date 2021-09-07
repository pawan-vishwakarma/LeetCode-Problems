class Solution {
public:
    int maxArea(vector<int>& height) {
        int s =0 ;
        int n = height.size() ;
        int e = n-1 ;
        
        int ans = 0 ;
        
        while(s<e){
            ans = max(ans,(min(height[s],height[e])*(e-s))) ;
            if(height[s] < height[e])
            s++ ;
            else
            e-- ;
        }
        return ans ;
        
    }
};
