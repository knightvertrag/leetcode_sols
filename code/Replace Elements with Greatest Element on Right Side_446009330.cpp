class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int current_max = -1;
        for(int i = arr.size() - 1; i >= 0; --i)
        {
            if(arr[i] > current_max)
            {
                int k = arr[i];
                arr[i] = current_max;
                current_max = k;
            }
            else
                arr[i] = current_max;
        }
        return arr;
    }
};
