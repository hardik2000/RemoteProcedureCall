                    Assignment 1
1. Implementation of an RPC client-server chat.
2. Implementation of finding factorial of given number using RPC.
3. Write a program that returns the current date and time using RPC

                    Instructions to run :

1. rpcinfo #to get info about rpcbind installed or not
2. sudo apt-get install rpcbind
3.sudo apt-get install libc-dev-bin
4. sudo apt-get install gcc
5. sudo apt-get install make
6. sudo apt-get update
7. sudo apt-get upgrade


create <fun>.x

rpcgen -a -C <fun>.x

make -f Makefile.<fun> 


Terminal 1->
    sudo ./<fun>_server

Terminal 2->
    sudo ./<fun>_client localhost

                    Refrences :
https://www.youtube.com/watch?v=HbBxO5RXNhU

https://github.com/nidhimj22/RPC-Chat-Application

https://docs.oracle.com/cd/E36784_01/html/E36862/rpcgenpguide-21.html

https://docs.oracle.com/cd/E19504-01/802-5885/6i9k4u0ap/index.html
