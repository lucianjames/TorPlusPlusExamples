#include <string>
#include <stdio.h>

#include "torplusplus.hpp"

#define TEST_ONION "cryptbbtg65gibadeeo2awe3j7s6evg7eklserehqr4w4e2bis5tebid.onion"

int main(){
    torSocketGlobals::DEBUG = true; // Enable debug messages
    torSocket torSock; // Create a torSocket object. Doing this starts the TOR proxy and connects to it
    torSock.connectTo(TEST_ONION); // Connect the proxy to the onion address
    std::string httpReq = "GET / HTTP/1.1\r\nHost: " + std::string(TEST_ONION) + "\r\n\r\n"; // Assemble a HTTP GET request to send to the site
    torSock.proxySend(httpReq.c_str(), (int)httpReq.length()); // Send the request to the hidden service
    char buf[16384] = {0}; // Up to 16KB of memory for whatever gets sent back
    torSock.proxyRecv(buf, sizeof(buf) * sizeof(char)); // Receive a response to the GET request
    printf("%s\n", buf); // Print whatever the server sent back
    return 0;
}