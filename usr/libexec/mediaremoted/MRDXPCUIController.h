//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MROSTransaction, NSString, NSXPCConnection;
@protocol MRUIServerXPCProtocol;

@interface MRDXPCUIController : NSObject
{
    _Bool _hasLockScreenControlsAssertion;	// 8 = 0x8
    _Bool _hasQuickControlsAssertion;	// 9 = 0x9
    _Bool _hasScreenMirroringQuickControlsAssertion;	// 10 = 0xa
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    MROSTransaction *_transaction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000010410d
@property(nonatomic) _Bool hasScreenMirroringQuickControlsAssertion; // @synthesize hasScreenMirroringQuickControlsAssertion=_hasScreenMirroringQuickControlsAssertion;
@property(nonatomic) _Bool hasQuickControlsAssertion; // @synthesize hasQuickControlsAssertion=_hasQuickControlsAssertion;
@property(nonatomic) _Bool hasLockScreenControlsAssertion; // @synthesize hasLockScreenControlsAssertion=_hasLockScreenControlsAssertion;
@property(retain, nonatomic) MROSTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (void)releaseScreenMirroringQuickControlsAssertion;	// IMP=0x001000000010404e
- (void)acquireScreenMirroringQuickControlsAssertion;	// IMP=0x0010000000103fe9
- (void)releaseQuickControlsAssertion;	// IMP=0x0010000000103f75
- (id)acquireQuickControlsAssertion;	// IMP=0x0010000000103e2c
- (void)releaseLockScreenControlsAssertion;	// IMP=0x0010000000103db8
- (void)acquireLockScreenControlsAssertion;	// IMP=0x0010000000103d41
- (id)synchronousServer;	// IMP=0x0010000000103bf5
@property(readonly, nonatomic) id <MRUIServerXPCProtocol> server;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (_Bool)hasUIAssertions;	// IMP=0x00100000001035d3
- (void)_updateTransaction;	// IMP=0x00100000001034e3
- (void)dealloc;	// IMP=0x001000000010327a
- (id)init;	// IMP=0x00100000001031ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
