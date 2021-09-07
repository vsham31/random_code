import socket
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
host = socket.gethostname()
port = 2222
s.connect((host,port))
while True:
    print("WAITING FOR SERVER RESPONSE")
    s_message=s.recv(1024)
    print("Server: " ,s_message.decode())
    c_message=input("SEND MESSAGE TO SERVER: ")
    s.send(c_message.encode())