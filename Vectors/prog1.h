/********************************************************************
CSCI 340 - Assignment 1 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   Your section number goes here
TA:        Your Teaching Assistant's name goes here
Date Due:  8/30/2016

Purpose:   to fill a vector with random numbers then sorting the vector
           and finaly printing the vector
*********************************************************************/


#ifndef PROG1_H
#define PROG1_H

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;


const int VEC_SIZE = 250;
const int HIGH = 10000;
const int LOW = 1;
const int ITEM_W = 5;


void genRndNums(vector<int>&);
void printVec(const vector<int>&);

#endif
