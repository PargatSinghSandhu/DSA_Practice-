class Solution {
public:
    int minAddToMakeValid(string s) {
         int n = s.size();
        stack<char> st;
        int count = 0;
        for(int i = 0 ; i < n;i++)
        {   
            
            if(s[i]=='(' )
            {
                st.push(s[i]);
                count++;
                
            }
            else if(!st.empty() && st.top() == '(' && s[i]==')')
            {
                count--;
                st.pop();
                
                
            }
            else
            {
                count++;
            }
        }
        return count;
    }
};
