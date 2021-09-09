class Solution {
public:
    void nextPermutation(vector<int>& a) {
        
        int n = a.size() , k, l ;
        for(k = n-2 ; k>= 0 ;k--){
            if(a[k] < a[k+1]){
                break ;
            }
        }
        if(k < 0 ){
            reverse(a.begin() , a.end()) ;
        }else{
            for(l = n-1;l>k;l--){
                if(a[l] > a[k]){
                    break;
                }
            }
            swap(a[k] ,a[l]) ;
           reverse(a.begin()+1+k , a.end()) ;
        }
           
    }
};
