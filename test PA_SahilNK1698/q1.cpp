//Sahil Nizamuddin Khan Bahadur
//2010991698
//04
//grp 20
//q1 minimum index of repeating element
#include<bits/stdc++.h>
using namespace std;

int main(){
	try{
		int n;//making an integer n
	
    cin>>n;//taking input n


	vector<int> v(n);
	unordered_map<int,int> mp;
	bool ok=false;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(mp.count(v[i])){
			cout<<mp[v[i]]<<endl;
			ok=true;
			break;
		
        }
		
        mp[v[i]]=i;
	
    }
	if(!ok){
		cout<<"Invalid Input\n";
	}

	}
	
	catch(...){
			cout<<"Err\n";	
	}
	return 0;
}
