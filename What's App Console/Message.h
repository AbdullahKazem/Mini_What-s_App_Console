#pragma once
#include <string>
#include <list>
#include "User.h"
using namespace std;
class Message
{
public:
	User sender;
	User reciever;
	string content;
	bool status;
	Message();
	~Message();
};

