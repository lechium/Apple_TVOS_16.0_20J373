//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDelegationServiceSecuritySettings, NSDictionary, NSNetService, NSString;
@protocol ICDelegationConsumerNetServiceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDelegationConsumerNetService : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    _Bool _didPublish;	// 24 = 0x18
    _Bool _isPublished;	// 25 = 0x19
    NSNetService *_netService;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_netServiceQueue;	// 40 = 0x28
    ICDelegationServiceSecuritySettings *_securitySettings;	// 48 = 0x30
    id <ICDelegationConsumerNetServiceDelegate> _delegate;	// 56 = 0x38
    NSDictionary *_userIdentityDelegationAccountUUIDs;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003f497
@property(readonly, copy, nonatomic) NSDictionary *userIdentityDelegationAccountUUIDs; // @synthesize userIdentityDelegationAccountUUIDs=_userIdentityDelegationAccountUUIDs;
@property(nonatomic) __weak id <ICDelegationConsumerNetServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateNetServiceStatus;	// IMP=0x000000000003ef98
- (void)stop;	// IMP=0x000000000003ef4d
- (void)publish;	// IMP=0x000000000003ef02
@property(readonly, nonatomic) ICDelegationServiceSecuritySettings *securitySettings;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;	// IMP=0x000000000003ebdd
- (void)netServiceDidPublish:(id)arg1;	// IMP=0x000000000003eb24
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x000000000003e99e
- (void)dealloc;	// IMP=0x000000000003e8dd
- (id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1;	// IMP=0x000000000003e812

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
