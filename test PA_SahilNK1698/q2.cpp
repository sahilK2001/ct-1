//Sahil Nizamuddin Khan Bahadur
//2010991698
//04
//grp20
//q2
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n>>x;


	vector<int> v(n);
	vector<vector<int>> ans;

	for(int i=0;i<n;i++){
		int sum=0;
		vector<int> temp;
		
        for(int j=i;j<n;j++){
			sum =ans[j];
			temp.push_back(v[j]);
			if(sum==x){
				ans.push_back(temp);
			}
		}
	
    }
	
    for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	
    }
	
	
	return 0;
}
