//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFProximityEstimator.h"

__attribute__((visibility("hidden")))
@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator
{
    char *_channelNumberArray;	// 32 = 0x20
    char *_rssiArray;	// 40 = 0x28
    unsigned int _rssiCount;	// 48 = 0x30
    unsigned int _rssiIndex;	// 52 = 0x34
    unsigned int _rssiMinCount;	// 56 = 0x38
}

- (int)_estimateRSSIForSFBLEDevice:(id)arg1;	// IMP=0x00000000000e5bc4
- (id)description;	// IMP=0x00000000000e5ad5
- (void)dealloc;	// IMP=0x00000000000e5a66
- (id)initWithProximityInfo:(id)arg1;	// IMP=0x00000000000e5952

@end

