print("Hello World")

local socket = require("socket")

print(socket._VERSION)

local socket = require("socket")
 
local host = "192.168.0.188"
local port = 1433
local sock, err = socket.connect(host, port)
sock:settimeout(0)

sock:send("Hello")

print(err)

string.pack()