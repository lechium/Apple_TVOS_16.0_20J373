//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol MRUIServerXPCProtocol;

__attribute__((visibility("hidden")))
@interface MRUIController : NSObject
{
    _Bool _hasLockScreenControlsAssertion;	// 8 = 0x8
    _Bool _hasQuickControlsAssertion;	// 9 = 0x9
    _Bool _hasScreenMirroringQuickControlsAssertion;	// 10 = 0xa
    _Bool _shouldRestoreState;	// 11 = 0xb
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000020de77
@property(nonatomic) _Bool shouldRestoreState; // @synthesize shouldRestoreState=_shouldRestoreState;
@property(nonatomic) _Bool hasScreenMirroringQuickControlsAssertion; // @synthesize hasScreenMirroringQuickControlsAssertion=_hasScreenMirroringQuickControlsAssertion;
@property(nonatomic) _Bool hasQuickControlsAssertion; // @synthesize hasQuickControlsAssertion=_hasQuickControlsAssertion;
@property(nonatomic) _Bool hasLockScreenControlsAssertion; // @synthesize hasLockScreenControlsAssertion=_hasLockScreenControlsAssertion;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (id)contextForSessionIdentifier:(id)arg1;	// IMP=0x000000000020dcf5
- (void)releaseScreenMirroringQuickControlsAssertion;	// IMP=0x000000000020dc99
- (void)acquireScreenMirroringQuickControlsAssertion;	// IMP=0x000000000020dc3a
- (void)releaseQuickControlsAssertion;	// IMP=0x000000000020dbde
- (id)acquireQuickControlsAssertion;	// IMP=0x000000000020da8f
- (void)releaseLockScreenControlsAssertion;	// IMP=0x000000000020da33
- (void)acquireLockScreenControlsAssertion;	// IMP=0x000000000020d9d4
@property(readonly, nonatomic) id <MRUIServerXPCProtocol> server;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (_Bool)hasUIAssertions;	// IMP=0x000000000020d35f
- (void)dealloc;	// IMP=0x000000000020d114
- (void)_restoreState;	// IMP=0x000000000020ce45
- (id)init;	// IMP=0x000000000020cd81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

