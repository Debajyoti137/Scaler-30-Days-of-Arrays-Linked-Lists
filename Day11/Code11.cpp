vector<int> Solution::repeatedNumber(const vector<int> &A) {
     int n= A.size();
     int s[n+1]={0};
     int a,b;
     
     for(int i=0;i<n;i++){
         if(s[A[i]]!=0)
         a=A[i];
         
         s[A[i]]=A[i];
     }
     for(int i=1;i<=n;i++){
         if(s[i]==0)
         b=i;
}
return{a,b};
}
