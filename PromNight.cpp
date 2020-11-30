#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	if(T>=1 && T<=10){
		for (int s=0; s<T; s++){
		int B,G,flag;
		cin>>B;
		cin>>G;
		if(B>G){
			cout<<"NO";
		}else{
			int B_a[B],G_a[G];
			for(int i=0; i<B; i++){
						cin>>B_a[i];
							}
					for(int i=0; i<G; i++){
						cin>>G_a[i];
							}
					int min=0;
					for(int i=0;i<B-1;i++){
						min=i;
						for(int j=i+1;j<B;j++){
							if(B_a[min]>B_a[j])
								min=j;
						}
							if(i!=min){
					   	  int temp    =B_a[i];
							  B_a[i]  =B_a[min];
							  B_a[min]=temp;
							}
					   }
					for(int i=0;i<G-1;i++){
						min=i;
						for(int j=i+1;j<G;j++){
							if(G_a[min]>G_a[j])
								min=j;
						}
							if(i!=min){
					   	  int temp    =G_a[i];
							  G_a[i]  =G_a[min];
							  G_a[min]=temp;
							}
					   }
					for(int i=0;i<B;i++){
						if(G_a[i]>B_a[i]){
							flag=1;
						}else if(G_a[i]<B_a[i]){
							flag=0;
						}
					}
					if(flag==0){
						cout<<"YES\n";
					}else if(flag==1){
						cout<<"NO\n";
					}
			}
		}
	}
}
