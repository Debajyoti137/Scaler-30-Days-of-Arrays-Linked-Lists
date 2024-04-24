int Solution::maxProfit(const vector<int> &A) {
    if(!A.size())
    return 0;
    int mini=A[0];
    int j=0;
    for(int i=1;i<A.size();i++){
        if(A[i]<mini){mini=A[i];
    }
    j=max(j,A[i]-mini);
    }
    return j;
}
