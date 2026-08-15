#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    //Optimal Approach -O(N) Time Complexity
    vector<int>ans;
    int maxi=INT_MIN;
    
    for (int i=n-1;i>=0;i--){
        maxi=max(maxi,elements[i]);
        if(ans.size()==0|| ans.back()!=maxi){
            ans.push_back(elements[i]);
        }


    }
    reverse(ans.begin(),ans.end());
    return ans;
    // Write your code here.
}
