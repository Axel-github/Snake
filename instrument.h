#pragma once
#include <string>
#include <vector>



class Instrument
{
private:
	int _id;
	std::string _name;
	float _price;

public:
	void printOnceInfo();
	Guitar(int id, std::string name, int type, float price);
	int getId();
	std::string getGuitarSuchStr();
	static const std::vector<std::string> forType;

};