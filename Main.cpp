#include <iostream>

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <WinSock2.h>
#include <WS2tcpip.h>
#include <stdio.h>
#include <cstdint>
#pragma comment(lib, "Ws2_32.lib")

int main() {

	WSAData wsaData;

	if (WSAStartup(MAKEWORD(2, 0), &wsaData) != 0) {
		fprintf(stderr, "WSAStartup failed.\n");
		std::cin.ignore();
		return 1;
	}

	std::cout << "Yay nothing crashed" << std::endl;
	
	std::cin.ignore();
	WSACleanup();
	return 0;
}