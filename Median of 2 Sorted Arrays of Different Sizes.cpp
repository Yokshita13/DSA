class Solution {
	public:
	double medianOf2(vector<int>& a, vector<int>& b) {
	    vector<int> c;
	    
		int n1 = a.size();
		int n2 = b.size();
		int i = 0;
		int j = 0;
		
		while(i<n1 && j<n2){
		    if(a[i] < b[j])
		        c.push_back(a[i++]);
		    else
		        c.push_back(b[j++]);
		}
		
		while(i<n1)
		    c.push_back(a[i++]);
		while(j<n2)
		    c.push_back(b[j++]);
		    
		int n3 = c.size();
		
		if(n3%2 == 1)
		    return c[n3/2];
		return (c[n3/2 - 1] + c[n3/2])/2.0;
	}
};
