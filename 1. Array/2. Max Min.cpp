Link: https://practice.geeksforgeeks.org/problems/max-min/1

Solution: 

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int a=A[0];
    	int b=a;
    	
    	for(int i=1;i<N;i++){
    	    if(a<A[i]){
    	        a=A[i];
    	    }
    	    if(b>A[i]){
    	        b=A[i];
    	    }
    	}
    	return a+b;
    }

};