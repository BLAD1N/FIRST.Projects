#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <iostream>

#pragma warning(disable: 4996)

SOCKET Connections[100]; 
int counts = 0; 

using namespace std; 

void ClientHandler(int index)
{
    setlocale(LC_ALL, "ru");
    char msg[128];
    while (true)
    {
        recv(Connections[index], msg, sizeof(msg), NULL);
        for (int i = 0; i < counts; i++)
        {
            if (i == index) continue;
            send(Connections[i], msg, sizeof(msg), NULL);
        }
    }

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
    
    SOCKET sListen = socket(AF_INET, SOCK_STREAM, NULL); 
    bind(sListen, (SOCKADDR*)&addr, sizeof(addr)); 
    listen(sListen, SOMAXCONN); 

    for (int i = 0; i < 100; i++)
    {
        SOCKET newConnection;
        newConnection = accept(sListen, (SOCKADDR*)&addr, &sizeofaddr);

        if (newConnection == 0)
        {
            cout << "Ошибка #2 " << endl;
        }
        else
        {
            cout << "Клиент подключён !\n";
            char msg[128] = "Hello, мир, Манера крутит мир";
            send(newConnection, msg, sizeof(msg), NULL);
            Connections[counts] = newConnection;
            counts++; 
            CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientHandler, (LPVOID)(i), NULL, NULL); 
        }
    }

    system("pause");
    return 0;
}
