//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNFuture, CNReputationContactsAdapter, CNReputationCoreRecentsAdapter, CNReputationHandle, CNReputationLogger;

__attribute__((visibility("hidden")))
@interface CNReputationFutureBuilder : NSObject
{
    CNReputationHandle *_handle;	// 8 = 0x8
    CNReputationCoreRecentsAdapter *_coreRecentsAdapter;	// 16 = 0x10
    CNReputationContactsAdapter *_contactsAdapter;	// 24 = 0x18
    CNReputationLogger *_logger;	// 32 = 0x20
    CNFuture *_scoreFuture;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000089b63
@property(retain, nonatomic) CNFuture *scoreFuture; // @synthesize scoreFuture=_scoreFuture;
@property(readonly, nonatomic) CNReputationLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter; // @synthesize contactsAdapter=_contactsAdapter;
@property(readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter; // @synthesize coreRecentsAdapter=_coreRecentsAdapter;
@property(readonly, copy, nonatomic) CNReputationHandle *handle; // @synthesize handle=_handle;
- (id)build;	// IMP=0x0000000000089909
- (id)contactsTrustForPhoneNumber:(id)arg1;	// IMP=0x000000000008957d
- (void)addContactsTrustForPhoneNumber;	// IMP=0x0000000000089397
- (id)contactsTrustForEmailAddress:(id)arg1;	// IMP=0x00000000000890b1
- (void)addContactsTrustForEmailAddress;	// IMP=0x0000000000088ecb
- (id)coreRecentsTrustForHandle:(id)arg1;	// IMP=0x0000000000088be5
- (void)addCoreRecentsTrust;	// IMP=0x00000000000889ff
- (id)initWithHandle:(id)arg1 coreRecentsAdapter:(id)arg2 contactsAdapter:(id)arg3 logger:(id)arg4;	// IMP=0x000000000008890c

@end

