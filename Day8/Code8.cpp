int Solution::maxSubArray(const vector<int> &A) {
    int sum=0;
    int a=INT_MIN;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
        if(sum<A[i])
        sum=A[i];
        a=max(a,sum);
    }
    return a;
}
