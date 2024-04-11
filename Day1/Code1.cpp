int Solution::solve(vector<int> &A) {
    int number=A.size()-1;
    int answer=0;
    sort(A.begin(),A.end());
    for(int i=0; i<=number;i++){
        if(A[i]%A[number]>answer){
            answer=A[i]%A[number];
        }
    }
    return answer;
}
