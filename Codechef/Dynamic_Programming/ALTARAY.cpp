#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int a;
	cin>>a;
	while(a--)
	{
	    int a1;
	    cin>>a1;
	    vector<long> vect1(a1);
	    vector<long>vect2(a1);
	    
	    for(int i=0;i<a1;i++)
	    {
	       cin>>vect1[i]; 
	    }
	    
	    for(int i=a1-1;i>=0;i--)
	    {
	        if(i==a1-1 )
	        {
	            vect2[i]=1;
	        }
	        else
	        {
	            if(vect1[i]*vect1[(i+1)] <0)
	            {
	                vect2[i]=1+vect2[i+1];
	            }
	            else
	            {
	                vect2[i]=1;
	            }
	        }
	    }
	    for( auto x : vect2)
	    {
	        cout<<x<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
