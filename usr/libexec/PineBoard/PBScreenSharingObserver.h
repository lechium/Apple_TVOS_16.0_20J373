//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBBulletinService, PBSBulletin;

@interface PBScreenSharingObserver : NSObject
{
    int _pairedDevicesNotifier;	// 8 = 0x8
    _Bool _observing;	// 12 = 0xc
    PBBulletinService *_bulletinService;	// 16 = 0x10
    PBSBulletin *_currentBulletin;	// 24 = 0x18
    unsigned long long _currentSessionID;	// 32 = 0x20
}

+ (unsigned long long)nextSessionID;	// IMP=0x00200000001763b6
+ (id)sharedInstance;	// IMP=0x00100000001755b0
- (void).cxx_destruct;	// IMP=0x0020000000177025
@property(nonatomic) unsigned long long currentSessionID; // @synthesize currentSessionID=_currentSessionID;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) PBSBulletin *currentBulletin; // @synthesize currentBulletin=_currentBulletin;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
- (void)_pairedDevicesChanged;	// IMP=0x00100000001769a4
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x001000000017695d
- (void)_delayedScreenSharingBulletinRefresh;	// IMP=0x00100000001768ad
- (void)_updateHUDStateForSessionID:(unsigned long long)arg1;	// IMP=0x00100000001763cd
- (void)_resetBulletinState:(_Bool)arg1;	// IMP=0x0010000000175d23
- (void)_terminateScreenSharing;	// IMP=0x0010000000175c57
- (id)_screenSharingDeviceName;	// IMP=0x0010000000175bd5
- (_Bool)_isScreenSharingActive;	// IMP=0x0010000000175b8a
- (void)_handleScreenSharingActiveDidChange:(_Bool)arg1;	// IMP=0x0010000000175ab9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000175a49
- (void)stopObserving;	// IMP=0x0010000000175976
- (void)startObserving;	// IMP=0x00100000001757c9
- (id)init;	// IMP=0x0010000000175637

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

