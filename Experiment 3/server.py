import socket
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
host = socket.gethostname()
port = 2222
s.bind((host,port))
s.listen(1)
con,addr = s.accept()
print("connect with",addr)
while True:
    messg = input("SEND MESSAGE TO CLIENT: ")
    con.send(messg.encode())
    print("WAITING FOR RESPONSE")
    c_messg=con.recv(1024)
    print("MESSAGE FROM CLIENT ",c_messg.decode())