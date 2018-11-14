#include<iostream>
#include<vector>
#include"Band_Details.h"
#include"SecondaryUser.h"


int main() 
{
	int numberOfBands = 100;
	double PUProbON = 0.3;
	bool symmetric = false;
	double asymmetricity = 0.5;			// The lower the number, the higher the asymmetricity

	std::vector<Band_Details> Bands(numberOfBands, Band_Details(PUProbON));
	SecondaryUser Transmittor;
	SecondaryUser Receiver;
	for (int i = 0; i < numberOfBands; i++)
	{
		Bands[i].randomState();
	}
	Transmittor.scanBands(Bands, symmetric, asymmetricity);
	Receiver.scanBands(Bands, symmetric, asymmetricity);
	
	
	for (int i = 0; i < Transmittor.emptyBands.size(); i++)
	{
		std::cout << Transmittor.emptyBands[i] << " - ";
		std::cout << Receiver.emptyBands[i] << std::endl;
	}

}

