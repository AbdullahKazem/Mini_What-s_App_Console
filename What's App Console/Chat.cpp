#include "Chat.h"
#include "Message.h"
#include <string>
#include <list>
using namespace std;

Chat::Chat()
{
}

void Chat::insertMessage(Message message) {
	chat.push_back(message);
}

void Chat::removeMessage(Message message) {
	chat.pop_back();
}


Chat::~Chat()
{
}
