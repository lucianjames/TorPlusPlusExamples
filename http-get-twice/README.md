# http-get-twice
Repeats the following twice to test the proxyClose() function:
1. Creates a torSocket object, in doing so it creates a tor process and a socket to communicate with it.
2. Connects to the specified .onion address and port. (in this case, the address is for CryptBB (hacking forum))
3. Sends a basic HTTP GET request to the server.
4. Reads the response from the server and prints it to the console.
