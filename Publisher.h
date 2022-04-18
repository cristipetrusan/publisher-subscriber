#pragma once
#include <string>

#include "Broker.h"
class Publisher
{
	std::string name;
public:
	void registerBroker(Broker* broker);
	void publishToBroker(std::string topic, int newData);
	void update();
private:
	int dataTopicA, dataTopicB;
	Broker* broker;
};

