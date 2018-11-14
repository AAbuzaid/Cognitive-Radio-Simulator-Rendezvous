#pragma once
#include<vector>
#include"Band_Details.h"

class SecondaryUser
{
public:
	SecondaryUser();
	~SecondaryUser();
	void scanBands(std::vector<Band_Details> &Bands, bool symmetric, double asymmetricity);
	std::vector<int> emptyBands;
};

