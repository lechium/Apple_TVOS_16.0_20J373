//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PBSystemServiceConnection;

@interface PBMediaRemoteService : NSObject
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSMutableDictionary *_pinViewControllerContextsByToken;	// 16 = 0x10
}

+ (_Bool)_connectionHasValidEntitlement:(id)arg1;	// IMP=0x002000000018468d
+ (void)_updateTVAVRPowerControlAvailableState;	// IMP=0x0010000000183034
+ (void)_updateVolumeControlAvailableState;	// IMP=0x0010000000182f9a
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000182f30
+ (id)_audioRoutingController;	// IMP=0x0010000000182e73
+ (void)initialize;	// IMP=0x0010000000182be6
- (void).cxx_destruct;	// IMP=0x0020000000184780
@property(readonly, nonatomic) NSMutableDictionary *pinViewControllerContextsByToken; // @synthesize pinViewControllerContextsByToken=_pinViewControllerContextsByToken;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (_Bool)_hasValidEntitlement;	// IMP=0x0010000000184645
- (void)__volumeControlTargetDeviceTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001844eb
- (void)__noteUserPresenceDetected;	// IMP=0x00100000001842d5
- (void)__dismissPinDialogWithToken:(id)arg1;	// IMP=0x00100000001840c2
- (void)__showPinDialogWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001839a3
- (void)__stopSiriWithContext:(id)arg1;	// IMP=0x0010000000183779
- (void)__startSiriWithContext:(id)arg1;	// IMP=0x0010000000183452
- (void)__activateSiriWithContext:(id)arg1;	// IMP=0x00100000001830f0
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x0010000000182b68
- (id)init;	// IMP=0x0010000000182b5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

