//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSUUID, SFAutoUnlockDevice, SFBLEScanner;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDAutoUnlockSuggestionManager : NSObject
{
    _Bool _foundFirstPeer;	// 8 = 0x8
    NSString *_suggestedDeviceID;	// 16 = 0x10
    NSString *_setupRetryDeviceID;	// 24 = 0x18
    SFAutoUnlockDevice *_lastSuccessfulDevice;	// 32 = 0x20
    SFBLEScanner *_scanner;	// 40 = 0x28
    NSMutableArray *_foundPeers;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_scanTimer;	// 56 = 0x38
    NSArray *_currentBluetoothIDs;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_serviceTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_deviceTimer;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_setupRetryDeviceTimer;	// 88 = 0x58
    NSMutableArray *_suggestedPeers;	// 96 = 0x60
    SFAutoUnlockDevice *_suggestedPeer;	// 104 = 0x68
    NSUUID *_suggestionManagerSessionID;	// 112 = 0x70
    SFAutoUnlockDevice *_setupRetryDevice;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_suggestionManagerQueue;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000014f30c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *suggestionManagerQueue; // @synthesize suggestionManagerQueue=_suggestionManagerQueue;
@property(retain, nonatomic) SFAutoUnlockDevice *setupRetryDevice; // @synthesize setupRetryDevice=_setupRetryDevice;
@property(retain, nonatomic) NSUUID *suggestionManagerSessionID; // @synthesize suggestionManagerSessionID=_suggestionManagerSessionID;
@property(retain, nonatomic) SFAutoUnlockDevice *suggestedPeer; // @synthesize suggestedPeer=_suggestedPeer;
@property(retain, nonatomic) NSMutableArray *suggestedPeers; // @synthesize suggestedPeers=_suggestedPeers;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *setupRetryDeviceTimer; // @synthesize setupRetryDeviceTimer=_setupRetryDeviceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *deviceTimer; // @synthesize deviceTimer=_deviceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *serviceTimer; // @synthesize serviceTimer=_serviceTimer;
@property(retain, nonatomic) NSArray *currentBluetoothIDs; // @synthesize currentBluetoothIDs=_currentBluetoothIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(retain, nonatomic) NSMutableArray *foundPeers; // @synthesize foundPeers=_foundPeers;
@property(retain, nonatomic) SFBLEScanner *scanner; // @synthesize scanner=_scanner;
@property(nonatomic) _Bool foundFirstPeer; // @synthesize foundFirstPeer=_foundFirstPeer;
@property(retain, nonatomic) SFAutoUnlockDevice *lastSuccessfulDevice; // @synthesize lastSuccessfulDevice=_lastSuccessfulDevice;
@property(copy, nonatomic) NSString *setupRetryDeviceID; // @synthesize setupRetryDeviceID=_setupRetryDeviceID;
@property(copy, nonatomic) NSString *suggestedDeviceID; // @synthesize suggestedDeviceID=_suggestedDeviceID;
- (void)_systemHasPoweredOn;	// IMP=0x001000000014f120
- (void)_systemWillSleep;	// IMP=0x001000000014f0bc
- (_Bool)alwaysShowSetupRetry;	// IMP=0x001000000014f0a3
- (id)testDeviceID;	// IMP=0x001000000014f08a
- (_Bool)ignoreBackOff;	// IMP=0x001000000014f071
- (_Bool)suggestionsEnabled;	// IMP=0x001000000014f055
- (void)setRetriedSetup;	// IMP=0x001000000014f005
- (_Bool)retriedSetup;	// IMP=0x001000000014ef28
- (void)loadSuggestedPeers;	// IMP=0x001000000014ee63
- (void)setFeatureSuggestedForDeviceID:(id)arg1;	// IMP=0x001000000014eccd
- (_Bool)featureSuggestedForDeviceID:(id)arg1;	// IMP=0x001000000014ec56
- (void)updateDefaultsForDeviceID:(id)arg1;	// IMP=0x001000000014e8ff
- (_Bool)canSuggestForDeviceID:(id)arg1;	// IMP=0x001000000014e6a8
- (_Bool)shouldSendRequestsForDeviceID:(id)arg1;	// IMP=0x001000000014e57e
- (void)watchAvailableForUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000014e56e
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x001000000014e212
- (void)sendStartAdvertisingToDeviceID:(id)arg1;	// IMP=0x001000000014e05d
- (void)invalidateScanTimer;	// IMP=0x001000000014df87
- (void)restartScanTimer:(unsigned long long)arg1;	// IMP=0x001000000014dd90
- (void)invalidateScanner;	// IMP=0x001000000014dc5d
- (void)handleFoundPeer:(id)arg1;	// IMP=0x001000000014d82e
- (void)startScanningForIDSDeviceIDs:(id)arg1;	// IMP=0x001000000014cf7e
- (void)invalidateServiceTimer;	// IMP=0x001000000014cea8
- (void)restartServiceTimer:(unsigned long long)arg1;	// IMP=0x001000000014ccad
- (void)invalidateSuggestionService;	// IMP=0x001000000014cc47
- (void)updateSuggestionService;	// IMP=0x001000000014cbd1
- (void)invalidateSuggestedDeviceTimer;	// IMP=0x001000000014cafb
- (void)restartSuggestedDeviceTimer:(long long)arg1;	// IMP=0x001000000014c8e2
- (void)postSuggestionNotification;	// IMP=0x001000000014c76d
- (void)postNotificationIfNeeded;	// IMP=0x001000000014c58f
- (void)invalidateSetupRetryDeviceTimer;	// IMP=0x001000000014c4b9
- (void)restartSetupRetryDeviceTimer:(long long)arg1;	// IMP=0x001000000014c2a0
- (void)setupRetryNotificationDismissed;	// IMP=0x001000000014c1c5
- (void)setupRetryNotificationSetUpSelected;	// IMP=0x001000000014c1bf
- (void)setupRetryIfNeeded;	// IMP=0x001000000014bf9e
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x001000000014bedc
- (void)triggerDevicesIfNeeded;	// IMP=0x001000000014bed6
- (void)handleTestSuggestion;	// IMP=0x001000000014bddd
- (void)addObservers;	// IMP=0x001000000014bd54
- (id)init;	// IMP=0x001000000014bc43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

