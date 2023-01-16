//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct GTMTLGuestAppClient {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    struct os_unfair_lock_s _field6;
    unsigned int _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    _Atomic long long _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
    int _field16;
    int _field17;
    unsigned long long _field18;
    double _field19;
    _Bool _field20;
    char _field21[7];
};

struct GTTraceContext {
    struct _opaque_pthread_mutex_t _field1;
    struct GTTraceStore *_field2;
    _Atomic unsigned long long _field3;
    _Atomic unsigned long long _field4;
    struct apr_hash_t *_field5;
    union FreeNode *_field6;
    _Atomic int _field7;
    char _field8[4];
    struct GTTraceStream *_field9;
    struct GTTraceStoreList _field10[16];
};

struct GTTraceEncoder {
    struct GTTraceContext *_field1;
    struct GTTraceStream *_field2;
    struct GTTraceFunc *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    char _field9[5];
};

struct GTTraceFunc;

struct GTTraceFuncRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct GTTraceMemPool;

struct GTTraceStore;

struct GTTraceStoreList {
    union GTTraceStoreNode *_field1;
    union GTTraceStoreNode *_field2;
    _Atomic int _field3;
    _Atomic int _field4;
};

struct GTTraceStream {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct GTTraceMemPool *_field4;
    struct GTTraceStoreList _field5;
    _Atomic unsigned long long _field6;
};

struct IndirectArgumentBufferCapabilities {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :29;
};

struct MTLResourceID {
    unsigned long long _field1;
};

struct MTLTargetDeviceArch {
    unsigned long long _field1;
    unsigned int _field2;
    char *_field3;
};

struct VMBuffer {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct apr_array_header_t {
    struct apr_pool_t *_field1;
    int _field2;
    int _field3;
    int _field4;
    char *_field5;
};

struct apr_hash_t;

struct apr_pool_t;

struct atomic<int> {
    struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
        _Atomic int __a_value;
    } __a_;
};

struct atomic<unsigned int> {
    struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> {
        _Atomic unsigned int __a_value;
    } __a_;
};

struct dy_transport_message_header {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct dy_transport_message_unpack_s {
    struct dy_transport_message_header _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    _Bool _field6;
};

struct iovec {
    void *iov_base;
    unsigned long long iov_len;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    unsigned int _field1;
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
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    float _field27;
    float _field28;
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
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned int _field55;
    unsigned int _field56;
    unsigned int _field57;
    unsigned int _field58;
    unsigned int _field59;
    unsigned int _field60;
    unsigned int _field61;
    unsigned long long _field62;
} CDStruct_4a42450c;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_32a7f38a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long _field1[2];
} CDStruct_492b6082;

typedef struct {
    unsigned char _field1[32];
} CDStruct_5af0f983;

typedef struct {
    unsigned int :8;
    unsigned int :24;
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_4af8c268;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    _Bool _field1;
    unsigned long long _field2;
    struct *_field3;
} CDStruct_dbc1e4aa;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

#pragma mark Named Unions

union FreeNode;

union GTTraceStoreNode;

#pragma mark Typedef'd Unions

typedef union {
    CDStruct_4af8c268 _field1;
    CDStruct_4af8c268 _field2;
} CDUnion_c6e49ed4;

