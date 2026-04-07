class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int size = s.size();
        if(size%2==1)
            return 0;
        for (int i = 0; i < size; ++i)
        {
            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
                {
                    st.emplace(s[i]);
                    continue;
                }
            if(st.empty())
                return 0;
            if (st.top() == '{' && s[i] == '}')
                {
                    st.pop();
                    continue;
                }
            if (st.top() == '(' && s[i] == ')')
            {
                st.pop();
                continue;
            }
            if (st.top() == '[' && s[i] == ']')
            {
                st.pop();
                continue;
            }
            return 0;
        }
        return st.empty();
    }
};
