#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <iostream>

#pragma warning(disable: 4996)
SOCKET Connection;

using namespace std; 

void ClientHandler()
{
    setlocale(LC_ALL, "ru"); 
    char msg[128];
    while (true)
    {
        recv(Connection, msg, sizeof(msg), NULL);
        cout << msg << endl;
    }
    CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientHandler, NULL, NULL, NULL);
}

int main(int args, char* argv[])
{
    setlocale(LC_ALL, "ru"); 
    WSADATA wsaData;
    WORD DLLVersion = MAKEWORD(2, 1);
    if (WSAStartup(DLLVersion, &wsaData) != 0)
    {
        cout << "Ошибка ! " << endl;
        exit(1);
    }
    SOCKADDR_IN addr;
    int sizeofaddr = sizeof(addr);
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    addr.sin_port = htons(1111);
    addr.sin_family = AF_INET;

    SOCKET Connection = socket(AF_INET, SOCK_STREAM, NULL);
    if (connect(Connection, (SOCKADDR*)&addr, sizeof(addr)) != 0)
    {
        cout << "Ошибка : Ошибка подключения к серверу.\n";
        return 1;
    }
        cout << "Подключено ! \n";

    CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientHandler, NULL, NULL, NULL);
    char msg1[128];
    while (true)
    {
        cin.getline(msg1, sizeof(msg1)); 
        send(Connection, msg1, sizeof(msg1), NULL);
        Sleep(10);
    }

    system("pause");
    return 0;
}



