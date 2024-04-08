#pragma once
#include <string>
#include <list>
#include "Message.h"
using namespace std;
class Chat
{
public:

	list <Message> chat;
	Chat();
	void insertMessage(Message message);
	void removeMessage(Message message);
	
	~Chat();
};

