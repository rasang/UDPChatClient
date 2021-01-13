#pragma once
#pragma once
#include<string>
#include <functional>
#include "Friends.h"
typedef std::function<void(int, string)> Alert;
typedef std::function<void(string, string)> NewMessage;
typedef std::function<void(int, Friends*)> FreshFriendsList;
typedef struct CallBacks {
	Alert alert;
	NewMessage newMsg;
	FreshFriendsList fresh;
} CallBacks;
