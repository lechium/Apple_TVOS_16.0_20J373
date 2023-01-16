//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MNLocationMatchInfo : NSObject
{
    long long _matchQuality;	// 8 = 0x8
    struct CLLocationCoordinate2D _matchCoordinate;	// 16 = 0x10
    double _matchCourse;	// 32 = 0x20
    int _matchFormOfWay;	// 40 = 0x28
    int _matchRoadClass;	// 44 = 0x2c
    _Bool _matchShifted;	// 48 = 0x30
    NSData *_matchDataArray;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f0f37
@property(readonly, nonatomic) NSData *matchDataArray; // @synthesize matchDataArray=_matchDataArray;
@property(readonly, nonatomic) _Bool matchShifted; // @synthesize matchShifted=_matchShifted;
@property(readonly, nonatomic) int matchRoadClass; // @synthesize matchRoadClass=_matchRoadClass;
@property(readonly, nonatomic) int matchFormOfWay; // @synthesize matchFormOfWay=_matchFormOfWay;
@property(readonly, nonatomic) double matchCourse; // @synthesize matchCourse=_matchCourse;
@property(readonly, nonatomic) struct CLLocationCoordinate2D matchCoordinate; // @synthesize matchCoordinate=_matchCoordinate;
@property(readonly, nonatomic) long long matchQuality; // @synthesize matchQuality=_matchQuality;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(_Bool)arg6 matchDataArray:(id)arg7;	// IMP=0x00000000000f0e1c

@end

