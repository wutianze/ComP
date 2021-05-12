kill -9 `ps x | grep tcpS | awk '{print $1}'`
kill -9 `ps x | grep tcpC | awk '{print $1}'`
./tcpS 1024 10 & ./tcpC 127.0.0.1 1024 10 5000
