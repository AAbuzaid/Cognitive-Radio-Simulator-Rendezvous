#include<iostream>
#include<vector>
#include"Band_Details.h"
#include"SecondaryUser.h"


int main() 
{
	int numberOfBands = 100;
	double PUProbON1 = 0.2;
	double PUProbON2 = 0.4;

	bool symmetric = true;
	double asymmetricity = 0.1;			// The higher the number, the higher the asymmetricity

	std::vector<Band_Details> Bands1(numberOfBands, Band_Details(PUProbON1));
	std::vector<Band_Details> Bands2(numberOfBands, Band_Details(PUProbON2));

	SecondaryUser Transmittor;
	SecondaryUser Receiver;
	for (int i = 0; i < numberOfBands; i++)
	{
		Bands1[i].randomState();
		Bands2[i].randomState();

	}
	Transmittor.scanBands(Bands1, symmetric, asymmetricity);
	if(symmetric)
	Receiver.scanBands(Bands1, symmetric, asymmetricity);
	Receiver.scanBands(Bands2, symmetric, asymmetricity);
	
	
	for (int i = 0; i < Transmittor.emptyBands.size(); i++)
	{
		std::cout << Transmittor.emptyBands[i] << " - ";
		if (i >= Receiver.emptyBands.size())
		{
			std::cout << std::endl;
			continue;
		}
		std::cout << Receiver.emptyBands[i] << std::endl;
	}

}

