//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSSmartSiriVolumeUserIntent : NSObject
{
    unsigned long long kSSVCAUserIntentValidForSeconds;	// 8 = 0x8
    float kSSVCAUserIntentVolumeIncreaseFactor;	// 16 = 0x10
    float kSSVCAUserIntentVolumeDecreaseFactor;	// 20 = 0x14
    float kSSVCAUserIntentPermanentOffsetFactorDelta;	// 24 = 0x18
    float kSSVCAUserIntentPermanentOffsetFactorLowerBound;	// 28 = 0x1c
    float kSSVCAUserIntentPermanentOffsetFactorUpperBound;	// 32 = 0x20
    float kSSVCA_DEVICE_SIMPLE_MIN_TTS_VOLUME;	// 36 = 0x24
    float kSSVCA_DEVICE_SIMPLE_MAX_TTS_VOLUME;	// 40 = 0x28
    float kSSVCA_DEVICE_DEFAULT_MIN_TTS_VOLUME;	// 44 = 0x2c
    float kSSVCA_DEVICE_DEFAULT_MAX_TTS_VOLUME;	// 48 = 0x30
    _Bool _permanentOffsetIsEnabled;	// 52 = 0x34
    float _userIntentVolume;	// 56 = 0x38
    float _latestVolume;	// 60 = 0x3c
    float _permanentOffsetFactor;	// 64 = 0x40
    unsigned long long _userIntentType;	// 72 = 0x48
    unsigned long long _userIntentValidForSeconds;	// 80 = 0x50
    long long _userIntentTime;	// 88 = 0x58
    long long _latestVolumeTime;	// 96 = 0x60
}

@property(nonatomic) _Bool permanentOffsetIsEnabled; // @synthesize permanentOffsetIsEnabled=_permanentOffsetIsEnabled;
@property(nonatomic) float permanentOffsetFactor; // @synthesize permanentOffsetFactor=_permanentOffsetFactor;
@property(nonatomic) float latestVolume; // @synthesize latestVolume=_latestVolume;
@property(nonatomic) float userIntentVolume; // @synthesize userIntentVolume=_userIntentVolume;
@property(nonatomic) long long latestVolumeTime; // @synthesize latestVolumeTime=_latestVolumeTime;
@property(nonatomic) long long userIntentTime; // @synthesize userIntentTime=_userIntentTime;
@property(nonatomic) unsigned long long userIntentValidForSeconds; // @synthesize userIntentValidForSeconds=_userIntentValidForSeconds;
@property(nonatomic) unsigned long long userIntentType; // @synthesize userIntentType=_userIntentType;
- (double)applyLowerAndUpperBoundsToVolumeOffset:(float)arg1;	// IMP=0x00100000000c53ad
- (void)storeASVStateInformation;	// IMP=0x00100000000c535a
- (float)decreaseSiriVolumeBasedOnUserIntent;	// IMP=0x00100000000c5339
- (float)increaseSiriVolumeBasedOnUserIntent;	// IMP=0x00100000000c5318
- (void)initWithStoredInformationAndAsset:(id)arg1;	// IMP=0x00100000000c51cc
- (double)applyLowerAndUpperBoundsToVolume:(float)arg1;	// IMP=0x00100000000c50c4

@end

