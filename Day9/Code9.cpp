int Solution::trap(const vector<int> &A) {
    int n=A.size();
    vector<int> prefix(n);
    vector<int> suffix(n);
    prefix[0]=A[0];
    suffix[n-1]=A[n-1];
    for(int i=1;i<n;i++)prefix[i]=max(prefix[i-1],A[i]);
    for(int i=n-2;i>=0;i--) suffix[i]=max(suffix[i+1],A[i]);
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=(min(prefix[i],suffix[i])-A[i]);
    }
    return ans;
}
