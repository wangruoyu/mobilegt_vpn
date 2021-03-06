/*

 */

#ifndef MOBILEGT_VPNSERVER_H
#define MOBILEGT_VPNSERVER_H

#include "mobilegt_util.h"

void startlog(CacheLogger & cLogger);
int tunDataProcess(PacketPool & tunReceiver_packetPool, int socketfd_tunnel, PeerClientTable & peerClientTable, CacheLogger & cLogger);
int tunReceiver(int fd_tun_interface, PacketPool & tunIF_recv_packetPool, CacheLogger & cLogger);
int tunnelDataProcess(PacketPool & tunnelReceiver_packetPool, int fd_tun_interface, int socketfd_tunnel, TunIPAddrPool & tunip_poo, PeerClientTable & peerClientTablel, const map<string, string> & conf_m, CacheLogger & cLogger);
int tunnelReceiver(int fd_tunnel, PacketPool & tunnel_recv_packetPool, CacheLogger & cLogger);

void usage(char **argv);
static int get_tunnel(const char *port, CacheLogger & cLogger);
static int get_tun_interface(const char * name, CacheLogger & cLogger);

#endif