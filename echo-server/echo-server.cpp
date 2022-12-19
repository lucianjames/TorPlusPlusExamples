#include <string>
#include <stdio.h>

#include "torplusplus.hpp"

#include "gitIgnoredOnionAddress.h" // HOST is defined in here, but it's not in the repo because i want to hide my onion address ;)
// Remove the above line and replace it with the following line with your own onion address:
// #define HOST ".........................................................onion"

int main(){
    torPlusPlus::torSocket torSock;
    torSock.startAndConnectToProxy(); // Start the proxy and connect to it
    torSock.connectProxyTo(HOST); // Connect the proxy to the onion address (Default port is 80)
    torSock.proxySend("Hello World!", 12); // Send a message to the hidden service
    char buf[16384] = {0}; // Up to 16KB of memory for whatever gets sent back
    torSock.proxyRecv(buf, sizeof(buf) * sizeof(char)); // Receive a response
    printf("%s\n", buf); // Print whatever the server sent back
    torSock.close();
    return 0;
}