
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here

    vector<int> Union;

    int i=0, j=0;

    while(i < a.size() && j<b.size())
    {
        if(a[i]<=b[j])
        {
          if (Union.size()==0 || Union.back() != a[i]) 
          {
            Union.push_back(a[i]);
          }
            
            i++;

        }

        else 
        {
            if(Union.size()==0 || Union.back()!=b[j])
            {
                Union.push_back(b[j]);
            }
            j++;
        }
        
    }
    while(i<a.size())
    {
        if (Union.back() != a[i]) 
          {
            Union.push_back(a[i]);
          }
          i++;
    }
    while(j<b.size())
    {
        if(Union.back()!=b[j])
            {
                Union.push_back(b[j]);
            }
            j++;
    }


    return Union;
}
