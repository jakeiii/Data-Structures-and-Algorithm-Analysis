/********************************************************************
CSCI 340 - Assignment5 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   001
TA:        Your Teaching Assistant's name goes here
Date Due:  9/27/2016

Purpose:   to impliment a circular vector
*********************************************************************/

#ifndef PROG5_H
#define PROG5_H

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstring>

using namespace std;

struct in_args {
unsigned N , M, K;
};

void print_vector (vector<string>&, unsigned&);
void init_vals (vector <string>&, in_args&);

struct in_args in;

#endif
