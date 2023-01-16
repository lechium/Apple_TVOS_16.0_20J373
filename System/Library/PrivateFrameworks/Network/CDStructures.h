//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, NWConcrete_nw_activity, NWConcrete_nw_endpoint, NWConcrete_nw_endpoint_flow, NWConcrete_nw_endpoint_handler;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct description_cache {
    struct retained_ptr<NSString *> description;
    struct unfair_mutex mutex;
    unsigned char __pad[4];
};

struct ether_addr {
    unsigned char octet[6];
};

struct ifnet_stats_per_flow {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct in6_addr {
    union {
        unsigned char __u6_addr8[16];
        unsigned short __u6_addr16[8];
        unsigned int __u6_addr32[4];
    } __u6_addr;
};

struct in_addr;

struct ipv6_prefix {
    struct in6_addr ipv6_prefix;
    unsigned int prefix_len;
};

struct metadata_changed_registration_list_s {
    struct nw_connection_metadata_changed_registration *tqh_first;
    struct nw_connection_metadata_changed_registration **tqh_last;
};

struct necp_all_stats {
    union {
        struct necp_tcp_stats _field1;
        struct necp_udp_stats _field2;
        struct necp_quic_stats _field3;
    } _field1;
};

struct necp_basic_metadata {
    unsigned int _field1;
    unsigned int _field2;
};

struct necp_client_interface_option;

struct necp_client_result_estimated_throughput {
    unsigned char up;
    unsigned char down;
};

struct necp_client_result_interface {
    unsigned int generation;
    unsigned int index;
};

struct necp_client_result_netagent {
    unsigned int generation;
    unsigned char netagent_uuid[16];
};

struct necp_connection_probe_status {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct necp_extra_quic_metadata {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned char _field9[16];
};

struct necp_extra_tcp_metadata {
    struct necp_connection_probe_status _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
};

struct necp_quic_stats {
    struct necp_udp_stats _field1;
    struct necp_extra_quic_metadata _field2;
};

struct necp_stat_counts {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
};

struct necp_stats_hdr {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
};

struct necp_tcp_stats {
    struct necp_stats_hdr _field1;
    struct necp_stat_counts _field2;
    struct necp_basic_metadata _field3;
    struct necp_extra_tcp_metadata _field4;
};

struct necp_udp_stats {
    struct necp_stats_hdr _field1;
    struct necp_stat_counts _field2;
    struct necp_basic_metadata _field3;
};

struct netcore_stats_data_usage_snapshot {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
};

struct netcore_stats_network_event {
    int _field1;
    unsigned int _field2;
};

struct netcore_stats_tcp_cell_fallback_report {
    struct netcore_stats_network_event _field1[20];
    struct netcore_stats_data_usage_snapshot _field2[20];
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    _Bool _field7;
    unsigned char _field8[7];
};

struct netcore_stats_tcp_report {
    union {
        struct {
            struct netcore_stats_tcp_statistics_report _field1;
            struct netcore_stats_tcp_cell_fallback_report _field2;
            struct netcore_stats_tcp_statistics_report _field3[8];
            int _field4;
            unsigned int _field5;
        } _field1;
        struct nw_connection_report_s _field2;
    } _field1;
    _Bool _field2;
    _Bool _field3;
    unsigned char _field4[6];
};

struct netcore_stats_tcp_statistics_report {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    int _field34;
    int _field35;
    int _field36;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :4;
    unsigned char _field37[6];
};

struct nw_agent_resolve_handlers {
    int resolve_from_type;
    int resolve_to_type;
    CDUnknownBlockType start_resolve_handler;
    CDUnknownBlockType stop_resolve_handler;
};

struct nw_association_cache_entry;

struct nw_connection_metadata_changed_registration;

struct nw_connection_protocol_establishment_report_s {
    char _field1[32];
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    unsigned char _field5[4];
};

struct nw_connection_proxy_hop_s {
    char _field1[64];
    unsigned char _field2[0];
};

struct nw_connection_report_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    int _field44;
    int _field45;
    int _field46;
    int _field47;
    int _field48;
    int _field49;
    int _field50;
    int _field51;
    int _field52;
    int _field53;
    unsigned char _field54;
    unsigned char _field55;
    unsigned char _field56;
    unsigned char _field57[16];
    unsigned char _field58[16];
    unsigned char _field59[50][16];
    char _field60[256];
    char _field61[256];
    unsigned char _field62;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :7;
    unsigned char _field63[2];
    struct nw_connection_protocol_establishment_report_s _field64[10];
    struct nw_connection_proxy_hop_s _field65[2];
    unsigned char _field66[0];
};

struct nw_connection_throughput_monitor_s {
    unsigned long long current_bytes;
    unsigned long long current_time;
    unsigned long long last_bytes;
    unsigned long long last_time;
    void *timer;
    unsigned int minimum;
    unsigned char __pad[4];
};

struct nw_connection_timestamp_s {
    unsigned long long _field1;
    struct nw_endpoint_handler_event_s _field2;
    union {
        struct {
            unsigned short _field1;
            unsigned char _field2;
            unsigned char _field3;
        } _field1;
        struct {
            unsigned short _field1;
        } _field2;
    } _field3;
    unsigned char _field4[0];
};

struct nw_context_cache {
    struct _cache_entries_head {
        struct nw_association_cache_entry *_field1;
        struct nw_association_cache_entry **_field2;
    } _field1;
    struct _idle_cache_entries_head {
        struct nw_association_cache_entry *_field1;
        struct nw_association_cache_entry **_field2;
    } _field2;
    struct nw_hash_table *_field3;
    struct nw_hash_table *_field4;
    struct nw_hash_table *_field5;
    void *_field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct nw_context_globals {
    void *_field1;
    struct nw_timer_list_head _field2;
    struct nw_hash_table *_field3;
    unsigned long long _field4;
    struct os_unfair_lock_s _field5;
    struct os_unfair_lock_s _field6;
    struct os_unfair_lock_s _field7;
    struct nw_hash_table *_field8;
    void *_field9;
    void *_field10;
    unsigned long long _field11;
    id _field12;
    CDUnknownBlockType _field13;
    id _field14;
    id _field15;
    id _field16;
    id _field17;
    struct nw_mem_buffer_manager *_field18;
    struct nw_mem_buffer_manager *_field19;
    struct nw_mem_buffer_manager *_field20;
    struct nw_mem_buffer_manager *_field21;
    struct nw_mem_buffer_manager *_field22;
    struct nw_mem_buffer_manager *_field23;
    struct nw_mem_buffer_manager *_field24;
};

struct nw_data_transfer_path_report {
    struct nw_data_transfer_path_report_value total;
    struct nw_data_transfer_path_report_value incremental;
    NSObject *interface;
    unsigned char __pad[0];
};

struct nw_data_transfer_path_report_value {
    unsigned long long received_ip_packet_count;
    unsigned long long sent_ip_packet_count;
    unsigned long long received_transport_byte_count;
    unsigned long long received_transport_duplicate_byte_count;
    unsigned long long received_transport_out_of_order_byte_count;
    unsigned long long sent_transport_byte_count;
    unsigned long long sent_transport_retransmitted_byte_count;
    unsigned long long transport_smoothed_rtt_milliseconds;
    unsigned long long transport_minimum_rtt_milliseconds;
    unsigned long long transport_rtt_variance;
    unsigned long long transport_congestion_window;
    unsigned long long transport_slow_start_threshold;
    unsigned long long received_application_byte_count;
    unsigned long long sent_application_byte_count;
    unsigned char __pad[0];
};

struct nw_data_transfer_snapshot {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
};

struct nw_endpoint_alterative_s {
    struct {
        struct nw_endpoint_alterative_s *tqe_next;
        struct nw_endpoint_alterative_s **tqe_prev;
    } chain;
    NWConcrete_nw_endpoint *endpoint;
    NSObject *applicable_protocol;
};

struct nw_endpoint_handler_event_s {
    unsigned short domain;
    unsigned short event;
};

struct nw_flow_protocol {
    struct nw_protocol protocol;
    struct nw_listen_protocol listen_protocol;
    struct nw_protocol replay_protocol;
    NWConcrete_nw_endpoint_handler *handler;
    NWConcrete_nw_endpoint_flow *retained_flow;
    NSObject *parameters;
    NSObject *context;
    NSObject *write_requests;
    NSObject *initial_write_requests;
    NSObject *cloned_initial_write_requests;
    NSObject *read_requests;
    NSObject *last_output_context;
    NSObject *metadata;
    NSObject *input_metadata;
    NSObject *output_context;
    NSObject *input_contexts;
    NSObject *single_input_context;
    struct nw_frame_array_s pending_input_frames;
    struct nw_hash_table *candidate_output_handlers;
    NSObject *fast_open_frame;
    NSObject *final_read_list;
    NSObject *last_error;
    unsigned int initialized:1;
    unsigned int last_output_context_pending:1;
    unsigned int servicing_reads:1;
    unsigned int input_finished:1;
    unsigned int waiting_for_initial_read:1;
    unsigned int deferred_final_read:1;
    unsigned int delivered_final_read:1;
    unsigned int flow_unregistered:1;
    unsigned int flow_disconnected:1;
    unsigned int waiting_for_connected:1;
    unsigned int in_fast_open:1;
    unsigned int fast_open_frame_finalized:1;
    unsigned int unused:4;
    unsigned char __pad[6];
};

struct nw_frame;

struct nw_frame_array_s {
    struct nw_frame *tqh_first;
    struct nw_frame **tqh_last;
};

struct nw_hash_table;

struct nw_interface_details {
    struct nw_interface_signature ipv4_signature;
    struct nw_interface_signature ipv6_signature;
    unsigned int mtu;
    unsigned int tso_max_segment_size_v4;
    unsigned int tso_max_segment_size_v6;
    unsigned int ipv4_netmask;
    unsigned int ipv4_broadcast;
    unsigned char radio_type;
    unsigned int expensive:1;
    unsigned int constrained:1;
    unsigned int tx_start:1;
    unsigned int ack_priority:1;
    unsigned int carrier_aggregation:1;
    unsigned int multilayer_packet_logging:1;
    unsigned int has_netmask:1;
    unsigned int has_broadcast:1;
    unsigned int supports_multicast:1;
    unsigned int has_dns:1;
    unsigned int has_nat64:1;
    unsigned int ipv4_routable:1;
    unsigned int ipv6_routable:1;
    unsigned int __pad_bits:3;
    unsigned char ___pad[1];
};

struct nw_interface_signature {
    unsigned char signature[20];
    unsigned char signature_len;
    unsigned char ___pad[3];
};

struct nw_listen_protocol {
    struct nw_listen_protocol_callbacks *callbacks;
    struct nw_protocol *protocol_handler;
    void *protocol_handler_context;
    void *handle;
};

struct nw_listen_protocol_callbacks {
    CDUnknownFunctionPointerType new_flow;
    CDUnknownFunctionPointerType disconnected;
};

struct nw_mem_buffer_manager;

struct nw_parameters_extended_objects {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
    id _field16;
    id _field17;
};

struct nw_parameters_joinable_path_value {
    unsigned char attribution;
    unsigned char fallback_mode;
    unsigned int no_proxy:1;
    unsigned int no_transform:1;
    unsigned int use_awdl:1;
    unsigned int use_p2p:1;
    unsigned int no_fallback:1;
    unsigned int no_cellular_fallback:1;
    unsigned int no_wake_from_sleep:1;
    unsigned int prefer_no_proxy:1;
    unsigned int no_proxy_path_selection:1;
    unsigned int privacy_proxy_fail_closed:1;
    unsigned int privacy_proxy_fail_closed_for_unreachable_hosts:1;
    unsigned int prohibit_privacy_proxy:1;
    unsigned int fallback_applied:1;
    unsigned int proxy_applied:1;
    unsigned int system_proxy:1;
    unsigned int known_tracker:1;
    unsigned int third_party_web_content:1;
    unsigned int approved_app_domain:1;
    unsigned int __pad_bits:6;
};

struct nw_parameters_path_value {
    unsigned char proc_uuid[16];
    unsigned char e_proc_uuid[16];
    unsigned long long delegated_upid;
    unsigned int traffic_class;
    int pid;
    unsigned int uid;
    int required_interface_type;
    int required_interface_subtype;
    int multipath_service;
    int companion_preference;
    int companion_link_upgrade_preference;
    unsigned int prohibit_expensive_paths:1;
    unsigned int prohibit_constrained_paths:1;
    unsigned int prohibit_roaming:1;
    unsigned int discretionary:1;
    unsigned int allow_socket_access:1;
    unsigned int only_primary_requires_type:1;
    unsigned int __pad_bits:2;
};

struct nw_path_necp_result {
    unsigned int routing_result;
    union {
        unsigned int tunnel_interface_index;
        unsigned int scoped_interface_index;
        unsigned int flow_divert_control_unit;
        unsigned int filter_control_unit;
        unsigned int pass_flags;
        unsigned int drop_flags;
    } routing_result_parameter;
    unsigned int filter_control_unit;
    unsigned int service_action;
    unsigned char service_uuid[16];
    struct necp_client_result_netagent *netagents;
    struct necp_client_interface_option *interface_options;
    unsigned int service_flags;
    unsigned int service_data;
    unsigned int routed_interface_index;
    unsigned int direct_interface_index;
    unsigned int direct_interface_generation;
    unsigned int delegate_interface_index;
    unsigned int delegate_interface_generation;
    unsigned int policy_id;
    unsigned int num_interface_options;
    unsigned int num_netagents;
    unsigned int flow_divert_aggregate_unit;
    unsigned int padding;
};

struct nw_protocol {
    unsigned char flow_id[16];
    struct nw_protocol_identifier *identifier;
    struct nw_protocol_callbacks *callbacks;
    struct nw_protocol *output_handler;
    void *handle;
    struct nw_protocol *default_input_handler;
    void *output_handler_context;
};

struct nw_protocol_callbacks {
    CDUnknownFunctionPointerType add_input_handler;
    CDUnknownFunctionPointerType remove_input_handler;
    CDUnknownFunctionPointerType replace_input_handler;
    CDUnknownFunctionPointerType connect;
    CDUnknownFunctionPointerType disconnect;
    CDUnknownFunctionPointerType connected;
    CDUnknownFunctionPointerType disconnected;
    CDUnknownFunctionPointerType error;
    CDUnknownFunctionPointerType input_available;
    CDUnknownFunctionPointerType output_available;
    CDUnknownFunctionPointerType get_input_frames;
    CDUnknownFunctionPointerType get_output_frames;
    CDUnknownFunctionPointerType finalize_output_frames;
    CDUnknownFunctionPointerType link_state;
    CDUnknownFunctionPointerType get_parameters;
    CDUnknownFunctionPointerType get_path;
    CDUnknownFunctionPointerType get_local_endpoint;
    CDUnknownFunctionPointerType get_remote_endpoint;
    CDUnknownFunctionPointerType register_notification;
    CDUnknownFunctionPointerType unregister_notification;
    CDUnknownFunctionPointerType notify;
    CDUnknownFunctionPointerType updated_path;
    CDUnknownFunctionPointerType supports_external_data;
    CDUnknownFunctionPointerType input_finished;
    CDUnknownFunctionPointerType output_finished;
    CDUnknownFunctionPointerType get_output_local_endpoint;
    CDUnknownFunctionPointerType get_output_interface;
    CDUnknownFunctionPointerType waiting_for_output;
    CDUnknownFunctionPointerType copy_info;
    CDUnknownFunctionPointerType add_listen_handler;
    CDUnknownFunctionPointerType remove_listen_handler;
    CDUnknownFunctionPointerType get_message_properties;
    CDUnknownFunctionPointerType reset;
    CDUnknownFunctionPointerType input_flush;
};

struct nw_protocol_definition_common_state {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownBlockType _field11;
};

struct nw_protocol_definition_extended_state {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
    CDUnknownFunctionPointerType _field19;
    CDUnknownFunctionPointerType _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
    CDUnknownFunctionPointerType _field25;
    CDUnknownFunctionPointerType _field26;
    CDUnknownFunctionPointerType _field27;
    unsigned int _field28;
    unsigned int _field29;
};

struct nw_protocol_entry;

struct nw_protocol_entry_list {
    struct nw_protocol_entry *lh_first;
};

struct nw_protocol_identifier {
    char name[32];
    int level;
    int mapping;
};

struct nw_protocol_plugin_definition {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    id _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
};

struct nw_shoes_statistics {
    unsigned int ss_max_simultaneous_connections;
    unsigned int ss_total_connections;
};

struct nw_storage_chain {
    struct {
        struct nw_storage_chain *tqe_next;
        struct nw_storage_chain **tqe_prev;
    } entry;
};

struct nw_storage_provider {
    CDUnknownFunctionPointerType lookup;
    CDUnknownFunctionPointerType store;
    CDUnknownFunctionPointerType remove;
    CDUnknownFunctionPointerType key;
    CDUnknownFunctionPointerType canvas_create;
    CDUnknownFunctionPointerType canvas_deserialize;
    CDUnknownFunctionPointerType canvas_serialize;
    CDUnknownFunctionPointerType canvas_dirty;
    CDUnknownFunctionPointerType canvas_can_evict;
    CDUnknownFunctionPointerType canvas_memory_size;
    CDUnknownFunctionPointerType canvas_compact;
    CDUnknownFunctionPointerType needs_canvas_destroy;
    CDUnknownFunctionPointerType canvas_destroy;
    CDUnknownFunctionPointerType canvas_remove_past;
};

struct nw_timer_entry;

struct nw_timer_list_head {
    struct nw_timer_entry *_field1;
    struct nw_timer_entry **_field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct retained_ptr<NSObject<OS_dispatch_source>*> {
    NSObject *m_obj;
};

struct retained_ptr<NSObject<OS_nw_fd_wrapper>*> {
    NSObject *m_obj;
};

struct retained_ptr<NSObject<OS_xpc_object>*> {
    NSObject *m_obj;
};

struct retained_ptr<NSString *> {
    NSString *m_obj;
};

struct retained_ptr<NWConcrete_nw_activity *> {
    NWConcrete_nw_activity *m_obj;
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

struct tcp_conn_status {
    union {
        struct {
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
        } _field1;
        unsigned int _field2;
    } _field1;
};

struct tcp_connection_info {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :17;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
};

struct tcp_info {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    int _field19;
    unsigned int _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25;
    unsigned long long _field26;
    unsigned long long _field27;
    unsigned long long _field28;
    unsigned long long _field29;
    unsigned char _field30;
    unsigned char _field31;
    unsigned short _field32;
    unsigned long long _field33;
    unsigned long long _field34;
    unsigned long long _field35;
    unsigned long long _field36;
    unsigned long long _field37;
    unsigned long long _field38;
    unsigned long long _field39;
    unsigned long long _field40;
    unsigned long long _field41;
    unsigned long long _field42;
    unsigned long long _field43;
    unsigned long long _field44;
    struct tcp_conn_status _field45;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned long long _field55;
    unsigned int _field56;
};

struct unfair_mutex {
    struct os_unfair_lock_s m_mutex;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

