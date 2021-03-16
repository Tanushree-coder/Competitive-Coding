class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n=a.size();
        int cur_sum=a[0],max_sum=a[0];
        for(int i=1;i<n;i++)
        {
            cur_sum=max(a[i]+cur_sum,a[i]);
            max_sum=max(max_sum,cur_sum);
}
        return max_sum;
        
    }
};