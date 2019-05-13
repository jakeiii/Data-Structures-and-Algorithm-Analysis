

/********************************************************************
CSCI 340 - Assignment 3 - Semester Fall 2016

Progammer: Jacob Bonnan
Section:   Your section number goes here
TA:        Your Teaching Assistant's name goes here
Date Due:  9/16/2016

Purpose:  to have a set and remove all non prime numbers from it
*********************************************************************/

#ifndef PROG3_H
#define PROG3_H

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

int const ITEM_W = 4;
int const NO_ITEM = 16;

void sieve (set<int>&, int);
void print_primes (const set <int>&);

#endif

