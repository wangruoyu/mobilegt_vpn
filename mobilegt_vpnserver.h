/*

 */

#ifndef MOBILEGT_VPNSERVER_H
#define MOBILEGT_VPNSERVER_H

#include "mobilegt_util.h"

int tunDataProcess(PacketPool & tunReceiver_packetPool, int socketfd_tunnel);
int tunReceiver(int fd_tun_interface, PacketPool & tunIF_recv_packetPool);
int tunnelDataProcess(PacketPool & tunnelReceiver_packetPool, int fd_tun_interface, int socketfd_tunnel, TunIPAddrPool & tunip_pool, const map<string, string> & conf_m);
int tunnelReceiver(int fd_tunnel, PacketPool & tunnel_recv_packetPool);

class ClientParameter {
private:
	//-m 1400 -a $PRIVATE_ADDR 32 -d $DNS_ADDR -r 0.0.0.0 0
	//mtu
	//dns
	//route
	//
public:

};

class ClientRecorder {
};

#endif