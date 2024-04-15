vector<int> Solution::getRow(int A) {
    vector<vector<int>>v(A+1,vector<int>(A));
    
    for(int i=0;i<=A;i++){
        v[i].resize(i+1);
        for(int j=0;j<v[i].size();j++){
            if(j==0 or j==i)
            v[i][j]=1;
            else
            v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
    }
    return v[A];
}
