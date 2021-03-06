/*****************************************************************************

 @(#) src/snmp/ieee8021pbmib.h

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

#ifndef __LOCAL_IEEE8021PBMIB_H__
#define __LOCAL_IEEE8021PBMIB_H__

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
struct ieee8021PbMib_data {
	struct ieee8021PbMib_data *ieee8021PbMib_old;
	uint ieee8021PbMib_rsvs;
	uint ieee8021PbMib_tsts;
	uint ieee8021PbMib_sets;
	uint ieee8021PbMib_request;
};
struct ieee8021PbVidTranslationTable_data {
	struct ieee8021PbVidTranslationTable_data *ieee8021PbVidTranslationTable_old;
	uint ieee8021PbVidTranslationTable_rsvs;
	uint ieee8021PbVidTranslationTable_tsts;
	uint ieee8021PbVidTranslationTable_sets;
	uint ieee8021PbVidTranslationTable_request;
	uint ieee8021PbVidTranslationTable_refs;
	uint ieee8021PbVidTranslationTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021PbVidTranslationLocalVid;	/* NoAccess */
	long ieee8021PbVidTranslationRelayVid;	/* Create */
	long ieee8021PbVidTranslationRowStatus;	/* Create */
};
struct ieee8021PbCVidRegistrationTable_data {
	struct ieee8021PbCVidRegistrationTable_data *ieee8021PbCVidRegistrationTable_old;
	uint ieee8021PbCVidRegistrationTable_rsvs;
	uint ieee8021PbCVidRegistrationTable_tsts;
	uint ieee8021PbCVidRegistrationTable_sets;
	uint ieee8021PbCVidRegistrationTable_request;
	uint ieee8021PbCVidRegistrationTable_refs;
	uint ieee8021PbCVidRegistrationTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021PbCVidRegistrationCVid;	/* NoAccess */
	long ieee8021PbCVidRegistrationSVid;	/* Create */
	long ieee8021PbCVidRegistrationUntaggedPep;	/* Create */
	long ieee8021PbCVidRegistrationUntaggedCep;	/* Create */
	long ieee8021PbCVidRegistrationRowStatus;	/* Create */
};
struct ieee8021PbEdgePortTable_data {
	struct ieee8021PbEdgePortTable_data *ieee8021PbEdgePortTable_old;
	uint ieee8021PbEdgePortTable_rsvs;
	uint ieee8021PbEdgePortTable_tsts;
	uint ieee8021PbEdgePortTable_sets;
	uint ieee8021PbEdgePortTable_request;
	uint ieee8021PbEdgePortTable_refs;
	uint ieee8021PbEdgePortTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021PbEdgePortSVid;	/* NoAccess */
	long ieee8021PbEdgePortPVID;	/* ReadWrite */
	ulong ieee8021PbEdgePortDefaultUserPriority;	/* ReadWrite */
	long ieee8021PbEdgePortAcceptableFrameTypes;	/* ReadWrite */
	long ieee8021PbEdgePortEnableIngressFiltering;	/* ReadWrite */
};
struct ieee8021PbServicePriorityRegenerationTable_data {
	struct ieee8021PbServicePriorityRegenerationTable_data *ieee8021PbServicePriorityRegenerationTable_old;
	uint ieee8021PbServicePriorityRegenerationTable_rsvs;
	uint ieee8021PbServicePriorityRegenerationTable_tsts;
	uint ieee8021PbServicePriorityRegenerationTable_sets;
	uint ieee8021PbServicePriorityRegenerationTable_request;
	uint ieee8021PbServicePriorityRegenerationTable_refs;
	uint ieee8021PbServicePriorityRegenerationTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021PbServicePriorityRegenerationSVid;	/* NoAccess */
	ulong ieee8021PbServicePriorityRegenerationReceivedPriority;	/* NoAccess */
	ulong ieee8021PbServicePriorityRegenerationRegeneratedPriority;	/* ReadWrite */
};
struct ieee8021PbCnpTable_data {
	struct ieee8021PbCnpTable_data *ieee8021PbCnpTable_old;
	uint ieee8021PbCnpTable_rsvs;
	uint ieee8021PbCnpTable_tsts;
	uint ieee8021PbCnpTable_sets;
	uint ieee8021PbCnpTable_request;
	uint ieee8021PbCnpTable_refs;
	uint ieee8021PbCnpTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	ulong ieee8021PbCnpCComponentId;	/* Create */
	long ieee8021PbCnpSVid;		/* Create */
	long ieee8021PbCnpRowStatus;	/* Create */
};
struct ieee8021PbPnpTable_data {
	struct ieee8021PbPnpTable_data *ieee8021PbPnpTable_old;
	uint ieee8021PbPnpTable_rsvs;
	uint ieee8021PbPnpTable_tsts;
	uint ieee8021PbPnpTable_sets;
	uint ieee8021PbPnpTable_request;
	uint ieee8021PbPnpTable_refs;
	uint ieee8021PbPnpTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021PbPnpRowStatus;	/* Create */
};
struct ieee8021PbCepTable_data {
	struct ieee8021PbCepTable_data *ieee8021PbCepTable_old;
	uint ieee8021PbCepTable_rsvs;
	uint ieee8021PbCepTable_tsts;
	uint ieee8021PbCepTable_sets;
	uint ieee8021PbCepTable_request;
	uint ieee8021PbCepTable_refs;
	uint ieee8021PbCepTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	ulong ieee8021PbCepCComponentId;	/* ReadOnly */
	ulong ieee8021PbCepCepPortNumber;	/* ReadOnly */
	long ieee8021PbCepRowStatus;	/* Create */
};
struct ieee8021PbRcapTable_data {
	struct ieee8021PbRcapTable_data *ieee8021PbRcapTable_old;
	uint ieee8021PbRcapTable_rsvs;
	uint ieee8021PbRcapTable_tsts;
	uint ieee8021PbRcapTable_sets;
	uint ieee8021PbRcapTable_request;
	uint ieee8021PbRcapTable_refs;
	uint ieee8021PbRcapTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	ulong ieee8021PbRcapSComponentId;	/* ReadOnly */
	ulong ieee8021PbRcapPortNumber;	/* ReadOnly */
	long ieee8021PbRcapRowStatus;	/* Create */
};
struct ieee8021PbInternalInterfaceTable_data {
	struct ieee8021PbInternalInterfaceTable_data *ieee8021PbInternalInterfaceTable_old;
	uint ieee8021PbInternalInterfaceTable_rsvs;
	uint ieee8021PbInternalInterfaceTable_tsts;
	uint ieee8021PbInternalInterfaceTable_sets;
	uint ieee8021PbInternalInterfaceTable_request;
	uint ieee8021PbInternalInterfaceTable_refs;
	uint ieee8021PbInternalInterfaceTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021PbTiExternalSVid;	/* NoAccess */
	ulong ieee8021PbTiInternalPortNumber;	/* ReadOnly */
	long ieee8021PbTiInternalPortType;	/* Create */
	long ieee8021PbTiInternalSVid;	/* Create */
	long ieee8021PbTiRowStatus;	/* Create */
};

/* storage declarations */
extern struct ieee8021PbMib_data *ieee8021PbMibStorage;
extern struct header_complex_index *ieee8021PbVidTranslationTableStorage;
extern struct header_complex_index *ieee8021PbCVidRegistrationTableStorage;
extern struct header_complex_index *ieee8021PbEdgePortTableStorage;
extern struct header_complex_index *ieee8021PbServicePriorityRegenerationTableStorage;
extern struct header_complex_index *ieee8021PbCnpTableStorage;
extern struct header_complex_index *ieee8021PbPnpTableStorage;
extern struct header_complex_index *ieee8021PbCepTableStorage;
extern struct header_complex_index *ieee8021PbRcapTableStorage;
extern struct header_complex_index *ieee8021PbInternalInterfaceTableStorage;

/* enum definitions from the covered mib sections */

#define IEEE8021PBCVIDREGISTRATIONUNTAGGEDPEP_TRUE 1
#define IEEE8021PBCVIDREGISTRATIONUNTAGGEDPEP_FALSE 2

#define IEEE8021PBCVIDREGISTRATIONUNTAGGEDCEP_TRUE 1
#define IEEE8021PBCVIDREGISTRATIONUNTAGGEDCEP_FALSE 2

#define IEEE8021PBEDGEPORTACCEPTABLEFRAMETYPES_ADMITALL 1
#define IEEE8021PBEDGEPORTACCEPTABLEFRAMETYPES_ADMITUNTAGGEDANDPRIORITY 2
#define IEEE8021PBEDGEPORTACCEPTABLEFRAMETYPES_ADMITTAGGED 3

#define IEEE8021PBEDGEPORTENABLEINGRESSFILTERING_TRUE 1
#define IEEE8021PBEDGEPORTENABLEINGRESSFILTERING_FALSE 2

#define IEEE8021PBTIINTERNALPORTTYPE_NONE        1
#define IEEE8021PBTIINTERNALPORTTYPE_CUSTOMERVLANPORT 2
#define IEEE8021PBTIINTERNALPORTTYPE_PROVIDERNETWORKPORT 3
#define IEEE8021PBTIINTERNALPORTTYPE_CUSTOMERNETWORKPORT 4
#define IEEE8021PBTIINTERNALPORTTYPE_CUSTOMEREDGEPORT 5
#define IEEE8021PBTIINTERNALPORTTYPE_CUSTOMERBACKBONEPORT 6
#define IEEE8021PBTIINTERNALPORTTYPE_VIRTUALINSTANCEPORT 7
#define IEEE8021PBTIINTERNALPORTTYPE_DBRIDGEPORT 8
#define IEEE8021PBTIINTERNALPORTTYPE_REMOTECUSTOMERACCESSPORT 9
#define IEEE8021PBTIINTERNALPORTTYPE_STATIONFACINGBRIDGEPORT 10
#define IEEE8021PBTIINTERNALPORTTYPE_UPLINKACCESSPORT 11
#define IEEE8021PBTIINTERNALPORTTYPE_UPLINKRELAYPORT 12

/* notifications */

/* scalars accessible only for notify */

/* object id definitions */
extern oid ieee8021PbVidTranslationGroup_oid[11];
extern oid ieee8021PbCVidRegistrationGroup_oid[11];
extern oid ieee8021PbEdgePortGroup_oid[11];
extern oid ieee8021PbServicePriorityRegenerationGroup_oid[11];
extern oid ieee8021PbDynamicCnpGroup_oid[11];
extern oid ieee8021PbDynamicPepGroup_oid[11];
extern oid ieee8021PbDynamicCepGroup_oid[11];
extern oid ieee8021PbDynamicRcapGroup_oid[11];
extern oid ieee8021PbInternalInterfaceGroup_oid[11];
extern oid ieee8021PbCompliance_oid[11];

/* function prototypes */
/* trap function prototypes */

/* variable function prototypes */
void init_ieee8021PbMib(void);
void deinit_ieee8021PbMib(void);
int term_ieee8021PbMib(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_ieee8021PbMib;
struct ieee8021PbMib_data *ieee8021PbMib_create(void);
struct ieee8021PbMib_data *ieee8021PbMib_duplicate(struct ieee8021PbMib_data *);
int ieee8021PbMib_destroy(struct ieee8021PbMib_data **);
int ieee8021PbMib_add(struct ieee8021PbMib_data *);
void parse_ieee8021PbMib(const char *, char *);
SNMPCallback store_ieee8021PbMib;
void refresh_ieee8021PbMib(int);
FindVarMethod var_ieee8021PbVidTranslationTable;
struct ieee8021PbVidTranslationTable_data *ieee8021PbVidTranslationTable_create(void);
struct ieee8021PbVidTranslationTable_data *ieee8021PbVidTranslationTable_duplicate(struct ieee8021PbVidTranslationTable_data *);
int ieee8021PbVidTranslationTable_destroy(struct ieee8021PbVidTranslationTable_data **);
int ieee8021PbVidTranslationTable_add(struct ieee8021PbVidTranslationTable_data *);
int ieee8021PbVidTranslationTable_del(struct ieee8021PbVidTranslationTable_data *);
void parse_ieee8021PbVidTranslationTable(const char *, char *);
SNMPCallback store_ieee8021PbVidTranslationTable;
void refresh_ieee8021PbVidTranslationTable(int);
FindVarMethod var_ieee8021PbCVidRegistrationTable;
struct ieee8021PbCVidRegistrationTable_data *ieee8021PbCVidRegistrationTable_create(void);
struct ieee8021PbCVidRegistrationTable_data *ieee8021PbCVidRegistrationTable_duplicate(struct ieee8021PbCVidRegistrationTable_data *);
int ieee8021PbCVidRegistrationTable_destroy(struct ieee8021PbCVidRegistrationTable_data **);
int ieee8021PbCVidRegistrationTable_add(struct ieee8021PbCVidRegistrationTable_data *);
int ieee8021PbCVidRegistrationTable_del(struct ieee8021PbCVidRegistrationTable_data *);
void parse_ieee8021PbCVidRegistrationTable(const char *, char *);
SNMPCallback store_ieee8021PbCVidRegistrationTable;
void refresh_ieee8021PbCVidRegistrationTable(int);
FindVarMethod var_ieee8021PbEdgePortTable;
struct ieee8021PbEdgePortTable_data *ieee8021PbEdgePortTable_create(void);
struct ieee8021PbEdgePortTable_data *ieee8021PbEdgePortTable_duplicate(struct ieee8021PbEdgePortTable_data *);
int ieee8021PbEdgePortTable_destroy(struct ieee8021PbEdgePortTable_data **);
int ieee8021PbEdgePortTable_add(struct ieee8021PbEdgePortTable_data *);
int ieee8021PbEdgePortTable_del(struct ieee8021PbEdgePortTable_data *);
void parse_ieee8021PbEdgePortTable(const char *, char *);
SNMPCallback store_ieee8021PbEdgePortTable;
void refresh_ieee8021PbEdgePortTable(int);
FindVarMethod var_ieee8021PbServicePriorityRegenerationTable;
struct ieee8021PbServicePriorityRegenerationTable_data *ieee8021PbServicePriorityRegenerationTable_create(void);
struct ieee8021PbServicePriorityRegenerationTable_data *ieee8021PbServicePriorityRegenerationTable_duplicate(struct ieee8021PbServicePriorityRegenerationTable_data *);
int ieee8021PbServicePriorityRegenerationTable_destroy(struct ieee8021PbServicePriorityRegenerationTable_data **);
int ieee8021PbServicePriorityRegenerationTable_add(struct ieee8021PbServicePriorityRegenerationTable_data *);
int ieee8021PbServicePriorityRegenerationTable_del(struct ieee8021PbServicePriorityRegenerationTable_data *);
void parse_ieee8021PbServicePriorityRegenerationTable(const char *, char *);
SNMPCallback store_ieee8021PbServicePriorityRegenerationTable;
void refresh_ieee8021PbServicePriorityRegenerationTable(int);
FindVarMethod var_ieee8021PbCnpTable;
struct ieee8021PbCnpTable_data *ieee8021PbCnpTable_create(void);
struct ieee8021PbCnpTable_data *ieee8021PbCnpTable_duplicate(struct ieee8021PbCnpTable_data *);
int ieee8021PbCnpTable_destroy(struct ieee8021PbCnpTable_data **);
int ieee8021PbCnpTable_add(struct ieee8021PbCnpTable_data *);
int ieee8021PbCnpTable_del(struct ieee8021PbCnpTable_data *);
void parse_ieee8021PbCnpTable(const char *, char *);
SNMPCallback store_ieee8021PbCnpTable;
void refresh_ieee8021PbCnpTable(int);
FindVarMethod var_ieee8021PbPnpTable;
struct ieee8021PbPnpTable_data *ieee8021PbPnpTable_create(void);
struct ieee8021PbPnpTable_data *ieee8021PbPnpTable_duplicate(struct ieee8021PbPnpTable_data *);
int ieee8021PbPnpTable_destroy(struct ieee8021PbPnpTable_data **);
int ieee8021PbPnpTable_add(struct ieee8021PbPnpTable_data *);
int ieee8021PbPnpTable_del(struct ieee8021PbPnpTable_data *);
void parse_ieee8021PbPnpTable(const char *, char *);
SNMPCallback store_ieee8021PbPnpTable;
void refresh_ieee8021PbPnpTable(int);
FindVarMethod var_ieee8021PbCepTable;
struct ieee8021PbCepTable_data *ieee8021PbCepTable_create(void);
struct ieee8021PbCepTable_data *ieee8021PbCepTable_duplicate(struct ieee8021PbCepTable_data *);
int ieee8021PbCepTable_destroy(struct ieee8021PbCepTable_data **);
int ieee8021PbCepTable_add(struct ieee8021PbCepTable_data *);
int ieee8021PbCepTable_del(struct ieee8021PbCepTable_data *);
void parse_ieee8021PbCepTable(const char *, char *);
SNMPCallback store_ieee8021PbCepTable;
void refresh_ieee8021PbCepTable(int);
FindVarMethod var_ieee8021PbRcapTable;
struct ieee8021PbRcapTable_data *ieee8021PbRcapTable_create(void);
struct ieee8021PbRcapTable_data *ieee8021PbRcapTable_duplicate(struct ieee8021PbRcapTable_data *);
int ieee8021PbRcapTable_destroy(struct ieee8021PbRcapTable_data **);
int ieee8021PbRcapTable_add(struct ieee8021PbRcapTable_data *);
int ieee8021PbRcapTable_del(struct ieee8021PbRcapTable_data *);
void parse_ieee8021PbRcapTable(const char *, char *);
SNMPCallback store_ieee8021PbRcapTable;
void refresh_ieee8021PbRcapTable(int);
FindVarMethod var_ieee8021PbInternalInterfaceTable;
struct ieee8021PbInternalInterfaceTable_data *ieee8021PbInternalInterfaceTable_create(void);
struct ieee8021PbInternalInterfaceTable_data *ieee8021PbInternalInterfaceTable_duplicate(struct ieee8021PbInternalInterfaceTable_data *);
int ieee8021PbInternalInterfaceTable_destroy(struct ieee8021PbInternalInterfaceTable_data **);
int ieee8021PbInternalInterfaceTable_add(struct ieee8021PbInternalInterfaceTable_data *);
int ieee8021PbInternalInterfaceTable_del(struct ieee8021PbInternalInterfaceTable_data *);
void parse_ieee8021PbInternalInterfaceTable(const char *, char *);
SNMPCallback store_ieee8021PbInternalInterfaceTable;
void refresh_ieee8021PbInternalInterfaceTable(int);

WriteMethod write_ieee8021PbVidTranslationRelayVid;
WriteMethod write_ieee8021PbVidTranslationRowStatus;
WriteMethod write_ieee8021PbCVidRegistrationSVid;
WriteMethod write_ieee8021PbCVidRegistrationUntaggedPep;
WriteMethod write_ieee8021PbCVidRegistrationUntaggedCep;
WriteMethod write_ieee8021PbCVidRegistrationRowStatus;
WriteMethod write_ieee8021PbEdgePortPVID;
WriteMethod write_ieee8021PbEdgePortDefaultUserPriority;
WriteMethod write_ieee8021PbEdgePortAcceptableFrameTypes;
WriteMethod write_ieee8021PbEdgePortEnableIngressFiltering;
WriteMethod write_ieee8021PbServicePriorityRegenerationRegeneratedPriority;
WriteMethod write_ieee8021PbCnpCComponentId;
WriteMethod write_ieee8021PbCnpSVid;
WriteMethod write_ieee8021PbCnpRowStatus;
WriteMethod write_ieee8021PbPnpRowStatus;
WriteMethod write_ieee8021PbCepRowStatus;
WriteMethod write_ieee8021PbRcapRowStatus;
WriteMethod write_ieee8021PbTiInternalPortType;
WriteMethod write_ieee8021PbTiInternalSVid;
WriteMethod write_ieee8021PbTiRowStatus;
#endif				/* __LOCAL_IEEE8021PBMIB_H__ */
