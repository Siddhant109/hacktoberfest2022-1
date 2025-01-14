
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
        sort(arr, arr+n);
        sort(dep, dep+n);
        int i = 1;
        int j = 0;
        int pt_no=1;
        while(i<n){
            if(arr[i] <= dep[j]){
                pt_no++;
            }
            else{
                j++;
            }
            i++;
        }
        return pt_no;
    }
};
