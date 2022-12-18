# socket server that listens on port 8080 for incoming data and simply echoes it back to the client.

import socket

# Listen on 127.0.0.1:8080
HOST = '127.0.0.1'
PORT = 8080

# Create a socket object
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind to the port
s.bind((HOST, PORT))

# Wait for a client connection
s.listen(1)

# Accept a connection
conn, addr = s.accept()

# Print the connection address
print('Connected by', addr)

# Receive data from the client
data = conn.recv(1024)

# Echo the data back to the client
conn.sendall("Hello from TOR! You sent: " + str(data))

# Close the connection
conn.close()