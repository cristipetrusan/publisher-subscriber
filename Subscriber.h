#pragma once
#include <string>

#include "Broker.h"
class Subscriber
{
	std::string name;
public:
	void subscribeToBroker(Broker* broker, std::string topic);
	void updateCallback(int newData);
private:
	int data;
	std::string topic;
};

