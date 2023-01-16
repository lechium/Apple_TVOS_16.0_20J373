//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmAudio : NSObject
{
    unsigned int _redundancyPercentage;	// 8 = 0x8
    double _redundancyInterval;	// 16 = 0x10
    double _packetLossPercentageIncreaseThresholds[3];	// 24 = 0x18
    double _packetLossPercentageDecreaseThresholds[3];	// 48 = 0x30
    _Bool _isPacketLossIncreasing;	// 72 = 0x48
    double _packetLossPercentage;	// 80 = 0x50
    double _packetLossPercentageThreshold;	// 88 = 0x58
    unsigned int _burstLossPacketCount;	// 96 = 0x60
    _Bool _isUplinkRecentlyCongested;	// 100 = 0x64
    float _offChannelTimeRatio;	// 104 = 0x68
    _Bool _isOffChannelActivityHigh;	// 108 = 0x6c
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (unsigned int)updateRedundancyPercentageWithPLRThresholds:(double *)arg1;	// IMP=0x000000000038412b
- (void)computeRedundancyInfo;	// IMP=0x00000000003840b8
- (void)processRCNetworkStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000383f9b
- (void)processNWConnectionStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000383f01
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_7df19fcb)arg1;	// IMP=0x0000000000383ed4
- (id)init;	// IMP=0x0000000000383e5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

