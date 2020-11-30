/*
 * Maxor.cpp
 *
 *  Created on: 24-Apr-2015
 *      Author: Arvind Kumar
 */
#include<cmath>
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int how_many=0;
typedef vector <int> int_vec;
struct Structure {
	int_vec subsets;
	int_vec maxor;
} ;
Structure part1;
int main(){
				int_vec array;
				int N;
				cin>>N;
		  		array.reserve(N);
		  		if(N>=1 && N<=100000){
	  			for(int i=0;i<N;i++){
		  		int elem;
		  		cin>>elem;
		  		array.push_back(elem);
	  		  }
		  	}
		  		int subset_number=pow(2.0,N);
		  		int counter, kcounter;
		  		for(counter=0;counter<subset_number; counter++){
		  		int ko=0;
		  		for(kcounter=0;kcounter<N;kcounter++){
		  		if(counter& (1<<kcounter)){
                int_vec array2;
                array2.push_back(array[kcounter]);
                int_vec :: iterator move2=array2.begin();
                while(move2!=array2.end()){
				ko=ko^(*move2);
                move2++;
              }
			}
		  }
		  		part1.maxor.push_back(ko);
		  		}
		  		for(unsigned q=0;q<part1.maxor.size();q++)
		  		part1.subsets.push_back(part1.maxor[q]);
		  {
        	{
        		for(unsigned q=1;q<part1.maxor.size();q++)
        	  {
        		for(unsigned b=q+1;b<part1.subsets.size();b++)
        		if(part1.subsets[b]==part1.maxor[q])
        		how_many++;
        	  }
        		cout<<how_many;
        	}
		  }
cin.get();
cin.sync();
return 0;
}
