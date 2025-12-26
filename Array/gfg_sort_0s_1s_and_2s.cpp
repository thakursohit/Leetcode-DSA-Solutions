//When to use Dutch Flag Algorithm
//Time	O(n)
//Space	O(1)

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int l=0;
        int m=0;
        int h=arr.size()-1;
        while(m<=h){
            if(arr[m]==0){
            swap(arr[m],arr[l]);
            m++;
            l++;
            }
            else if(arr[m]==1){
                m++;
            }
            else{
                swap(arr[m],arr[h]);
                h--;
            }
        }
    }
};
