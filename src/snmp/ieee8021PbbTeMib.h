/*****************************************************************************

 @(#) src/snmp/ieee8021pbbtemib.h

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

#ifndef __LOCAL_IEEE8021PBBTEMIB_H__
#define __LOCAL_IEEE8021PBBTEMIB_H__

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
struct ieee8021PbbTeMib_data {
	struct ieee8021PbbTeMib_data *ieee8021PbbTeMib_old;
	uint ieee8021PbbTeMib_rsvs;
	uint ieee8021PbbTeMib_tsts;
	uint ieee8021PbbTeMib_sets;
	uint ieee8021PbbTeMib_request;
};
struct ieee8021PbbTeProtectionGroupListTable_data {
	struct ieee8021PbbTeProtectionGroupListTable_data *ieee8021PbbTeProtectionGroupListTable_old;
	uint ieee8021PbbTeProtectionGroupListTable_rsvs;
	uint ieee8021PbbTeProtectionGroupListTable_tsts;
	uint ieee8021PbbTeProtectionGroupListTable_sets;
	uint ieee8021PbbTeProtectionGroupListTable_request;
	uint ieee8021PbbTeProtectionGroupListTable_refs;
	uint ieee8021PbbTeProtectionGroupListTable_id;
	ulong ieee8021BridgeBaseComponentId;	/* NoAccess */
	ulong ieee8021PbbTeProtectionGroupListGroupId;	/* NoAccess */
	ulong ieee8021PbbTeProtectionGroupListMD;	/* Create */
	ulong ieee8021PbbTeProtectionGroupListWorkingMA;	/* Create */
	ulong ieee8021PbbTeProtectionGroupListProtectionMA;	/* Create */
	long ieee8021PbbTeProtectionGroupListStorageType;	/* Create */
	long ieee8021PbbTeProtectionGroupListRowStatus;	/* Create */
};
struct ieee8021PbbTeMAShareGroupTable_data {
	struct ieee8021PbbTeMAShareGroupTable_data *ieee8021PbbTeMAShareGroupTable_old;
	uint ieee8021PbbTeMAShareGroupTable_rsvs;
	uint ieee8021PbbTeMAShareGroupTable_tsts;
	uint ieee8021PbbTeMAShareGroupTable_sets;
	uint ieee8021PbbTeMAShareGroupTable_request;
	uint ieee8021PbbTeMAShareGroupTable_refs;
	uint ieee8021PbbTeMAShareGroupTable_id;
	ulong ieee8021BridgeBaseComponentId;	/* NoAccess */
	ulong ieee8021PbbTeProtectionGroupListGroupId;	/* NoAccess */
	ulong ieee8021PbbTeMASharedGroupSubIndex;	/* NoAccess */
	ulong ieee8021PbbTeMASharedGroupId;	/* ReadOnly */
};
struct ieee8021PbbTeTesiTable_data {
	struct ieee8021PbbTeTesiTable_data *ieee8021PbbTeTesiTable_old;
	uint ieee8021PbbTeTesiTable_rsvs;
	uint ieee8021PbbTeTesiTable_tsts;
	uint ieee8021PbbTeTesiTable_sets;
	uint ieee8021PbbTeTesiTable_request;
	uint ieee8021PbbTeTesiTable_refs;
	uint ieee8021PbbTeTesiTable_id;
	ulong ieee8021PbbTeTesiId;	/* NoAccess */
	ulong ieee8021PbbTeTesiComponent;	/* Create */
	ulong ieee8021PbbTeTesiBridgePort;	/* Create */
	long ieee8021PbbTeTesiStorageType;	/* Create */
	long ieee8021PbbTeTesiRowStatus;	/* Create */
};
struct ieee8021PbbTeTeSiEspTable_data {
	struct ieee8021PbbTeTeSiEspTable_data *ieee8021PbbTeTeSiEspTable_old;
	uint ieee8021PbbTeTeSiEspTable_rsvs;
	uint ieee8021PbbTeTeSiEspTable_tsts;
	uint ieee8021PbbTeTeSiEspTable_sets;
	uint ieee8021PbbTeTeSiEspTable_request;
	uint ieee8021PbbTeTeSiEspTable_refs;
	uint ieee8021PbbTeTeSiEspTable_id;
	ulong ieee8021PbbTeTesiId;	/* NoAccess */
	ulong ieee8021PbbTeTeSiEspEspIndex;	/* NoAccess */
	uint8_t *ieee8021PbbTeTeSiEspEsp;	/* Create */
	size_t ieee8021PbbTeTeSiEspEspLen;
	long ieee8021PbbTeTeSiEspStorageType;	/* Create */
	long ieee8021PbbTeTeSiEspRowStatus;	/* Create */
};
struct ieee8021PbbTeProtectionGroupConfigTable_data {
	struct ieee8021PbbTeProtectionGroupConfigTable_data *ieee8021PbbTeProtectionGroupConfigTable_old;
	uint ieee8021PbbTeProtectionGroupConfigTable_rsvs;
	uint ieee8021PbbTeProtectionGroupConfigTable_tsts;
	uint ieee8021PbbTeProtectionGroupConfigTable_sets;
	uint ieee8021PbbTeProtectionGroupConfigTable_request;
	uint ieee8021PbbTeProtectionGroupConfigTable_refs;
	uint ieee8021PbbTeProtectionGroupConfigTable_id;
	ulong ieee8021BridgeBaseComponentId;	/* NoAccess */
	ulong ieee8021PbbTeProtectionGroupListGroupId;	/* NoAccess */
	long ieee8021PbbTeProtectionGroupConfigState;	/* ReadOnly */
	long ieee8021PbbTeProtectionGroupConfigCommandStatus;	/* ReadOnly */
	long ieee8021PbbTeProtectionGroupConfigCommandLast;	/* ReadOnly */
	long ieee8021PbbTeProtectionGroupConfigCommandAdmin;	/* Create */
	long ieee8021PbbTeProtectionGroupConfigActiveRequests;	/* ReadOnly */
	ulong ieee8021PbbTeProtectionGroupConfigWTR;	/* ReadOnly */
	ulong ieee8021PbbTeProtectionGroupConfigHoldOff;	/* Create */
	long ieee8021PbbTeProtectionGroupConfigNotifyEnable;	/* Create */
	long ieee8021PbbTeProtectionGroupConfigStorageType;	/* Create */
};
struct ieee8021PbbTeProtectionGroupISidTable_data {
	struct ieee8021PbbTeProtectionGroupISidTable_data *ieee8021PbbTeProtectionGroupISidTable_old;
	uint ieee8021PbbTeProtectionGroupISidTable_rsvs;
	uint ieee8021PbbTeProtectionGroupISidTable_tsts;
	uint ieee8021PbbTeProtectionGroupISidTable_sets;
	uint ieee8021PbbTeProtectionGroupISidTable_request;
	uint ieee8021PbbTeProtectionGroupISidTable_refs;
	uint ieee8021PbbTeProtectionGroupISidTable_id;
	ulong ieee8021PbbTeProtectionGroupISidIndex;	/* NoAccess */
	ulong ieee8021PbbTeProtectionGroupISidComponentId;	/* Create */
	ulong ieee8021PbbTeProtectionGroupISidGroupId;	/* Create */
	long ieee8021PbbTeProtectionGroupISidStorageType;	/* Create */
	long ieee8021PbbTeProtectionGroupISidRowStatus;	/* Create */
};
struct ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_data {
	struct ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_data *ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_old;
	uint ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_rsvs;
	uint ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_tsts;
	uint ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_sets;
	uint ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_request;
	uint ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_refs;
	uint ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_id;
	ulong ieee8021QBridgeVlanCurrentComponentId;	/* NoAccess */
	ulong ieee8021PbbTeBridgeStaticForwardAnyUnicastVlanIndex;	/* NoAccess */
	uint8_t *ieee8021PbbTeBridgeStaticForwardAnyUnicastEgressPorts;	/* Create */
	size_t ieee8021PbbTeBridgeStaticForwardAnyUnicastEgressPortsLen;
	uint8_t *ieee8021PbbTeBridgeStaticForwardAnyUnicastForbiddenPorts;	/* Create */
	size_t ieee8021PbbTeBridgeStaticForwardAnyUnicastForbiddenPortsLen;
	long ieee8021PbbTeBridgeStaticForwardAnyUnicastStorageType;	/* Create */
	long ieee8021PbbTeBridgeStaticForwardAnyUnicastRowStatus;	/* Create */
};

/* storage declarations */
extern struct ieee8021PbbTeMib_data *ieee8021PbbTeMibStorage;
extern struct header_complex_index *ieee8021PbbTeProtectionGroupListTableStorage;
extern struct header_complex_index *ieee8021PbbTeMAShareGroupTableStorage;
extern struct header_complex_index *ieee8021PbbTeTesiTableStorage;
extern struct header_complex_index *ieee8021PbbTeTeSiEspTableStorage;
extern struct header_complex_index *ieee8021PbbTeProtectionGroupConfigTableStorage;
extern struct header_complex_index *ieee8021PbbTeProtectionGroupISidTableStorage;
extern struct header_complex_index *ieee8021PbbTeBridgeStaticForwardingAnyUnicastTableStorage;

/* enum definitions from the covered mib sections */

#define IEEE8021PBBTEPROTECTIONGROUPCONFIGSTATE_WORKINGPATH 1
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGSTATE_PROTECTIONPAT 2
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGSTATE_WAITTORESTORE 3
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGSTATE_PROTADMIN 4

#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDSTATUS_CLEAR 1
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDSTATUS_LOCKOUTPROTECTION 2
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDSTATUS_FORCESWITCH 3
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDSTATUS_MANUALSWITCHTOPROTECTION 4
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDSTATUS_MANUALSWITCHTOWORKING 5

#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDLAST_CLEAR 1
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDLAST_LOCKOUTPROTECTION 2
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDLAST_FORCESWITCH 3
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDLAST_MANUALSWITCHTOPROTECTION 4
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDLAST_MANUALSWITCHTOWORKING 5

#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDADMIN_CLEAR 1
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDADMIN_LOCKOUTPROTECTION 2
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDADMIN_FORCESWITCH 3
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDADMIN_MANUALSWITCHTOPROTECTION 4
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGCOMMANDADMIN_MANUALSWITCHTOWORKING 5

#define IEEE8021PBBTEPROTECTIONGROUPCONFIGACTIVEREQUESTS_NOREQUEST 1
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGACTIVEREQUESTS_LOP 2
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGACTIVEREQUESTS_FS 3
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGACTIVEREQUESTS_PSFH 4
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGACTIVEREQUESTS_WSFH 5
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGACTIVEREQUESTS_MANUALSWITCHTOPROTECTION 6
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGACTIVEREQUESTS_MANUALSWITCHTOWORKING 7

#define IEEE8021PBBTEPROTECTIONGROUPCONFIGNOTIFYENABLE_TRUE 1
#define IEEE8021PBBTEPROTECTIONGROUPCONFIGNOTIFYENABLE_FALSE 2

/* notifications */
extern oid ieee8021PbbTeProtectionGroupAdminFailure_oid[10];

/* scalars accessible only for notify */

/* object id definitions */
extern oid ieee8021PbbTeCompliance_oid[11];
extern oid ieee8021PbbTeGroupListGroup_oid[11];
extern oid ieee8021PbbTeMASharedGroup_oid[11];
extern oid ieee8021PbbTeTesiGroup_oid[11];
extern oid ieee8021PbbTeSiEspGroup_oid[11];
extern oid ieee8021PbbTeProtectionConfigManGroup_oid[11];
extern oid ieee8021PbbTeProtectionConfigOptGroup_oid[11];
extern oid ieee8021PbbTeProtectionGroupISidGroup_oid[11];
extern oid ieee8021PbbTeFdbGroup_oid[11];
extern oid ieee8021PbbTeNotificationsGroup_oid[11];

/* function prototypes */
/* trap function prototypes */
extern void send_ieee8021PbbTeProtectionGroupAdminFailure_v2trap(struct variable_list *);

/* variable function prototypes */
void init_ieee8021PbbTeMib(void);
void deinit_ieee8021PbbTeMib(void);
int term_ieee8021PbbTeMib(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_ieee8021PbbTeMib;
struct ieee8021PbbTeMib_data *ieee8021PbbTeMib_create(void);
struct ieee8021PbbTeMib_data *ieee8021PbbTeMib_duplicate(struct ieee8021PbbTeMib_data *);
int ieee8021PbbTeMib_destroy(struct ieee8021PbbTeMib_data **);
int ieee8021PbbTeMib_add(struct ieee8021PbbTeMib_data *);
void parse_ieee8021PbbTeMib(const char *, char *);
SNMPCallback store_ieee8021PbbTeMib;
void refresh_ieee8021PbbTeMib(int);
FindVarMethod var_ieee8021PbbTeProtectionGroupListTable;
struct ieee8021PbbTeProtectionGroupListTable_data *ieee8021PbbTeProtectionGroupListTable_create(void);
struct ieee8021PbbTeProtectionGroupListTable_data *ieee8021PbbTeProtectionGroupListTable_duplicate(struct ieee8021PbbTeProtectionGroupListTable_data *);
int ieee8021PbbTeProtectionGroupListTable_destroy(struct ieee8021PbbTeProtectionGroupListTable_data **);
int ieee8021PbbTeProtectionGroupListTable_add(struct ieee8021PbbTeProtectionGroupListTable_data *);
int ieee8021PbbTeProtectionGroupListTable_del(struct ieee8021PbbTeProtectionGroupListTable_data *);
void parse_ieee8021PbbTeProtectionGroupListTable(const char *, char *);
SNMPCallback store_ieee8021PbbTeProtectionGroupListTable;
void refresh_ieee8021PbbTeProtectionGroupListTable(int);
FindVarMethod var_ieee8021PbbTeMAShareGroupTable;
struct ieee8021PbbTeMAShareGroupTable_data *ieee8021PbbTeMAShareGroupTable_create(void);
struct ieee8021PbbTeMAShareGroupTable_data *ieee8021PbbTeMAShareGroupTable_duplicate(struct ieee8021PbbTeMAShareGroupTable_data *);
int ieee8021PbbTeMAShareGroupTable_destroy(struct ieee8021PbbTeMAShareGroupTable_data **);
int ieee8021PbbTeMAShareGroupTable_add(struct ieee8021PbbTeMAShareGroupTable_data *);
int ieee8021PbbTeMAShareGroupTable_del(struct ieee8021PbbTeMAShareGroupTable_data *);
void parse_ieee8021PbbTeMAShareGroupTable(const char *, char *);
SNMPCallback store_ieee8021PbbTeMAShareGroupTable;
void refresh_ieee8021PbbTeMAShareGroupTable(int);
FindVarMethod var_ieee8021PbbTeTesiTable;
struct ieee8021PbbTeTesiTable_data *ieee8021PbbTeTesiTable_create(void);
struct ieee8021PbbTeTesiTable_data *ieee8021PbbTeTesiTable_duplicate(struct ieee8021PbbTeTesiTable_data *);
int ieee8021PbbTeTesiTable_destroy(struct ieee8021PbbTeTesiTable_data **);
int ieee8021PbbTeTesiTable_add(struct ieee8021PbbTeTesiTable_data *);
int ieee8021PbbTeTesiTable_del(struct ieee8021PbbTeTesiTable_data *);
void parse_ieee8021PbbTeTesiTable(const char *, char *);
SNMPCallback store_ieee8021PbbTeTesiTable;
void refresh_ieee8021PbbTeTesiTable(int);
FindVarMethod var_ieee8021PbbTeTeSiEspTable;
struct ieee8021PbbTeTeSiEspTable_data *ieee8021PbbTeTeSiEspTable_create(void);
struct ieee8021PbbTeTeSiEspTable_data *ieee8021PbbTeTeSiEspTable_duplicate(struct ieee8021PbbTeTeSiEspTable_data *);
int ieee8021PbbTeTeSiEspTable_destroy(struct ieee8021PbbTeTeSiEspTable_data **);
int ieee8021PbbTeTeSiEspTable_add(struct ieee8021PbbTeTeSiEspTable_data *);
int ieee8021PbbTeTeSiEspTable_del(struct ieee8021PbbTeTeSiEspTable_data *);
void parse_ieee8021PbbTeTeSiEspTable(const char *, char *);
SNMPCallback store_ieee8021PbbTeTeSiEspTable;
void refresh_ieee8021PbbTeTeSiEspTable(int);
FindVarMethod var_ieee8021PbbTeProtectionGroupConfigTable;
struct ieee8021PbbTeProtectionGroupConfigTable_data *ieee8021PbbTeProtectionGroupConfigTable_create(void);
struct ieee8021PbbTeProtectionGroupConfigTable_data *ieee8021PbbTeProtectionGroupConfigTable_duplicate(struct ieee8021PbbTeProtectionGroupConfigTable_data *);
int ieee8021PbbTeProtectionGroupConfigTable_destroy(struct ieee8021PbbTeProtectionGroupConfigTable_data **);
int ieee8021PbbTeProtectionGroupConfigTable_add(struct ieee8021PbbTeProtectionGroupConfigTable_data *);
int ieee8021PbbTeProtectionGroupConfigTable_del(struct ieee8021PbbTeProtectionGroupConfigTable_data *);
void parse_ieee8021PbbTeProtectionGroupConfigTable(const char *, char *);
SNMPCallback store_ieee8021PbbTeProtectionGroupConfigTable;
void refresh_ieee8021PbbTeProtectionGroupConfigTable(int);
FindVarMethod var_ieee8021PbbTeProtectionGroupISidTable;
struct ieee8021PbbTeProtectionGroupISidTable_data *ieee8021PbbTeProtectionGroupISidTable_create(void);
struct ieee8021PbbTeProtectionGroupISidTable_data *ieee8021PbbTeProtectionGroupISidTable_duplicate(struct ieee8021PbbTeProtectionGroupISidTable_data *);
int ieee8021PbbTeProtectionGroupISidTable_destroy(struct ieee8021PbbTeProtectionGroupISidTable_data **);
int ieee8021PbbTeProtectionGroupISidTable_add(struct ieee8021PbbTeProtectionGroupISidTable_data *);
int ieee8021PbbTeProtectionGroupISidTable_del(struct ieee8021PbbTeProtectionGroupISidTable_data *);
void parse_ieee8021PbbTeProtectionGroupISidTable(const char *, char *);
SNMPCallback store_ieee8021PbbTeProtectionGroupISidTable;
void refresh_ieee8021PbbTeProtectionGroupISidTable(int);
FindVarMethod var_ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable;
struct ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_data *ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_create(void);
struct ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_data *ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_duplicate(struct ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_data *);
int ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_destroy(struct ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_data **);
int ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_add(struct ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_data *);
int ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_del(struct ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable_data *);
void parse_ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable(const char *, char *);
SNMPCallback store_ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable;
void refresh_ieee8021PbbTeBridgeStaticForwardingAnyUnicastTable(int);

WriteMethod write_ieee8021PbbTeProtectionGroupListMD;
WriteMethod write_ieee8021PbbTeProtectionGroupListWorkingMA;
WriteMethod write_ieee8021PbbTeProtectionGroupListProtectionMA;
WriteMethod write_ieee8021PbbTeProtectionGroupListStorageType;
WriteMethod write_ieee8021PbbTeProtectionGroupListRowStatus;
WriteMethod write_ieee8021PbbTeTesiComponent;
WriteMethod write_ieee8021PbbTeTesiBridgePort;
WriteMethod write_ieee8021PbbTeTesiStorageType;
WriteMethod write_ieee8021PbbTeTesiRowStatus;
WriteMethod write_ieee8021PbbTeTeSiEspEsp;
WriteMethod write_ieee8021PbbTeTeSiEspStorageType;
WriteMethod write_ieee8021PbbTeTeSiEspRowStatus;
WriteMethod write_ieee8021PbbTeProtectionGroupConfigCommandAdmin;
WriteMethod write_ieee8021PbbTeProtectionGroupConfigHoldOff;
WriteMethod write_ieee8021PbbTeProtectionGroupConfigNotifyEnable;
WriteMethod write_ieee8021PbbTeProtectionGroupConfigStorageType;
WriteMethod write_ieee8021PbbTeProtectionGroupISidComponentId;
WriteMethod write_ieee8021PbbTeProtectionGroupISidGroupId;
WriteMethod write_ieee8021PbbTeProtectionGroupISidStorageType;
WriteMethod write_ieee8021PbbTeProtectionGroupISidRowStatus;
WriteMethod write_ieee8021PbbTeBridgeStaticForwardAnyUnicastEgressPorts;
WriteMethod write_ieee8021PbbTeBridgeStaticForwardAnyUnicastForbiddenPorts;
WriteMethod write_ieee8021PbbTeBridgeStaticForwardAnyUnicastStorageType;
WriteMethod write_ieee8021PbbTeBridgeStaticForwardAnyUnicastRowStatus;
#endif				/* __LOCAL_IEEE8021PBBTEMIB_H__ */