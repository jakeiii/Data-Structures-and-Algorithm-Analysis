/********************************************************************
CSCI 340 - Assignment 4 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   001
TA:        Your Teaching Assistant's name goes here
Date Due:  9/27/2016

Purpose:   to put strings with numbers and letters only into a map
*********************************************************************/

#ifndef PROG4_H
#define PROG4_H

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstring>
#include <map>


using namespace std;

const  int NO_ITEMS = 3;
const  int ITEM_W = 16;//form saysm 16 but sample output looks like 17
int inputStream = 0;
int outputStream = 0;

void get_words ( map<string, int>& );
void clean_entry (const string&, string& );
void print_words ( map<string, int>& );//was not able to use an iterator with a constant

#endif
