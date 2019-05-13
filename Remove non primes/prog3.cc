/********************************************************************
CSCI 340 - Assignment 3 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   Your section number goes here
TA:        Your Teaching Assistant's name goes here
Date Due:  9/16/2016

Purpose:   to remove non prime numbers from a set of integers
*********************************************************************/


#include "prog3.h"

int main(){
int n;
//cout<<"how big is the set: ";
cin>>n;

set<int> numSet;

for(int i = 2; i <= n; i++){
 	numSet.insert(i);

}


sieve(numSet, n);	
print_primes(numSet);

return 0;
}

/***************************************************************
Function: sieve

Use:       to remove non prime numbers from an interger set

Arguments: 1. referance to an integer set
           2. integer

Returns:   nothing
***************************************************************/



void sieve (set<int>& s, int n){
	for(int m = 2; m * m <= n; m++){
		if(s.find(m) != s.end()){
			int i = 2 * m;
				while(i <= n){
					s.erase(i);
					i += m;
				}
		}
			
	}
	
}

/***************************************************************
Function: prim_primes

Use:       to print all numbers(prime) of a set

Arguments: 1. referance to an integer set

Returns:   nothing
***************************************************************/


void print_primes (const set <int>& s){
		int i = 1;
//		cout<<endl;		
		for(set<int>::iterator it = s.begin(); it != s.end(); it++){
		cout<<setw(ITEM_W)<<*it<<" ";
		if (i % NO_ITEM == 0)
			cout<<endl;
		i++;
			
	}
		
	
}


