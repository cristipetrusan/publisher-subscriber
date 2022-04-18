#pragma once
#include <vector>

#include "Publisher.h"
#include "Subscriber.h"

class Broker
{
public:
	void addSubscriber(Subscriber* subscriber, std::string topic);
	void registerToPublisher(Publisher* publisher);
	void onPublish(std::string topic, int newData);
private:
	Publisher* publisher;
	std::vector<Subscriber*> subscriberTopicA;
	std::vector<Subscriber*> subscriberTopicB;

};

