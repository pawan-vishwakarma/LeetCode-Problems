class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
        sort(a.begin(),a.end()) ;
        vector<vector<int>> ans ;
        
        int n = a.size() ;
        
        for(int i =0 ;i<n;i++)
      {      
            int t = -a[i] ;
            int s = i+1;
            int e = n-1 ;
        
        while(s<e)
        {
            if(a[s]+a[e] == t)
            {
                ans.push_back({a[i],a[s],a[e]}) ;
                
                while(s<e && a[s] == a[s+1]) s++ ;
                while(s<e && a[e] == a[e-1]) e-- ;
                s++ ;
                e-- ;
            }
            else 
            if(a[s]+a[e] > t)
            { 
                e-- ;
            }
            else
            {
                s++ ;    
            }
        }
            
            while(i<n-1 && a[i] == a[i+1]) i++ ;
     }
       
        return ans ;
    }
};
