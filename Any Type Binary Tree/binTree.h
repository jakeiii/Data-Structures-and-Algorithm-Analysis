
/********************************************************************
CSCI 340 - Assignment6 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   001
TA:        Your Teaching Assistant's name goes here
Date Due:  9/27/2016

Purpose:   to impliment a binary tree
*********************************************************************/
#include "prog6.h"


int gen(){
	return rand() % (HIGH1 * 2 + 1) + LOW1;
}
int gen2(){
	return rand() % (HIGH2 * 2 + 1) + LOW2;
}


template <class T> 
binTree<T>::binTree(){
	root = NULL;
}

template <class T>
void binTree<T>::insert( Node<T>* & n, const T & i ){
	if (n == NULL){
		n = new Node<T>(i);
	}
	else if (rnd() == left_side){
		insert(n -> left, i);
	}
	else 
		insert(n -> right, i);		
}

template <class T>
void binTree<T>::insert(const T& i){
	insert(root, i);
}

template < class T> 
void print(const T& x){
cout << x;
}

template < class T> 
void print_vals(binTree < T >& tree, const string& name ){
cout<<" Name: "<<name<<endl;
cout<<" Height: "<<endl;

tree.inorder();

cout<<endl;
}

template < class T>
void binTree<T>::inorder (){
	itemNum = 1;
	inorder(root);	
}
template < class T>
void binTree<T>::inorder (Node <T>* & n){
	if(itemNum % LSIZE == 0){
		cout<<endl;
	}
	if(n != NULL){
		cout<<n -> data<<" ";
		itemNum++;
	}
	if(n -> left != NULL){
		inorder(n -> left);
	}
		if(n -> right != NULL){
		inorder(n -> right);
	}
}

