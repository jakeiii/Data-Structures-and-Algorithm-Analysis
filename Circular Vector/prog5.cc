

/********************************************************************
CSCI 340 - Assignment 5 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   001
TA:        Your Teaching Assistant's name goes here
Date Due:  10/6/2016

Purpose:   to implement a circular vector
*********************************************************************/
#include "prog5.h"


int main(){

cin>>in.N;	
cin>>in.M;
cin>>in.K;	

unsigned c = 0;

vector<string> v;
init_vals(v, in);


for(int t = in.M; t > 0; t--){
	print_vector(v, c);
}



return 0;
}

/***************************************************************
Function:  init_vals

Use:       put values in a vector NOTE, i did not know how to generate the
	   random string 

Arguments: 1. referance to a  vector sting struct inargs

Returns:   nothing
***************************************************************/


void init_vals (vector <string>& v, in_args& in){
//	v.resize(in.N);
	
	int n = in.N;
	string name;
	for(int i = 0; i < n; i++){
		cin>>name;
		v.push_back(name);
		name.erase();
		
	}

//	sort(v.begin(), v.end());
	
}
/***************************************************************
Function:  print_vector

Use:       to print a vector and remove a value

Arguments: 1. referance to a vector, unsigned value

Returns:   nothing
***************************************************************/


void print_vector (vector<string>& v, unsigned& cnt){

	int i = cnt;
	i = (i + (in.M)) % v.size ();

	v.erase(v.begin() + i);
		int s = v.size();	
		for(int i = 0; i < s; i++){ //loops the size of the vector
			cout<<v.at(i)<<" ";
			
		}
	cout<<endl;
	
	cnt = cnt + (in.M);	
	


}

