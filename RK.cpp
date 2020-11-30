//nm=number;ma=max;mb=max2;wh=tuk;r_count=rc;k_count=kc;opt[]=ot;opt2[]=ou;
//lo=len3;rs=result;sg=nter;ln=len;st=est;ra=r_arry;ka=k_arry;mm=ks;mmm=rss;
#define  j_l for(int j=0;j<=lo-1;j++)
#define	 s_l for(int s=lo-1;s>=j;s--)
#define  k_l for(int k=j;k<=s;k++)
#define  m_l for(int m=0;m<st;m++)
#include<iostream>
#include<string>
using namespace std;
int main(){
	int nm,ma=0,wh=0,lo=0,mb=0,rs;
	string sg;
	cout<<"Number of tests:\t"<<endl;
	cin>>nm;
	cin.ignore();
	if(nm>=0&&nm<=10){
		for(int i=0;i<nm;i++){
			rs=0;
		cout<<"\n\nEnter the string : "<<endl;
		getline(cin,sg);
		int ln,st;
			ln=sg.length();
			lo=ln;
			st=(ln*(ln+1))/2;
			int ra[st];
			int ka[st];
			int p=0;
			int rc,kc;
			j_l{
				s_l{
						rc=0, kc=0;
					k_l{
					if(sg[k]=='R'){
						rc++;
					}else
					if(sg[k]=='K'){
						kc++;
					}
				}
				ra[p++]=rc;
				ka[p-1]=kc;
				}
			 }
			cout<<"\n";
			int ot[st],ou[st];
			m_l{
				if((ka[m])>ma){
				ma=ka[m];
			}
			ot[m]=ka[m]-ra[m];
			 }
			m_l{
				if(ot[m]>mb){
					mb=ot[m];
				}
			 }
			wh=ma;
			m_l{
				if(ka[m]-ra[m]==mb){
					ou[m]=ka[m];
				}else{ou[m]=-1234;}
				if(ou[m]<wh&&ou[m]!=-1234){
						wh=ou[m];
				}
			}
			int ks, rss;
	    j_l{
				s_l{
	    	ks=0;rss=0;
		k_l{
			if(sg[k]=='K'){
				ks++;
			}else{
				rss++;
			}
		}
		if(ks-rss==mb && ks==wh){
			k_l{
		if(sg[k]=='K'){
			sg[k]='R';
				}else{
			sg[k]='K';
				}
		   }
			goto here;
		}
     }
  }
	    here:cout<<endl<<"Modified String is : "<<endl;
	    for(int j=0;j<lo;j++){
	    cout<<" "<<sg[j];
	    if(sg[j]=='R'){
	    	rs++;
	    	}
	    }
	    cout<<endl<<endl<<"So , Max number of R's can be : "<<rs;
		}
	}
	return 0;
}

