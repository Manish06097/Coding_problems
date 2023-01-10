#include <bits/stdc++.h>
#include <iostream>
using namespace std;



int main() {
	// your code goes here
	int i;
	cin>>i;
	while(i--)
	{
	     string str1,str2;
	     cin>>str1>>str2;
	     int vect[2][str2.length() + 1]={0};
	     for(int i=0;i<=str1.length();i++)
	     {
	         for(int j=0;j<=str2.length();j++){
	             if(i==0 || j==0)
	             {
	                 vect[(i)%2 ][j] = 0;
	                 
	             }
	             
	             else if(str1[i-1]==str2[j-1])
	             {
	                 vect[(i)%2 ][j]=1+vect[(i+1)%2][j-1];
	               
	             }
	             else
	             {
	                 vect[(i)%2][j]=max(vect[(i)%2][j-1],vect[(i+1)%2 ][j]);
	                 
	             }
	             
	             
	   
	           
	         }
	         
	         
	  
	         
	     }
	  
	   
	     if(vect[str1.length()%2][str2.length()] == str1.length() )
	     cout<<"yes"<<endl;
	     else
	     cout<<"no"<<endl;
	     
	      
	     
	}
	
	return 0;
}

