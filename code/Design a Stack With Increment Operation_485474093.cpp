class CustomStack 
{
public:
    unordered_map<int, int> mp;
    int arr[1000];
    int top = 0;
    int size = 0;
    
    CustomStack(int maxSize) 
    {
        size = maxSize;
    }
    
    void push(int x) 
    {
        if (top < size)
            arr[top++] = x; 
    }
    
    int pop() 
    {
        if(top <= 0)
            return -1;
        int increment_val = mp[top];
        mp[top - 1] += increment_val;
        mp[top] = 0;
        return arr[--top] + increment_val;
    }
    
    void increment(int k, int val) 
    {
        k = min(k, top);
        mp[k] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
