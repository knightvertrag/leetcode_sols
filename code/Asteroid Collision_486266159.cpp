class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stk{asteroids[0]};
        for (int i = 1; i < asteroids.size(); i++)
        {
            bool to_push = true;
            while (stk.size() && stk.back() > 0 && asteroids[i] < 0)
            {
                if (abs(asteroids[i]) > stk.back())
                    stk.pop_back();
                else if (abs(asteroids[i]) == stk.back())
                {
                    stk.pop_back();
                    to_push = false;
                    break;
                }
                else
                {
                    to_push = false;
                    break;
                }
            }
            if (to_push)
                stk.push_back(asteroids[i]);
        }
        return stk;
    }
};
