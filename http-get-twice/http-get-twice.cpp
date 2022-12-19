#include <string>
#include <stdio.h>

#include "torplusplus.hpp"

#define HOST "cryptbbtg65gibadeeo2awe3j7s6evg7eklserehqr4w4e2bis5tebid.onion"

int main(){
    torPlusPlus::torSocket torSock; // Create a torSocket object.

    for(int i=0; i<2; i++){ // Repeat twice for testing purposes
        // === Connect to HOST and send a GET request, then print the response:
        torSock.startAndConnectToProxy(); // Start the proxy and connect to it
        torSock.connectProxyTo(HOST); // Connect the proxy to the onion address
        std::string httpReq = "GET / HTTP/1.1\r\nHost: " + std::string(HOST) + "\r\n\r\n"; // Assemble a HTTP GET request to send to the site
        torSock.proxySend(httpReq.c_str(), (int)httpReq.length()); // Send the request to the hidden service
        char buf[16384] = {0}; // Up to 16KB of memory for whatever gets sent back
        torSock.proxyRecv(buf, sizeof(buf) * sizeof(char)); // Receive a response to the GET request
        printf("%s\n", buf); // Print whatever the server sent back
        torSock.close();
    }

    return 0;
}