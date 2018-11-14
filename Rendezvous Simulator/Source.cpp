#include<iostream>
#include<vector>
#include"Band_Details.h"
#include"SecondaryUser.h"


int main() 
{
	int numberOfBands = 100;
	double PUProb = 0.9;
	std::vector<Band_Details> Bands(numberOfBands, Band_Details(PUProb));
	for (int i = 0; i < numberOfBands; i++)
	{
		Bands[i].randomState();
	}
	SecondaryUser Transmittor;
	SecondaryUser Receiver;
	Transmittor.scanBands(Bands);
	Receiver.scanBands(Bands);
	
	
	for (int i = 0; i < numberOfBands; i++)
	{

	}

}

