
/********************************************************************
CSCI 340 - Assignment 1 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   Your section number goes here
TA:        Your Teaching Assistant's name goes here
Date Due:  8/30/2016

Purpose:   to fill a vector with random numbers then sorting the vector
	   and finaly printing the vector
*********************************************************************/

/********************************************************************
CSCI 340 - Assignment 1 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   Your section number goes here
TA:        Your Teaching Assistant's name goes here
Date Due:  8/30/2016

Purpose:   to fill a vector with random numbers then sorting the vector
           and finaly printing the vector
*********************************************************************/
#include "prog1.h"


int main(){

vector<int> nums;

genRndNums(nums);

sort(nums.begin(), nums.end()); //sort the vector

printVec(nums);

return 0;
}

/***************************************************************
Function: genRndNums

Use:       to get a random number then bush them to te back of 
	   vector v 

Arguments: 1. referance to an integer vector 

Returns:   nothing
***************************************************************/

void genRndNums(vector<int>& v){
 srand(1);
	for(int i = VEC_SIZE; i > 0; i--){ //fills the vector with a random sumber VEC_SIZE times
		v.push_back(rand() % (HIGH - LOW + 1)+ LOW);
//		cout<<rand() % (HIGH - LOW + 1)+ LOW<<endl;
	}
}

/***************************************************************
Function: printVec

Use:       to print vector v in 12 colums 

Arguments: 1. referance to a constant integer vector

Returns:   nothing
***************************************************************/

void printVec(const vector<int>& v){

	for(unsigned i = 1; i < v.size()+1; i++){ //loops the size of the vector
		cout<<setw(ITEM_W)<<v.at(i-1)<<" ";
		unsigned num = 0;
		if(i%12 == num){ //to move a line down
			cout<<endl;
		}
	}
}



bool LinearSearch(const vector<int>&v, int x){
	vector<int>::iterator it;
	it = find (v.begin(), v.end(), x);
	
}
