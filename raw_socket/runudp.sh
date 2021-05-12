kill -9 `ps x | grep udpS | awk '{print $1}'`
kill -9 `ps x | grep udpC | awk '{print $1}'`
./udpS 4194304 100 65507 & ./udpC 4194304 100 5000 65507
