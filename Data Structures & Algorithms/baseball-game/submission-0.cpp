class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> res;
        for(auto c : operations)
        {
            if(c == "D")
            {
                res.push(res.top()*2);
            }
            else if(c == "C")
            {
                res.pop();
            }
            else if (c == "+")
            {
                int a = res.top();
                res.pop();
                a += res.top();
                res.push(a - res.top());
                res.push(a);
            }
            else
            {
                res.push(stoi(c));
            }
        }
        int sum = 0;
        while(!res.empty())
        {
            sum+=res.top();
            res.pop();
        }
        return sum;

    }
};