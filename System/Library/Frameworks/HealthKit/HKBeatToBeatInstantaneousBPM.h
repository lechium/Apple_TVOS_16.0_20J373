//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HKBeatToBeatInstantaneousBPM : NSObject
{
    double _bpm;	// 8 = 0x8
    double _time;	// 16 = 0x10
}

@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) double bpm; // @synthesize bpm=_bpm;
- (id)initWithBPM:(double)arg1 time:(double)arg2;	// IMP=0x0000000000230e59

@end

