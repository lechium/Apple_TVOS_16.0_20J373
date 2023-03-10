//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFTwoArgumentSafetyBlock, NSString, NSXPCConnection;
@protocol AFRelinquishableAssertion, OS_dispatch_queue;

@interface ADAudioSessionAssertionConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _processIdentifier;	// 16 = 0x10
    id <AFRelinquishableAssertion> _assertion;	// 24 = 0x18
    NSXPCConnection *_xpcConnection;	// 32 = 0x20
    AFTwoArgumentSafetyBlock *_relinquishmentHandler;	// 40 = 0x28
}

- (void);	// IMP=0x00200000000f02f1
- (void)_clearXPCConnection;	// IMP=0x00100000000f01f9
- (void)_relinquishAssertionWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00100000000f00c0
- (void)_finalizeWithContext:(id)arg1 error:(id)arg2;	// IMP=0x00100000000eff32
- (void)invalidate;	// IMP=0x00100000000efd9f
- (oneway void)relinquishAudioSessionWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000efae2
- (oneway void)acquireAudioSessionWithContext:(id)arg1 relinquishmentHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ef420
- (void)dealloc;	// IMP=0x00100000000ef2c0
@property(readonly, copy) NSString *description;
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000ef088

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

