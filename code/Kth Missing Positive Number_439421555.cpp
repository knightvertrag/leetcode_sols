class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v;
        int ptr1 = 0, i = 1, j;
        while(v.size() < k)
        {
            if(ptr1 < arr.size())
            {
                if(i < arr[ptr1])
                {
                    v.push_back(i++);
                    continue;    
                }
                else if(arr[ptr1] == i) 
                {
                    i++;
                    ptr1++;
                    continue;
                }
                
            }
            
            else 
            {
                v.push_back(i++);
            }
        }
        return v[k - 1];
    }
};
