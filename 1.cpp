#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long int n,m,conteo1{0},conteo2{0},q,w;
	cin>>n>>m;
	vector<long int> a(n);
	vector<long int> respuesta(m);
	for(long int &temp:a){
		cin>>temp;
		if(temp==1){
			conteo1++;
		}
		if(temp==-1){
			conteo2++;
		}
	}
	for(int i=0;i<m;i++){
		cin>>q>>w;
		
		if((abs(q-w)+1)%2==0&&((abs(q-w)+1)/2)<=min(conteo1,conteo2)){
			respuesta[i]=1;
		}else{
			respuesta[i]=0;
		}
	}
	for(long int i:respuesta){
		cout<<i<<"\n";
	}
	
	return 0;
}
