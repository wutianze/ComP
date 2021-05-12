# raw_socket is used to test the performance of raw TCP and UDP.
# Compile
## run `make all`
# Usage
## TCP
- TCP client: `./tcpC <ipaddress> <msg size> <send how many msg> <sleep time in us between two sends>`
- TCP server: `./tcpS <msg size> <receive how many msg>`
- demo: `./runtcp.sh`, the records are written in tcpLog.txt
## UDP
- UDP client: `./udpC <msg size> <send how many msg> <sleep time in us between two sends> <max datagram content>`
- UDP server: `./udpS <msg size> <receive how many msg>`
- demo: `./runudp.sh`, the records are written udpLog.txt

# Tip
- The first record is usually much bigger than other records because the connection has to be built. So the first record should be removed when analyzing data.
- The real msg size is the given size + 8, 8 bytes are used to record timestamp.
