//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SecuritydXPCServer : NSObject
{
    struct SecurityClient _client;	// 8 = 0x8
    NSXPCConnection *_connection;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x001000000000bf3f
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x001000000000be8f
- (_Bool)clientHasBooleanEntitlement:(id)arg1;	// IMP=0x001000000000be7e
- (id)initWithSecurityClient:(struct SecurityClient *)arg1;	// IMP=0x001000000000bd8d
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000000bcac
- (void)secKeychainForceUpgradeIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b2f6
- (void)secItemPromoteItemsForAppClip:(id)arg1 toParentApp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000af6f
- (void)secItemPersistKeychainWritesAtHighPerformanceCost:(CDUnknownBlockType)arg1;	// IMP=0x001000000000acd1
- (void)secItemDeleteForAppClipApplicationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ac5a
- (void)secKeychainDeleteMultiuser:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000000aa34
- (void)secItemDigest:(id)arg1 accessGroup:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a377
- (void)findItemPersistentRefByUUID:(id)arg1 extraLoggingString:(id)arg2 client:(struct SecurityClient *)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009f4e
- (void)secItemFetchCurrentItemAcrossAllDevices:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x0010000000009b01
- (void)secItemSetCurrentItemAcrossAllDevices:(id)arg1 newCurrentItemHash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 oldCurrentItemReference:(id)arg6 oldCurrentItemHash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x00100000000096e0
- (void)SecItemAddAndNotifyOnSync:(id)arg1 syncCallback:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009079

@end

