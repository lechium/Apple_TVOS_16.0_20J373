//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FlexMLGainValue : NSObject
{
    float _gain;	// 8 = 0x8
    CDStruct_1b6d18a9 _segmentTime;	// 12 = 0xc
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 segmentTime; // @synthesize segmentTime=_segmentTime;
@property(readonly, nonatomic) float gain; // @synthesize gain=_gain;
- (long long)compare:(id)arg1;	// IMP=0x0000000000016a5a
- (id)initWithGain:(float)arg1 segmentTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000016a04

@end

