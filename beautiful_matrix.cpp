#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	int a[5][5];
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>a[i][j];
		}
	}

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){

			if(a[i][j]==1){
				if((pow(i-2,2) + pow(j-2,2)) == 8){cout<<"4";}
	            if((pow(i-2,2) + pow(j-2,2)) == 5){cout<<"3";}
	            if((pow(i-2,2) + pow(j-2,2)) == 4){cout<<"2";}
	            if((pow(i-2,2) + pow(j-2,2)) == 1){cout<<"1";}
	            if((pow(i-2,2) + pow(j-2,2)) == 2){cout<<"2";}
	            if((pow(i-2,2) + pow(j-2,2)) == 0){cout<<"0";}
			}
		}
		
		
	}

}
