Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1


Solution: 

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int i=0;
        int j=n-1;
        
        for(int k=0;k<=j;k++){
            if(a[k]==0){
                swap(a[i++],a[k]);
            }else if(a[k]==2){
                swap(a[j--],a[k--]);
            }
        }
    }
    
};