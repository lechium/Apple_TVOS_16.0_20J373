//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBTVTapCoordinator : NSObject
{
    double _lastSingleTVTapTimestamp;	// 8 = 0x8
    double _lastDoubleTVTapDownTimestamp;	// 16 = 0x10
    double _lastTripleTVTapDownTimestamp;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000cd0bd
- (void)handleTVTapEvent:(id)arg1;	// IMP=0x00200000000cd265
- (void)reset;	// IMP=0x00100000000cd250
- (void)registerTVPressDownTimestamp:(double)arg1;	// IMP=0x00100000000cd193
@property(readonly, nonatomic) _Bool didRecognizeTripleTap;
@property(readonly, nonatomic) _Bool didRecognizeDoubleTap;
- (double)_maxAllowableDeltaBetweenPresses;	// IMP=0x00100000000cd144

@end
