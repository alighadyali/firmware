/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Thu Jul 26 18:56:24 2018. */

#ifndef PB_PARTICLE_CTRL_NETWORK_PB_H_INCLUDED
#define PB_PARTICLE_CTRL_NETWORK_PB_H_INCLUDED
#include <pb.h>

#include "extensions.pb.h"

#include "common.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _particle_ctrl_NetworkState {
    particle_ctrl_NetworkState_NETWORK_STATUS_NONE = 0,
    particle_ctrl_NetworkState_DOWN = 1,
    particle_ctrl_NetworkState_UP = 2
} particle_ctrl_NetworkState;
#define _particle_ctrl_NetworkState_MIN particle_ctrl_NetworkState_NETWORK_STATUS_NONE
#define _particle_ctrl_NetworkState_MAX particle_ctrl_NetworkState_UP
#define _particle_ctrl_NetworkState_ARRAYSIZE ((particle_ctrl_NetworkState)(particle_ctrl_NetworkState_UP+1))

typedef enum _particle_ctrl_InterfaceFlag {
    particle_ctrl_InterfaceFlag_IFF_NONE = 0,
    particle_ctrl_InterfaceFlag_IFF_UP = 1,
    particle_ctrl_InterfaceFlag_IFF_BROADCAST = 2,
    particle_ctrl_InterfaceFlag_IFF_DEBUG = 4,
    particle_ctrl_InterfaceFlag_IFF_LOOPBACK = 8,
    particle_ctrl_InterfaceFlag_IFF_POINTTOPOINT = 16,
    particle_ctrl_InterfaceFlag_IFF_RUNNING = 64,
    particle_ctrl_InterfaceFlag_IFF_LOWER_UP = 64,
    particle_ctrl_InterfaceFlag_IFF_NOARP = 128,
    particle_ctrl_InterfaceFlag_IFF_PROMISC = 256,
    particle_ctrl_InterfaceFlag_IFF_ALLMULTI = 512,
    particle_ctrl_InterfaceFlag_IFF_MULTICAST = 32768,
    particle_ctrl_InterfaceFlag_IFF_NOND6 = 65536
} particle_ctrl_InterfaceFlag;
#define _particle_ctrl_InterfaceFlag_MIN particle_ctrl_InterfaceFlag_IFF_NONE
#define _particle_ctrl_InterfaceFlag_MAX particle_ctrl_InterfaceFlag_IFF_NOND6
#define _particle_ctrl_InterfaceFlag_ARRAYSIZE ((particle_ctrl_InterfaceFlag)(particle_ctrl_InterfaceFlag_IFF_NOND6+1))

typedef enum _particle_ctrl_InterfaceExtFlag {
    particle_ctrl_InterfaceExtFlag_IFXF_NONE = 0,
    particle_ctrl_InterfaceExtFlag_IFXF_WOL = 16,
    particle_ctrl_InterfaceExtFlag_IFXF_AUTOCONF6 = 32,
    particle_ctrl_InterfaceExtFlag_IFXF_DHCP = 65536,
    particle_ctrl_InterfaceExtFlag_IFXF_DHCP6 = 131072,
    particle_ctrl_InterfaceExtFlag_IFXF_AUTOIP = 262144
} particle_ctrl_InterfaceExtFlag;
#define _particle_ctrl_InterfaceExtFlag_MIN particle_ctrl_InterfaceExtFlag_IFXF_NONE
#define _particle_ctrl_InterfaceExtFlag_MAX particle_ctrl_InterfaceExtFlag_IFXF_AUTOIP
#define _particle_ctrl_InterfaceExtFlag_ARRAYSIZE ((particle_ctrl_InterfaceExtFlag)(particle_ctrl_InterfaceExtFlag_IFXF_AUTOIP+1))

typedef enum _particle_ctrl_InterfaceType {
    particle_ctrl_InterfaceType_INVALID_INTERFACE_TYPE = 0,
    particle_ctrl_InterfaceType_LOOPBACK = 1,
    particle_ctrl_InterfaceType_THREAD = 2,
    particle_ctrl_InterfaceType_ETHERNET = 4,
    particle_ctrl_InterfaceType_WIFI = 8,
    particle_ctrl_InterfaceType_PPP = 16
} particle_ctrl_InterfaceType;
#define _particle_ctrl_InterfaceType_MIN particle_ctrl_InterfaceType_INVALID_INTERFACE_TYPE
#define _particle_ctrl_InterfaceType_MAX particle_ctrl_InterfaceType_PPP
#define _particle_ctrl_InterfaceType_ARRAYSIZE ((particle_ctrl_InterfaceType)(particle_ctrl_InterfaceType_PPP+1))

typedef enum _particle_ctrl_IPConfiguration_Type {
    particle_ctrl_IPConfiguration_Type_NONE = 0,
    particle_ctrl_IPConfiguration_Type_DHCP = 1,
    particle_ctrl_IPConfiguration_Type_STATIC = 2
} particle_ctrl_IPConfiguration_Type;
#define _particle_ctrl_IPConfiguration_Type_MIN particle_ctrl_IPConfiguration_Type_NONE
#define _particle_ctrl_IPConfiguration_Type_MAX particle_ctrl_IPConfiguration_Type_STATIC
#define _particle_ctrl_IPConfiguration_Type_ARRAYSIZE ((particle_ctrl_IPConfiguration_Type)(particle_ctrl_IPConfiguration_Type_STATIC+1))

/* Struct definitions */
typedef struct _particle_ctrl_DNSConfiguration {
    pb_callback_t servers;
/* @@protoc_insertion_point(struct:particle_ctrl_DNSConfiguration) */
} particle_ctrl_DNSConfiguration;

typedef struct _particle_ctrl_GetInterfaceListReply {
    pb_callback_t interfaces;
/* @@protoc_insertion_point(struct:particle_ctrl_GetInterfaceListReply) */
} particle_ctrl_GetInterfaceListReply;

typedef struct _particle_ctrl_GetInterfaceListRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_GetInterfaceListRequest) */
} particle_ctrl_GetInterfaceListRequest;

typedef struct _particle_ctrl_Ipv6Config {
    pb_callback_t addresses;
/* @@protoc_insertion_point(struct:particle_ctrl_Ipv6Config) */
} particle_ctrl_Ipv6Config;

typedef struct _particle_ctrl_NetworkSetConfigurationReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_NetworkSetConfigurationReply) */
} particle_ctrl_NetworkSetConfigurationReply;

typedef struct _particle_ctrl_GetInterfaceRequest {
    uint32_t index;
/* @@protoc_insertion_point(struct:particle_ctrl_GetInterfaceRequest) */
} particle_ctrl_GetInterfaceRequest;

typedef struct _particle_ctrl_IPConfiguration {
    particle_ctrl_IPConfiguration_Type type;
    particle_ctrl_IPAddress address;
    particle_ctrl_IPAddress netmask;
    particle_ctrl_IPAddress gateway;
    particle_ctrl_IPAddress dhcp_server;
    pb_callback_t hostname;
/* @@protoc_insertion_point(struct:particle_ctrl_IPConfiguration) */
} particle_ctrl_IPConfiguration;

typedef struct _particle_ctrl_InterfaceEntry {
    uint32_t index;
    pb_callback_t name;
    particle_ctrl_InterfaceType type;
/* @@protoc_insertion_point(struct:particle_ctrl_InterfaceEntry) */
} particle_ctrl_InterfaceEntry;

typedef struct _particle_ctrl_Ipv4Address {
    uint32_t address;
/* @@protoc_insertion_point(struct:particle_ctrl_Ipv4Address) */
} particle_ctrl_Ipv4Address;

typedef PB_BYTES_ARRAY_T(16) particle_ctrl_Ipv6Address_address_t;
typedef struct _particle_ctrl_Ipv6Address {
    particle_ctrl_Ipv6Address_address_t address;
/* @@protoc_insertion_point(struct:particle_ctrl_Ipv6Address) */
} particle_ctrl_Ipv6Address;

typedef struct _particle_ctrl_NetworkGetConfigurationRequest {
    int32_t interface;
/* @@protoc_insertion_point(struct:particle_ctrl_NetworkGetConfigurationRequest) */
} particle_ctrl_NetworkGetConfigurationRequest;

typedef struct _particle_ctrl_NetworkGetStatusRequest {
    int32_t interface;
/* @@protoc_insertion_point(struct:particle_ctrl_NetworkGetStatusRequest) */
} particle_ctrl_NetworkGetStatusRequest;

typedef struct _particle_ctrl_IpAddress {
    pb_size_t which_address;
    union {
        particle_ctrl_Ipv4Address ipv4;
        particle_ctrl_Ipv6Address ipv6;
    } address;
/* @@protoc_insertion_point(struct:particle_ctrl_IpAddress) */
} particle_ctrl_IpAddress;

typedef struct _particle_ctrl_Ipv4Config {
    pb_callback_t addresses;
    particle_ctrl_Ipv4Address peer;
    particle_ctrl_Ipv4Address gateway;
/* @@protoc_insertion_point(struct:particle_ctrl_Ipv4Config) */
} particle_ctrl_Ipv4Config;

typedef PB_BYTES_ARRAY_T(6) particle_ctrl_NetworkConfiguration_mac_t;
typedef struct _particle_ctrl_NetworkConfiguration {
    int32_t interface;
    particle_ctrl_NetworkState state;
    pb_callback_t name;
    particle_ctrl_NetworkConfiguration_mac_t mac;
    particle_ctrl_IPConfiguration ipconfig;
    particle_ctrl_DNSConfiguration dnsconfig;
/* @@protoc_insertion_point(struct:particle_ctrl_NetworkConfiguration) */
} particle_ctrl_NetworkConfiguration;

typedef PB_BYTES_ARRAY_T(8) particle_ctrl_Interface_hw_address_t;
typedef struct _particle_ctrl_Interface {
    uint32_t index;
    pb_callback_t name;
    particle_ctrl_InterfaceType type;
    uint32_t flags;
    uint32_t ext_flags;
    particle_ctrl_Ipv4Config ipv4_config;
    particle_ctrl_Ipv6Config ipv6_config;
    particle_ctrl_Interface_hw_address_t hw_address;
    uint32_t mtu;
    uint32_t metric;
/* @@protoc_insertion_point(struct:particle_ctrl_Interface) */
} particle_ctrl_Interface;

typedef struct _particle_ctrl_InterfaceAddress {
    particle_ctrl_IpAddress address;
    uint32_t prefix_length;
/* @@protoc_insertion_point(struct:particle_ctrl_InterfaceAddress) */
} particle_ctrl_InterfaceAddress;

typedef struct _particle_ctrl_NetworkGetConfigurationReply {
    particle_ctrl_NetworkConfiguration config;
/* @@protoc_insertion_point(struct:particle_ctrl_NetworkGetConfigurationReply) */
} particle_ctrl_NetworkGetConfigurationReply;

typedef struct _particle_ctrl_NetworkGetStatusReply {
    particle_ctrl_NetworkConfiguration config;
/* @@protoc_insertion_point(struct:particle_ctrl_NetworkGetStatusReply) */
} particle_ctrl_NetworkGetStatusReply;

typedef struct _particle_ctrl_NetworkSetConfigurationRequest {
    particle_ctrl_NetworkConfiguration config;
/* @@protoc_insertion_point(struct:particle_ctrl_NetworkSetConfigurationRequest) */
} particle_ctrl_NetworkSetConfigurationRequest;

typedef struct _particle_ctrl_GetInterfaceReply {
    particle_ctrl_Interface interface;
/* @@protoc_insertion_point(struct:particle_ctrl_GetInterfaceReply) */
} particle_ctrl_GetInterfaceReply;

/* Default values for struct fields */

/* Initializer values for message structs */
#define particle_ctrl_NetworkGetStatusRequest_init_default {0}
#define particle_ctrl_NetworkGetStatusReply_init_default {particle_ctrl_NetworkConfiguration_init_default}
#define particle_ctrl_NetworkGetConfigurationRequest_init_default {0}
#define particle_ctrl_NetworkGetConfigurationReply_init_default {particle_ctrl_NetworkConfiguration_init_default}
#define particle_ctrl_NetworkSetConfigurationRequest_init_default {particle_ctrl_NetworkConfiguration_init_default}
#define particle_ctrl_NetworkSetConfigurationReply_init_default {0}
#define particle_ctrl_IPConfiguration_init_default {(particle_ctrl_IPConfiguration_Type)0, particle_ctrl_IPAddress_init_default, particle_ctrl_IPAddress_init_default, particle_ctrl_IPAddress_init_default, particle_ctrl_IPAddress_init_default, {{NULL}, NULL}}
#define particle_ctrl_DNSConfiguration_init_default {{{NULL}, NULL}}
#define particle_ctrl_NetworkConfiguration_init_default {0, (particle_ctrl_NetworkState)0, {{NULL}, NULL}, {0, {0}}, particle_ctrl_IPConfiguration_init_default, particle_ctrl_DNSConfiguration_init_default}
#define particle_ctrl_Ipv4Address_init_default   {0}
#define particle_ctrl_Ipv6Address_init_default   {{0, {0}}}
#define particle_ctrl_IpAddress_init_default     {0, {particle_ctrl_Ipv4Address_init_default}}
#define particle_ctrl_InterfaceAddress_init_default {particle_ctrl_IpAddress_init_default, 0}
#define particle_ctrl_Ipv4Config_init_default    {{{NULL}, NULL}, particle_ctrl_Ipv4Address_init_default, particle_ctrl_Ipv4Address_init_default}
#define particle_ctrl_Ipv6Config_init_default    {{{NULL}, NULL}}
#define particle_ctrl_Interface_init_default     {0, {{NULL}, NULL}, (particle_ctrl_InterfaceType)0, 0, 0, particle_ctrl_Ipv4Config_init_default, particle_ctrl_Ipv6Config_init_default, {0, {0}}, 0, 0}
#define particle_ctrl_InterfaceEntry_init_default {0, {{NULL}, NULL}, (particle_ctrl_InterfaceType)0}
#define particle_ctrl_GetInterfaceListRequest_init_default {0}
#define particle_ctrl_GetInterfaceListReply_init_default {{{NULL}, NULL}}
#define particle_ctrl_GetInterfaceRequest_init_default {0}
#define particle_ctrl_GetInterfaceReply_init_default {particle_ctrl_Interface_init_default}
#define particle_ctrl_NetworkGetStatusRequest_init_zero {0}
#define particle_ctrl_NetworkGetStatusReply_init_zero {particle_ctrl_NetworkConfiguration_init_zero}
#define particle_ctrl_NetworkGetConfigurationRequest_init_zero {0}
#define particle_ctrl_NetworkGetConfigurationReply_init_zero {particle_ctrl_NetworkConfiguration_init_zero}
#define particle_ctrl_NetworkSetConfigurationRequest_init_zero {particle_ctrl_NetworkConfiguration_init_zero}
#define particle_ctrl_NetworkSetConfigurationReply_init_zero {0}
#define particle_ctrl_IPConfiguration_init_zero  {(particle_ctrl_IPConfiguration_Type)0, particle_ctrl_IPAddress_init_zero, particle_ctrl_IPAddress_init_zero, particle_ctrl_IPAddress_init_zero, particle_ctrl_IPAddress_init_zero, {{NULL}, NULL}}
#define particle_ctrl_DNSConfiguration_init_zero {{{NULL}, NULL}}
#define particle_ctrl_NetworkConfiguration_init_zero {0, (particle_ctrl_NetworkState)0, {{NULL}, NULL}, {0, {0}}, particle_ctrl_IPConfiguration_init_zero, particle_ctrl_DNSConfiguration_init_zero}
#define particle_ctrl_Ipv4Address_init_zero      {0}
#define particle_ctrl_Ipv6Address_init_zero      {{0, {0}}}
#define particle_ctrl_IpAddress_init_zero        {0, {particle_ctrl_Ipv4Address_init_zero}}
#define particle_ctrl_InterfaceAddress_init_zero {particle_ctrl_IpAddress_init_zero, 0}
#define particle_ctrl_Ipv4Config_init_zero       {{{NULL}, NULL}, particle_ctrl_Ipv4Address_init_zero, particle_ctrl_Ipv4Address_init_zero}
#define particle_ctrl_Ipv6Config_init_zero       {{{NULL}, NULL}}
#define particle_ctrl_Interface_init_zero        {0, {{NULL}, NULL}, (particle_ctrl_InterfaceType)0, 0, 0, particle_ctrl_Ipv4Config_init_zero, particle_ctrl_Ipv6Config_init_zero, {0, {0}}, 0, 0}
#define particle_ctrl_InterfaceEntry_init_zero   {0, {{NULL}, NULL}, (particle_ctrl_InterfaceType)0}
#define particle_ctrl_GetInterfaceListRequest_init_zero {0}
#define particle_ctrl_GetInterfaceListReply_init_zero {{{NULL}, NULL}}
#define particle_ctrl_GetInterfaceRequest_init_zero {0}
#define particle_ctrl_GetInterfaceReply_init_zero {particle_ctrl_Interface_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define particle_ctrl_DNSConfiguration_servers_tag 1
#define particle_ctrl_GetInterfaceListReply_interfaces_tag 1
#define particle_ctrl_Ipv6Config_addresses_tag   1
#define particle_ctrl_GetInterfaceRequest_index_tag 1
#define particle_ctrl_IPConfiguration_type_tag   1
#define particle_ctrl_IPConfiguration_address_tag 2
#define particle_ctrl_IPConfiguration_netmask_tag 3
#define particle_ctrl_IPConfiguration_gateway_tag 4
#define particle_ctrl_IPConfiguration_dhcp_server_tag 5
#define particle_ctrl_IPConfiguration_hostname_tag 6
#define particle_ctrl_InterfaceEntry_index_tag   1
#define particle_ctrl_InterfaceEntry_name_tag    2
#define particle_ctrl_InterfaceEntry_type_tag    3
#define particle_ctrl_Ipv4Address_address_tag    1
#define particle_ctrl_Ipv6Address_address_tag    1
#define particle_ctrl_NetworkGetConfigurationRequest_interface_tag 1
#define particle_ctrl_NetworkGetStatusRequest_interface_tag 1
#define particle_ctrl_IpAddress_ipv4_tag         1
#define particle_ctrl_IpAddress_ipv6_tag         2
#define particle_ctrl_Ipv4Config_addresses_tag   1
#define particle_ctrl_Ipv4Config_peer_tag        2
#define particle_ctrl_Ipv4Config_gateway_tag     3
#define particle_ctrl_NetworkConfiguration_interface_tag 1
#define particle_ctrl_NetworkConfiguration_state_tag 2
#define particle_ctrl_NetworkConfiguration_name_tag 3
#define particle_ctrl_NetworkConfiguration_mac_tag 4
#define particle_ctrl_NetworkConfiguration_ipconfig_tag 5
#define particle_ctrl_NetworkConfiguration_dnsconfig_tag 6
#define particle_ctrl_Interface_index_tag        1
#define particle_ctrl_Interface_name_tag         2
#define particle_ctrl_Interface_type_tag         3
#define particle_ctrl_Interface_flags_tag        4
#define particle_ctrl_Interface_ext_flags_tag    5
#define particle_ctrl_Interface_ipv4_config_tag  6
#define particle_ctrl_Interface_ipv6_config_tag  7
#define particle_ctrl_Interface_hw_address_tag   8
#define particle_ctrl_Interface_mtu_tag          9
#define particle_ctrl_Interface_metric_tag       10
#define particle_ctrl_InterfaceAddress_address_tag 1
#define particle_ctrl_InterfaceAddress_prefix_length_tag 2
#define particle_ctrl_NetworkGetConfigurationReply_config_tag 1
#define particle_ctrl_NetworkGetStatusReply_config_tag 1
#define particle_ctrl_NetworkSetConfigurationRequest_config_tag 1
#define particle_ctrl_GetInterfaceReply_interface_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t particle_ctrl_NetworkGetStatusRequest_fields[2];
extern const pb_field_t particle_ctrl_NetworkGetStatusReply_fields[2];
extern const pb_field_t particle_ctrl_NetworkGetConfigurationRequest_fields[2];
extern const pb_field_t particle_ctrl_NetworkGetConfigurationReply_fields[2];
extern const pb_field_t particle_ctrl_NetworkSetConfigurationRequest_fields[2];
extern const pb_field_t particle_ctrl_NetworkSetConfigurationReply_fields[1];
extern const pb_field_t particle_ctrl_IPConfiguration_fields[7];
extern const pb_field_t particle_ctrl_DNSConfiguration_fields[2];
extern const pb_field_t particle_ctrl_NetworkConfiguration_fields[7];
extern const pb_field_t particle_ctrl_Ipv4Address_fields[2];
extern const pb_field_t particle_ctrl_Ipv6Address_fields[2];
extern const pb_field_t particle_ctrl_IpAddress_fields[3];
extern const pb_field_t particle_ctrl_InterfaceAddress_fields[3];
extern const pb_field_t particle_ctrl_Ipv4Config_fields[4];
extern const pb_field_t particle_ctrl_Ipv6Config_fields[2];
extern const pb_field_t particle_ctrl_Interface_fields[11];
extern const pb_field_t particle_ctrl_InterfaceEntry_fields[4];
extern const pb_field_t particle_ctrl_GetInterfaceListRequest_fields[1];
extern const pb_field_t particle_ctrl_GetInterfaceListReply_fields[2];
extern const pb_field_t particle_ctrl_GetInterfaceRequest_fields[2];
extern const pb_field_t particle_ctrl_GetInterfaceReply_fields[2];

/* Maximum encoded size of messages (where known) */
#define particle_ctrl_NetworkGetStatusRequest_size 11
#define particle_ctrl_NetworkGetStatusReply_size (6 + particle_ctrl_NetworkConfiguration_size)
#define particle_ctrl_NetworkGetConfigurationRequest_size 11
#define particle_ctrl_NetworkGetConfigurationReply_size (6 + particle_ctrl_NetworkConfiguration_size)
#define particle_ctrl_NetworkSetConfigurationRequest_size (6 + particle_ctrl_NetworkConfiguration_size)
#define particle_ctrl_NetworkSetConfigurationReply_size 0
/* particle_ctrl_IPConfiguration_size depends on runtime parameters */
/* particle_ctrl_DNSConfiguration_size depends on runtime parameters */
/* particle_ctrl_NetworkConfiguration_size depends on runtime parameters */
#define particle_ctrl_Ipv4Address_size           5
#define particle_ctrl_Ipv6Address_size           18
#define particle_ctrl_IpAddress_size             20
#define particle_ctrl_InterfaceAddress_size      28
/* particle_ctrl_Ipv4Config_size depends on runtime parameters */
/* particle_ctrl_Ipv6Config_size depends on runtime parameters */
/* particle_ctrl_Interface_size depends on runtime parameters */
/* particle_ctrl_InterfaceEntry_size depends on runtime parameters */
#define particle_ctrl_GetInterfaceListRequest_size 0
/* particle_ctrl_GetInterfaceListReply_size depends on runtime parameters */
#define particle_ctrl_GetInterfaceRequest_size   6
#define particle_ctrl_GetInterfaceReply_size     (6 + particle_ctrl_Interface_size)

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define NETWORK_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
