#pragma once
#include<iostream>
#include<vector>

class Band_Details
{
public:
	Band_Details();
	Band_Details(double ProbON);
	~Band_Details();
	void randomState();
	bool PUState;
	double ProbON;

};

