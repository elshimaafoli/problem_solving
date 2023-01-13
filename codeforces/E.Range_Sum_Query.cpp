/* 
  * problem link
  * https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/E
  * solved by prefix sum.
*/


int arr[100001];
long long pref[100001]={0};

	int main()
	 {
		int n,q;
		cin>>n>>q;
		for(int i=0;i<n;i++)
    			{
        				cin>>arr[i];
        				(i)? pref[i]=pref[i-1]+arr[i] : pref[i]=arr[i] ;
    			}
    		int l=0,r=0;
    		long long sum=0;
   		while(q--)
    			{
        				cin>>l>>r;
        				l--; r--;
        				(l)?sum=(pref[r]-pref[l-1]):sum=pref[r];
        				cout<<sum<<'\n';
    			}
    
	}