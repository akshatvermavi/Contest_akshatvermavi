//DICEGAME2
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A1, A2 ,A3 ,B1 ,B2 ,B3;
	    cin>> A1>>A2>>A3>>B1>>B2>>B3;
	    int arra[3] ={A1,A2,A3};
	    int arrb[3] ={B1,B2,B3};
	    sort(arra,arra+3);
	    sort(arrb,arrb+3);
	    int x = arra[2]+arra[1];
	    int y = arrb[2] + arrb[1];
	    if(x==y)
	    cout<<"Tie"<<endl;
	    else if(x>y)
	    cout<<"Alice"<<endl;
	    else if(y>x)
	    cout<<"Bob"<<endl;
	}
	return 0;
}

