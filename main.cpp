#include "Publisher.h"
#include "Subscriber.h"
#include "Broker.h"

int main()
{
	Broker broker;
	Publisher publisher;
	broker.registerToPublisher(&publisher);
	
	Subscriber sub1, sub2;

	sub1.subscribeToBroker(&broker, "topicString");
	return 0;
}