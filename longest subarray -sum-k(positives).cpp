int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n=a.size();
    int maxLen=0;
    for (int i=0;i<n;i++){
        int sum=0;
        
        for (int j=i;j<n;j++){
            sum+=a[j];
            if (sum==k) maxLen=max(maxLen,j-i+1);
        }
        

    }
    return maxLen;
    


    // Write your code here
}
