class Solution {
public:
    void nextPermutation(vector<int>& A) {
        // find the pivot
        int pivot =-1;

        for(int i = A.size()-2;i>=0;i--){
            if(A[i]< A[i+1]){
                pivot=i;
                break;
            }
        }

        if(pivot==-1){
            reverse(A.begin(),A.end());
            return;
        }
        else{
            // find the righmost element which is greater than pivot element and swap them both
            for(int i =A.size()-1; i>pivot;i--){
                if(A[pivot]<A[i]){
                    swap(A[pivot],A[i]);
                    break;
                }
            }
        }
        int i=pivot+1;
        int j=A.size()-1;
        while(i<=j){
            swap(A[i],A[j]);
            i++;
            j--;
        }
    }
};