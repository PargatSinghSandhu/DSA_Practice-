class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums2.size();
        stack<int> st;
        vector<int> ans;
        map<int, int> nge;        // using the map to store the value against the key and then use it later to use for getting the element from the array 1.

        for(int i = n-1;i>=0;i--)        // running the loop from the back, as this is non-circular array, so starting from the last element.
        {
            while(!st.empty() && nums2[i]>=st.top())        //it will check if the stack is not empty and the current element of the array is greater than the top element of the stack then, it will pop the element until the condition gets false
            {
                st.pop(); //2 cases, 1. every element is less than the current element, then stack will gets empty. 2. if top element is less than the current element, and next one is greater then it will stop and there will be some element in the stack 
            }

            if(st.empty()) // if the stack is empty, then this 
            {
                nge[nums2[i]] = -1;
            }
            else     //if the stack is not empty, then the top element will be used
            {
                nge[nums2[i]] = st.top();

            }
            st.push(nums2[i]); // pushing the current element in the stack.
        }

        for(int i = 0;i<nums1.size();i++) // for loop for the nums1.
        { 
            ans.push_back(nge[nums1[i]]); // we have the designated values agasint the keys, which we will use to get the value for the nums1. 
        }
        return ans;
    }
};
