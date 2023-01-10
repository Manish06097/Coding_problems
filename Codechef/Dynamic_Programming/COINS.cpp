#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long change(long n){
    if(n>=12){
	        return change(n/2) + change(n/3) + change(n/4);
	    }else{
	        return n;
	    }
}

int main() {
    int n;
	while(cin>>n)
	cout<<change(n)<<endl;
}