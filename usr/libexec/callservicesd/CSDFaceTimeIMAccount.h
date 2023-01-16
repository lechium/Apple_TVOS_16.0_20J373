//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDDeviceLockStateObserver, CSDKeychainPasswordItem, NSString;
@protocol OS_dispatch_queue;

@interface CSDFaceTimeIMAccount : NSObject
{
    _Bool _IMDaemonConnected;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_callerID;	// 24 = 0x18
    CSDKeychainPasswordItem *_keychainItem;	// 32 = 0x20
    CSDDeviceLockStateObserver *_lockStateObserver;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x002000000018598d
- (void).cxx_destruct;	// IMP=0x0020000000186dd8
@property(readonly, nonatomic) CSDDeviceLockStateObserver *lockStateObserver; // @synthesize lockStateObserver=_lockStateObserver;
@property(readonly, nonatomic) CSDKeychainPasswordItem *keychainItem; // @synthesize keychainItem=_keychainItem;
@property(nonatomic, getter=isIMDaemonConnected) _Bool IMDaemonConnected; // @synthesize IMDaemonConnected=_IMDaemonConnected;
@property(copy, nonatomic) NSString *callerID; // @synthesize callerID=_callerID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;	// IMP=0x0010000000186c4e
- (void)updateState;	// IMP=0x001000000018698b
- (id)faceTimeIMAccount;	// IMP=0x0010000000186926
- (void)_saveLastKnownFaceTimeCallerID;	// IMP=0x00100000001867ca
- (void)removeCallerIDFromPreferences;	// IMP=0x0010000000186723
- (void)_initializeLastKnownCallerID;	// IMP=0x001000000018641a
- (void)displayNameChanged:(id)arg1;	// IMP=0x001000000018635e
- (void)preferredAccountChanged:(id)arg1;	// IMP=0x00100000001862a2
- (void)imDaemonDidConnect:(id)arg1;	// IMP=0x0010000000186120
- (void)updateCallerID:(id)arg1;	// IMP=0x0010000000185e1f
- (id)init;	// IMP=0x0010000000185a12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
