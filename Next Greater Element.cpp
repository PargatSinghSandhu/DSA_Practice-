#include<bits/stdc++.h>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	
    stack < int > st;
    vector < int > nge(n,-1) ;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] >= st.top())
        {
            st.pop();
        }
        if (st.empty()==true)
        {
            nge[i] = -1;
            st.push(arr[i]);
        }
        else 
        {
            nge[i] = st.top();
            st.push(arr[i]);

        }    
    }
    return nge;

}
