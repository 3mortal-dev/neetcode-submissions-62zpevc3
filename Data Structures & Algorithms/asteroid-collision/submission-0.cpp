bool is_valid(vector<int>& arr)
{
    int i = 0;
    for(;i < arr.size(); ++i)
        if(arr[i] > 0)
            break;

    for(;i < arr.size(); ++i)
        if(arr[i] < 0)
            break;

    return i == arr.size();
}

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        while(!is_valid(asteroids))
        {
            vector<int> res;
            for(int i = 0; i < asteroids.size(); ++i)
            {
                if(i < asteroids.size() - 1 && asteroids[i] > 0 && asteroids[i+1] < 0)
                {
                    // Push only the bigger
                    if(asteroids[i] > asteroids[i+1] * -1)
                        res.push_back(asteroids[i]);
                    
                    else if (asteroids[i] < asteroids[i+1] * -1)
                        res.push_back(asteroids[i+1]);
                    i++; // move on after the negative 
                }
                else
                    res.push_back(asteroids[i]);
            }
            asteroids = std::move(res);
        }
        return asteroids;
    }
};