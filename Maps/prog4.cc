
/********************************************************************
CSCI 340 - Assignment 4 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   001
TA:        Your Teaching Assistant's name goes here
Date Due:  9/27/2016

Purpose:   to put strings with numbers and letters only into a map
*********************************************************************/

#include "prog4.h"

int main(){

map <string, int> m;

get_words(m);
print_words(m);

return 0;
}
/***************************************************************
Function: get words

Use:       to get the strings from input

Arguments: 1. referance to a map sting int

Returns:   nothing
***************************************************************/

void get_words (map<string, int>& m){
string s;
string s1;

while (cin){
	cin>>s;
	inputStream++;
	clean_entry(s, s1);	
	if (s1 != ""){
		m[s1]++;
	}
}

	
}
/***************************************************************
Function:  clean entry

Use:       to remove puncuation from string

Arguments: 1.a constant refrance to a string
           2. freferance to a string

Returns:   nothing
***************************************************************/

void clean_entry (const string& s1, string& s2){
        int c = s1.size();
	s2.clear();
	bool once = false;
        for(int i = 0; i < c; i++){
                if((isdigit(s1.at(i)))||(isalpha(s1.at(i)))){
                        s2.push_back(s1.at(i));
                }
                else{
			if (once == true){
			break;
			}
		}
         	       once = true;
        }

}
/***************************************************************
Function: print words

Use:       to print the map

Arguments: 1. referance to a map

Returns:   nothing
***************************************************************/


void print_words (map <string, int>& m){
	int n = 1;
	
    for (map<string,int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << setw(ITEM_W)<<left<<it->first << " : "<<left<<setw(5)<<it->second;
		if(n % NO_ITEMS == 0)
        	cout<<endl;
		
		n++;
		outputStream++;
    }
    
    	cout<<endl<<endl<<setw(ITEM_W)<<left<<"no of words in input stream "<<": "<<inputStream - 5; //to match sample
	cout<<endl<<setw(ITEM_W)<<left<<"no of words in output stream "<<": "<<outputStream - 6;
}



