/*
 * Lasttask.cpp
 *
 *  Created on: 27-Apr-2015
 *      Author: Arvin
 */
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
typedef vector <int> int_vec;
int_vec array;

int main(){
		char ch;
		int T=0;
		cin>>T;
		array.push_back(0);
		array.reserve(T);
if(T>=1 && T<=300000){
for(int counter=0;counter<T;counter++){
		cin>>ch;
		if(ch=='+'){
		int A=0;
		cin>>A;
if(A>=1 && A<=300000){
		int_vec :: iterator move=array.begin();
while(move!=array.end()){
if(A>=*move){
		array.push_back(A);
		break;
  	  }
		move++;
	}
   }
  }	    else {
		if(ch=='?'){
		int X=0, Y=0, P=0;
		cin>>X>>Y>>P;
if(X<=Y && P>=1 && P<=300000){
		int how_many;
if(X>=1 && Y<=300000){
		how_many=0;
		int_vec :: iterator move2=array.begin();
		while(move2!=array.end()){
		if(*move2>=X && *move2<=Y){
		if(*move2%P==0){
			++how_many;
	   }
	  }
		move2++;
	 }
		cout<<how_many;
    }
   }
  }		else{
		cin.get();
		cin.sync();
		return 0;
	  }
	 }
	}
   }
	cin.sync();
	cin.get();
	return 0;
}
