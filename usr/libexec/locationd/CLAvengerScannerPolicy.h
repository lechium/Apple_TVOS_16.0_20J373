//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLAvengerScannerPolicyDelegate;

@interface CLAvengerScannerPolicy : NSObject
{
    id <CLAvengerScannerPolicyDelegate> _delegate;	// 8 = 0x8
    struct CLAvengerScannerPolicyContext _currentContext;	// 16 = 0x10
    long long _currentScanType;	// 88 = 0x58
}

+ (id)convertCLAvengerScannerPolicyScanTypeToString:(long long)arg1;	// IMP=0x0040000000134814
- (id).cxx_construct;	// IMP=0x0020000000134842
@property(readonly, nonatomic) long long currentScanType; // @synthesize currentScanType=_currentScanType;
@property(readonly, nonatomic) struct CLAvengerScannerScanParameters currentScanParameters;
@property(nonatomic) unsigned long long totalAdvertisementBuffersAvailable;
@property(readonly, nonatomic) _Bool downgradedDuringCoexFriendlyAggressiveDiscoveryScan;
@property(nonatomic) _Bool bluetoothAudioActive;
@property(nonatomic) _Bool wifi2GHzCriticalState;
@property(nonatomic) _Bool associatedTo2GHzWiFi;
@property(nonatomic) _Bool optedIn;
- (_Bool)hasActiveBTFindingScan;	// IMP=0x00100000001344e7
- (void)stopHawkeyeLowEnergyScan;	// IMP=0x0010000000134420
- (void)startHawkeyeLowEnergyScan;	// IMP=0x00100000001342f9
- (void)stopWatchAdvertisementBufferScan;	// IMP=0x001000000013427c
- (void)startWatchAdvertisementBufferScan;	// IMP=0x00100000001341fe
- (void)stopBTFindingScan;	// IMP=0x0010000000134137
- (void)startBTFindingScan;	// IMP=0x001000000013400d
- (_Bool)hasActiveAggressiveScan;	// IMP=0x0010000000133ff6
- (void)stopCoexFriendlyAggressiveScan;	// IMP=0x0010000000133eeb
- (void)startCoexFriendlyAggressiveScan;	// IMP=0x0010000000133df8
- (void)stopAggressiveScan;	// IMP=0x0010000000133cfd
- (void)startAggressiveScan;	// IMP=0x0010000000133c02
- (void)updateContext:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x0010000000133b50
- (long long)resolveNewScanTypeWithNewContext:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000013385c
- (long long)desiredHawkeyeLowEnergyScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x0010000000133846
- (long long)desiredWatchAdvertisementBufferScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x0010000000133821
- (long long)desiredBTFindingDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001337ee
- (long long)desiredCoexFriendlyAggressiveDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x0010000000133707
- (long long)desiredAggressiveDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001336f1
- (long long)desiredDefaultScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x00100000001336a1
- (id)initWithDelegate:(id)arg1 platformType:(long long)arg2 supportsPerTypeDuplicateFilter:(_Bool)arg3;	// IMP=0x0010000000133604

@end

