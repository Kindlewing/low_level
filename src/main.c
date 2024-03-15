#include <arpa/inet.h>
#include <bits/sockaddr.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>

int main() {
	printf("Hello, World\n");
	struct sockaddr_in address;

	int socket_fd = socket(AF_LOCAL, SOCK_STREAM, 0);

	if (socket_fd < 0) {
		perror("Nah");
		return -1;
	}

	address.sin_family = AF_INET;
	address.sin_port = 1024;
	address.sin_addr.s_addr = inet_addr("127.0.0.1");

	if (bind(socket_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
		printf("Couldn't bind to socket\n");
		return -1;
	}
	printf("Bound socket to 127.0.0.1\n");

	while (1) {
		printf("Listening on port %d\n", 1024);
		fflush(stdout);
	}

	return 0;
}
