# haxxServer
HTTP Server written in HAXE

## Linux Binaries
Located in cpp/Main

## Routing
Modify route.txt
**directory**_=>_**file.html**;


![image](https://user-images.githubusercontent.com/4108484/113360945-ce071180-9318-11eb-87f4-94122112ee00.png)

![image](https://user-images.githubusercontent.com/4108484/113360930-c6476d00-9318-11eb-8588-36d16922cf00.png)

Navigate to \*/directory
![image](https://user-images.githubusercontent.com/4108484/113361017-fbec5600-9318-11eb-89cc-6403cc9b9ddc.png)



## Markdown Interpreter
haxxServer runs with a markdown to HTML interpreter, any route leading to a **_*.md_** file will be automagically converted to HTML when a peer connects

![image](https://user-images.githubusercontent.com/4108484/113361378-ddd32580-9319-11eb-80bf-b8ed344e0023.png)

![image](https://user-images.githubusercontent.com/4108484/113361421-f2172280-9319-11eb-876f-e675ca91abac.png)

## PHP
If PHP is installed, server will run **_*.php_** through PHP CLI, but this is NOT a PHP server. 

![image](https://user-images.githubusercontent.com/4108484/113361896-07d91780-931b-11eb-9c3c-b7e97e40335b.png)

This file is interpreted and then stored in a /tmp/ Directory, but there is no persistence or access to $_GET, $_POST, $_SESSION, etc..
https://github.com/brandonetter/haxxServer/blob/master/tmp/html_test.php34

https://github.com/brandonetter/haxxServer/blob/master/tmp/html_test.php
