//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemOverlayController, PBVolumeHUDViewController;
@protocol OS_dispatch_source;

@interface PBVolumeHUDManager : NSObject
{
    _Bool _dismissalStarted;	// 8 = 0x8
    _Bool _dismissalInterrupted;	// 9 = 0x9
    _Bool _volumeUpButtonIsDown;	// 10 = 0xa
    _Bool _volumeDownButtonIsDown;	// 11 = 0xb
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    PBVolumeHUDViewController *_volumeHUDViewController;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_dismissalTimer;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000169e52
+ (id)dependencyDescription;	// IMP=0x0010000000169d2b
- (void).cxx_destruct;	// IMP=0x002000000016a8aa
@property(nonatomic) _Bool volumeDownButtonIsDown; // @synthesize volumeDownButtonIsDown=_volumeDownButtonIsDown;
@property(nonatomic) _Bool volumeUpButtonIsDown; // @synthesize volumeUpButtonIsDown=_volumeUpButtonIsDown;
@property(nonatomic) _Bool dismissalInterrupted; // @synthesize dismissalInterrupted=_dismissalInterrupted;
@property(nonatomic) _Bool dismissalStarted; // @synthesize dismissalStarted=_dismissalStarted;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dismissalTimer; // @synthesize dismissalTimer=_dismissalTimer;
@property(readonly, nonatomic) PBVolumeHUDViewController *volumeHUDViewController; // @synthesize volumeHUDViewController=_volumeHUDViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (id)glyphNameForRouteType:(long long)arg1;	// IMP=0x001000000016a818
- (void)cancelDismissalTimer;	// IMP=0x001000000016a7e8
- (void)startDismissalTimer;	// IMP=0x001000000016a6ef
- (void)dismissVolumeHUD;	// IMP=0x001000000016a54b
- (void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(id)arg2;	// IMP=0x001000000016a485
- (void)showVolumeHUDWithImageName:(id)arg1 level:(id)arg2;	// IMP=0x001000000016a405
- (void)showVolumeHUDWithImage:(id)arg1 level:(id)arg2;	// IMP=0x001000000016a12e
- (void)noteVolumeDownWasHit:(_Bool)arg1;	// IMP=0x001000000016a0d1
- (void)noteVolumeUpWasHit:(_Bool)arg1;	// IMP=0x001000000016a074
- (_Bool)isPresenting;	// IMP=0x001000000016a05d
- (id)init;	// IMP=0x0010000000169ed9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

