#include<WinSock2.h>
class Send
{
private:
	SOCKET socket;
	sockaddr_in server;
public:
	int login(char userName[], char password[]);
	int reg(char userName[], char password[]);
	int logout(char userName[]);
	int sendMsg(char userName[], char destUserName[], char msg[]);
	int addFriend(char userName[], char friendName[]);
	int delFriend(char userName[], char friendName[]);
	int confirm(char userName[], char friendName[]);
	int listFriend(char userName[]);
};

