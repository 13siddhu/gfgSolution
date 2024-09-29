class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int>st;
        vector<int>ans;
        
        for(int i =0;i<n;i++){
           st.insert(arr1[i]);
        }
        
        for(int i =0;i<m;i++){
            st.insert(arr2[i]);
        }
        
        for(auto elem:st){
            ans.push_back(elem);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
