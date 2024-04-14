/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int solve(int* A, int n1) {
    int o=0,e=0,i,num=0;
    for(i=0;i<n1;i++){
        if (A[i]!=0){
            if(A[i]%2==0){e++;}
            else{o++;}
        }else{
            e++;
        }
    }
    num=(e>o)?o:e;
    return num;
}
