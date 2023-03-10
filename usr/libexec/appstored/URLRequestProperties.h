//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSBagValue, AMSProcessInfo, NSData, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface URLRequestProperties : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    _Bool _compressRequestBody;	// 16 = 0x10
    _Bool _shouldAppendGUIDParameter;	// 17 = 0x11
    _Bool _URLKnownToBeTrusted;	// 18 = 0x12
    ACAccount *_account;	// 24 = 0x18
    AMSBagValue *_bagURL;	// 32 = 0x20
    AMSProcessInfo *_clientInfo;	// 40 = 0x28
    long long _KBSyncType;	// 48 = 0x30
    NSString *_logUUID;	// 56 = 0x38
    unsigned long long _requestCachePolicy;	// 64 = 0x40
    NSData *_requestBodyData;	// 72 = 0x48
    long long _requestMethod;	// 80 = 0x50
    NSURL *_URL;	// 88 = 0x58
    long long _dataEncoding;	// 96 = 0x60
    NSDictionary *_requestHeaders;	// 104 = 0x68
    NSDictionary *_requestParameters;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000001486f5
@property(copy) NSDictionary *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(copy) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property long long dataEncoding; // @synthesize dataEncoding=_dataEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001483df
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00100000001483cd
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000014828c
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;	// IMP=0x001000000014813a
- (void)setValue:(id)arg1 forRequestHeader:(id)arg2;	// IMP=0x0010000000147fe7
@property _Bool URLKnownToBeTrusted; // @synthesize URLKnownToBeTrusted=_URLKnownToBeTrusted;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
@property _Bool shouldAppendGUIDParameter; // @synthesize shouldAppendGUIDParameter=_shouldAppendGUIDParameter;
@property long long requestMethod; // @synthesize requestMethod=_requestMethod;
@property(copy) NSData *requestBodyData; // @synthesize requestBodyData=_requestBodyData;
- (void);	// IMP=0x001000000014790d
@property unsigned long long requestCachePolicy; // @synthesize requestCachePolicy=_requestCachePolicy;
@property(retain) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property long long KBSyncType; // @synthesize KBSyncType=_KBSyncType;
@property _Bool compressRequestBody; // @synthesize compressRequestBody=_compressRequestBody;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) AMSBagValue *bagURL; // @synthesize bagURL=_bagURL;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (id)init;	// IMP=0x0010000000146fbe

@end

