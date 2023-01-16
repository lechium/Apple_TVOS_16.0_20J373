//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface CLLocationMatchInfoInternal : NSObject
{
    long long fMatchQuality;	// 8 = 0x8
    struct CLLocationCoordinate2D fMatchCoordinate;	// 16 = 0x10
    double fMatchCourse;	// 32 = 0x20
    int fMatchFormOfWay;	// 40 = 0x28
    int fMatchRoadClass;	// 44 = 0x2c
    _Bool fMatchShifted;	// 48 = 0x30
    NSData *fMatchDataArray;	// 56 = 0x38
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000329f4
- (void)dealloc;	// IMP=0x00000000000329b9
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(_Bool)arg6 matchDataArray:(id)arg7;	// IMP=0x000000000003290f

@end

