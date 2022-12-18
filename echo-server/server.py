# socket server that listens on port 8080 for incoming data and simply echoes it back to the client.

import socket
import threading

def handle_connection(conn):
    while True:
        # Receive data from the client
        data = conn.recv(1024)
        if not data:
            break

        # Send it back
        conn.sendall(b'Hello from TOR! You sent: ' + data)
    conn.close()

# Some setup
HOST = '127.0.0.1'
PORT = 8080
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((HOST, PORT))
s.listen(8)

# Main loop
while True:
    # Accept incoming connections
    conn, addr = s.accept()
    print('Connection from', addr)

    # Start a new thread to handle the connection
    t = threading.Thread(target=handle_connection, args=(conn,))
    t.start()

