#include<iostream>
#include<vector>
#include"Band_Details.h"
#include"SecondaryUser.h"


int main() 
{
	double PUProb = 0.3;
	std::vector<Band_Details> Bands(100, Band_Details(PUProb));
	for (int i = 0; i < 100; i++)
	{
		Bands[i].randomState();
	}
	SecondaryUser Transmittor;
	SecondaryUser Receiver;


}

