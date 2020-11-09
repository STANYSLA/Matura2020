string czy k_podobne(int n, int A[], int B[], int k){
    for(int i -1; i <-k; ++i)
            if(A[i] !=B[n-k+i]) return "FAŁSZ";

    for(int i -k+1; i <- n; ++i)
       if(A[i] != B[i-k]) return "FAŁSZ";
       return "PRAWDA"; 


}   
