//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Context, NSString;
@protocol LAContextCallbackXPC;

@interface ContextProxy : NSObject
{
    CDUnknownBlockType _invalidationBlock;	// 8 = 0x8
    CDUnknownBlockType _checkEntitlementBlock;	// 16 = 0x10
    _Bool _cApiOrigin;	// 24 = 0x18
    int _processId;	// 28 = 0x1c
    unsigned int _userId;	// 32 = 0x20
    int _auditSessionId;	// 36 = 0x24
    id <LAContextCallbackXPC> _callback;	// 40 = 0x28
    unsigned long long _originatorId;	// 48 = 0x30
    Context *_managedContext;	// 56 = 0x38
    CDStruct_4c969caf _auditToken;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000075d3
@property(readonly, nonatomic) Context *managedContext; // @synthesize managedContext=_managedContext;
@property(readonly, nonatomic) unsigned long long originatorId; // @synthesize originatorId=_originatorId;
@property(readonly, nonatomic) id <LAContextCallbackXPC> callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) int auditSessionId; // @synthesize auditSessionId=_auditSessionId;
@property(readonly, nonatomic) unsigned int userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) _Bool cApiOrigin; // @synthesize cApiOrigin=_cApiOrigin;
- (void)invalidateWithError:(id)arg1;	// IMP=0x0010000000007534
- (_Bool)checkEntitlement:(id)arg1;	// IMP=0x0010000000007522
- (void)evaluateACL:(id)arg1 cfOperation:(void *)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000007507
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000074ec
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000074ca
- (void)tokenForTransferToUnknownProcess:(CDUnknownBlockType)arg1;	// IMP=0x00100000000071f4
- (void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006f00
- (void)verifyFileVaultUser:(id)arg1 volumeUuid:(id)arg2 options:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006c13
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000694b
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000066a1
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000063e2
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000614a
- (void)credentialOfType:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005e7f
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005c4f
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000596c
- (void)isCredentialSet:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000056d8
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000538e
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005085
- (void)pauseProcessedEvent:(long long)arg1 pause:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004da2
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004abb
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000047d4
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000044cd
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000004129
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003de3
@property(readonly, copy) NSString *description;
- (void)interruptWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003aa8
- (void)dealloc;	// IMP=0x00100000000039e5
- (id)initWithContext:(id)arg1 processId:(int)arg2 userId:(unsigned int)arg3 auditSessionId:(int)arg4 auditToken:(CDStruct_4c969caf)arg5 cApiOrigin:(_Bool)arg6 checkEntitlementBlock:(CDUnknownBlockType)arg7 invalidationBlock:(CDUnknownBlockType)arg8 callback:(id)arg9;	// IMP=0x001000000000372a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

