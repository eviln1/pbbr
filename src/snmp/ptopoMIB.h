/*****************************************************************************

 @(#) src/snmp/ptopomib.h

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2015  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 *****************************************************************************/

#ifndef __LOCAL_PTOPOMIB_H__
#define __LOCAL_PTOPOMIB_H__

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */

extern const char sa_program[];
extern int sa_fclose;			/* default close files between requests */
extern int sa_changed;			/* indication to reread MIB configuration */
extern int sa_stats_refresh;		/* indications that statistics, the mib or its tables need to be refreshed */
extern int sa_request;			/* request number for per-request actions */

/* our storage structure(s) */
struct ptopoMIB_data {
	struct ptopoMIB_data *ptopoMIB_old;
	uint ptopoMIB_rsvs;
	uint ptopoMIB_tsts;
	uint ptopoMIB_sets;
	uint ptopoMIB_request;
	long ptopoLastChangeTime;	/* ReadOnly */
	long ptopoConnTabInserts;	/* ReadOnly */
	long ptopoConnTabDeletes;	/* ReadOnly */
	long ptopoConnTabDrops;		/* ReadOnly */
	long ptopoConnTabAgeouts;	/* ReadOnly */
	long ptopoConfigTrapInterval;	/* ReadWrite */
	long ptopoConfigMaxHoldTime;	/* ReadWrite */
};
struct ptopoConnTable_data {
	struct ptopoConnTable_data *ptopoConnTable_old;
	uint ptopoConnTable_rsvs;
	uint ptopoConnTable_tsts;
	uint ptopoConnTable_sets;
	uint ptopoConnTable_request;
	uint ptopoConnTable_refs;
	uint ptopoConnTable_id;
	long ptopoConnTimeMark;		/* NoAccess */
	long ptopoConnLocalChassis;	/* NoAccess */
	long ptopoConnLocalPort;	/* NoAccess */
	long ptopoConnIndex;		/* NoAccess */
	long ptopoConnRemoteChassisType;	/* Create */
	uint8_t *ptopoConnRemoteChassis;	/* Create */
	size_t ptopoConnRemoteChassisLen;
	long ptopoConnRemotePortType;	/* Create */
	uint8_t *ptopoConnRemotePort;	/* Create */
	size_t ptopoConnRemotePortLen;
	oid *ptopoConnDiscAlgorithm;	/* ReadOnly */
	size_t ptopoConnDiscAlgorithmLen;
	long ptopoConnAgentNetAddrType;	/* Create */
	uint8_t *ptopoConnAgentNetAddr;	/* Create */
	size_t ptopoConnAgentNetAddrLen;
	long ptopoConnMultiMacSASeen;	/* ReadOnly */
	long ptopoConnMultiNetSASeen;	/* ReadOnly */
	long ptopoConnIsStatic;		/* Create */
	long ptopoConnLastVerifyTime;	/* ReadOnly */
	long ptopoConnRowStatus;	/* Create */
};

/* storage declarations */
extern struct ptopoMIB_data *ptopoMIBStorage;
extern struct header_complex_index *ptopoConnTableStorage;

/* enum definitions from the covered mib sections */

#define PTOPOCONNREMOTECHASSISTYPE_CHASIDENTPHYSICALALIAS 1
#define PTOPOCONNREMOTECHASSISTYPE_CHASIDIFALIAS 2
#define PTOPOCONNREMOTECHASSISTYPE_CHASIDPORTENTPHYSICALALIAS 3
#define PTOPOCONNREMOTECHASSISTYPE_CHASIDMACADDRESS 4
#define PTOPOCONNREMOTECHASSISTYPE_CHASIDPTOPOGENADDR 5

#define PTOPOCONNREMOTEPORTTYPE_PORTIDIFALIAS    1
#define PTOPOCONNREMOTEPORTTYPE_PORTIDENTPHYSICALALIAS 2
#define PTOPOCONNREMOTEPORTTYPE_PORTIDMACADDR    3
#define PTOPOCONNREMOTEPORTTYPE_PORTIDPTOPOGENADDR 4

#define PTOPOCONNAGENTNETADDRTYPE_OTHER          0
#define PTOPOCONNAGENTNETADDRTYPE_IPV4           1
#define PTOPOCONNAGENTNETADDRTYPE_IPV6           2
#define PTOPOCONNAGENTNETADDRTYPE_NSAP           3
#define PTOPOCONNAGENTNETADDRTYPE_HDLC           4
#define PTOPOCONNAGENTNETADDRTYPE_BBN1822        5
#define PTOPOCONNAGENTNETADDRTYPE_ALL802         6
#define PTOPOCONNAGENTNETADDRTYPE_E163           7
#define PTOPOCONNAGENTNETADDRTYPE_E164           8
#define PTOPOCONNAGENTNETADDRTYPE_F69            9
#define PTOPOCONNAGENTNETADDRTYPE_X121           10
#define PTOPOCONNAGENTNETADDRTYPE_IPX            11
#define PTOPOCONNAGENTNETADDRTYPE_APPLETALK      12
#define PTOPOCONNAGENTNETADDRTYPE_DECNETIV       13
#define PTOPOCONNAGENTNETADDRTYPE_BANYANVINES    14
#define PTOPOCONNAGENTNETADDRTYPE_E164WITHNSAP   15
#define PTOPOCONNAGENTNETADDRTYPE_DNS            16
#define PTOPOCONNAGENTNETADDRTYPE_DISTINGUISHEDNAME 17
#define PTOPOCONNAGENTNETADDRTYPE_ASNUMBER       18
#define PTOPOCONNAGENTNETADDRTYPE_XTPOVERIPV4    19
#define PTOPOCONNAGENTNETADDRTYPE_XTPOVERIPV6    20
#define PTOPOCONNAGENTNETADDRTYPE_XTPNATIVEMODEXTP 21
#define PTOPOCONNAGENTNETADDRTYPE_FIBRECHANNELWWPN 22
#define PTOPOCONNAGENTNETADDRTYPE_FIBRECHANNELWWNN 23
#define PTOPOCONNAGENTNETADDRTYPE_GWID           24
#define PTOPOCONNAGENTNETADDRTYPE_AFI            25
#define PTOPOCONNAGENTNETADDRTYPE_RESERVED       65535

#define PTOPOCONNMULTIMACSASEEN_NOTUSED          1
#define PTOPOCONNMULTIMACSASEEN_UNKNOWN          2
#define PTOPOCONNMULTIMACSASEEN_ONEADDR          3
#define PTOPOCONNMULTIMACSASEEN_MULTIADDR        4

#define PTOPOCONNMULTINETSASEEN_NOTUSED          1
#define PTOPOCONNMULTINETSASEEN_UNKNOWN          2
#define PTOPOCONNMULTINETSASEEN_ONEADDR          3
#define PTOPOCONNMULTINETSASEEN_MULTIADDR        4

#define PTOPOCONNISSTATIC_TRUE                   1
#define PTOPOCONNISSTATIC_FALSE                  2

/* notifications */
extern oid ptopoConfigChange_oid[10];

/* scalars accessible only for notify */

/* object id definitions */
extern oid ptopoCompliance_oid[10];
extern oid ptopoDataGroup_oid[10];
extern oid ptopoGeneralGroup_oid[10];
extern oid ptopoConfigGroup_oid[10];
extern oid ptopoNotificationsGroup_oid[10];

/* function prototypes */
/* trap function prototypes */
extern void send_ptopoConfigChange_v2trap(struct variable_list *);

/* variable function prototypes */
void init_ptopoMIB(void);
void deinit_ptopoMIB(void);
int term_ptopoMIB(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_ptopoMIB;
struct ptopoMIB_data *ptopoMIB_create(void);
struct ptopoMIB_data *ptopoMIB_duplicate(struct ptopoMIB_data *);
int ptopoMIB_destroy(struct ptopoMIB_data **);
int ptopoMIB_add(struct ptopoMIB_data *);
void parse_ptopoMIB(const char *, char *);
SNMPCallback store_ptopoMIB;
void refresh_ptopoMIB(int);
FindVarMethod var_ptopoConnTable;
struct ptopoConnTable_data *ptopoConnTable_create(void);
struct ptopoConnTable_data *ptopoConnTable_duplicate(struct ptopoConnTable_data *);
int ptopoConnTable_destroy(struct ptopoConnTable_data **);
int ptopoConnTable_add(struct ptopoConnTable_data *);
int ptopoConnTable_del(struct ptopoConnTable_data *);
void parse_ptopoConnTable(const char *, char *);
SNMPCallback store_ptopoConnTable;
void refresh_ptopoConnTable(int);

WriteMethod write_ptopoConnRemoteChassisType;
WriteMethod write_ptopoConnRemoteChassis;
WriteMethod write_ptopoConnRemotePortType;
WriteMethod write_ptopoConnRemotePort;
WriteMethod write_ptopoConnAgentNetAddrType;
WriteMethod write_ptopoConnAgentNetAddr;
WriteMethod write_ptopoConnIsStatic;
WriteMethod write_ptopoConnRowStatus;
WriteMethod write_ptopoConfigTrapInterval;
WriteMethod write_ptopoConfigMaxHoldTime;
#endif				/* __LOCAL_PTOPOMIB_H__ */
