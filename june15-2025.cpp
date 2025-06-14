//Smallest Divisor

class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int s=1;
        int e=*max_element(arr.begin(),arr.end());
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int i=0;
            for(auto &j:arr){
                i+=j/mid;
                if(j%mid)i++;
            }
            if(i<=k){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};