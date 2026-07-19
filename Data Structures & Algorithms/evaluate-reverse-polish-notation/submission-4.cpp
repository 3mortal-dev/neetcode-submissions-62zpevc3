class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto op : tokens)
            if (isalnum(op.back()))
                st.push(stoi(op));
            else {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                switch (op.back()) {
                    case '+':
                        st.push(x + y);
                        break;
                    case '-':
                        st.push(y - x);
                        break;
                    case '*':
                        st.push(x * y);
                        break;
                    case '/':
                        st.push(y / x);
                        break;
                    default:
                        break;
                }
            }
        return st.top();
    }
};
