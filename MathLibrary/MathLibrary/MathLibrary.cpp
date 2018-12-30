// AddSubMul.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include<iostream>
#include "MathLibrary.h"

using namespace std;

int Add(int a, int b) {
	std::cout << "Addition";
	return a + b;
}

int Sub(int a, int b) {
	return a - b;
}

int Multiply(int a, int b) {
	return a * b;
}


