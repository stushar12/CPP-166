int minSwaps(vector<int>&arr)
	{
	    int n=arr.size();
	    vector<pair<int,int>> v;
	    
	    for(int i=0;i<n;i++)
	    {
	        v.push_back({arr[i],i});
	    }
	    
	    sort(v.begin(),v.end());
	    
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i==v[i].second)
	        continue;
	        else
	        {
	            c++;
	            swap(v[i],v[v[i].second]);
	            i--;
	        }
	    }
	    return c;
	}