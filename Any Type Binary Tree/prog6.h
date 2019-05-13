/********************************************************************
CSCI 340 - Assignment5 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   001
TA:        Your Teaching Assistant's name goes here
Date Due:  10/18/2016

Purpose:  to insert into a binarty tree
NOTE!: i was not able to finish everything in time 
*********************************************************************/
#ifndef PROG6_H
#define PROG6_H


#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstring>

using namespace std;

const int N1 = 100;
const int LOW1 = -999;
const int HIGH1 = 999;
const int LOW2 = -999;
const int HIGH2 = 999;
const int LSIZE = 12;
int itemNum = 1;
const int N2 = 50;

typedef enum { left_side, right_side } SIDE; 
SIDE rnd () { return rand ( ) % 2 ? right_side : left_side; } 

template < class T > class binTree; // forward declaration

template < class T >
class Node {
friend class binTree < T >;         // binTree is friend
public:
    // default constructor
    Node ( const T& x = T ( ), Node < T >* l = 0, Node < T >* r = 0 ) :
        data ( x ), left ( l ), right ( r ) { }
private:
    T data;                         // data component
    Node < T > *left, *right;       // left and right links
};


template < class T > class binTree { //template < class T > 
public:  
	int heights = 0;
	binTree ();    // default constructor  
	unsigned height () const;    // returns height of tree 
	virtual void insert ( const T& );    // inserts a node in tree  
	void inorder ();    // inorder traversal of tree 
protected:  
	Node < T >* root;      // root of tree 
private:  
	unsigned height ( Node < T >* ) const;     // private version of height ( )  
	void insert ( Node < T >*&, const T& );     // private version of insert ( )  
	void inorder ( Node < T >*&); // private version of inorder ( ) 
	
};

template < class T > void print ( const T& );
template < class T > void print_vals (binTree < T >& tree, const string& name ); 

int gen();
int gen2();

#endif
