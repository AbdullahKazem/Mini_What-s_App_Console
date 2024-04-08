#pragma once
#include <string>
#include <list>
#include "Chat.h"
using namespace std;
class Contact
{
public:
	string nameC;
	int phone;
	Chat contactChat;
	Contact();
	~Contact();
};

