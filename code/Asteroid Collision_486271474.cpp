class Solution {
public:
    vector<int> asteroidCollision(vector<int> &a)
    {
        vector<int> r;
        for (int m : a)
        {
            bool add = true;
            while (!r.empty() && r.back() > 0 && m < 0)
            {
                if (r.back() < -m)
                {
                    r.pop_back();
                    continue;
                }
                else
                {
                    if (r.back() == -m)
                    {
                        r.pop_back();
                        add = false;
                        break;
                    }
                    else
                    {
                        add = false;
                        break;
                    }
                }
            }
            if (add)
                r.push_back(m);
        }

        return r;
    }
};
