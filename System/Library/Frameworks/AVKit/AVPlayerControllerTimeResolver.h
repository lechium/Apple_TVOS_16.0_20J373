//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTimer;
@protocol AVTimeControlling;

__attribute__((visibility("hidden")))
@interface AVPlayerControllerTimeResolver : NSObject
{
    id <AVTimeControlling> _playerController;	// 8 = 0x8
    double _interval;	// 16 = 0x10
    double _resolution;	// 24 = 0x18
    double _currentTime;	// 32 = 0x20
    AVTimer *_timer;	// 40 = 0x28
    double _minTime;	// 48 = 0x30
    double _maxTime;	// 56 = 0x38
}

+ (_Bool)automaticallyNotifiesObserversOfCurrentTime;	// IMP=0x0060000000110144
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;	// IMP=0x00600000001108ff
+ (id)keyPathsForValuesAffectingSeekableTimeRangeDuration;	// IMP=0x00600000001108d3
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;	// IMP=0x00600000001108a7
+ (id)keyPathsForValuesAffectingRemainingTime;	// IMP=0x006000000011087b
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;	// IMP=0x006000000011084f
+ (id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;	// IMP=0x0060000000110823
+ (id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;	// IMP=0x00600000001107f7
+ (id)keyPathsForValuesAffectingTargetTime;	// IMP=0x00600000001107c0
- (void).cxx_destruct;	// IMP=0x000000000010f948
@property double maxTime; // @synthesize maxTime=_maxTime;
@property double minTime; // @synthesize minTime=_minTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000010f840
@property double currentTime;
@property double resolution;
@property double interval;
@property(retain) id <AVTimeControlling> playerController;
- (void)dealloc;	// IMP=0x000000000010f60c
- (id)init;	// IMP=0x000000000010f4f7
@property(readonly, getter=isCurrentTimeAtEndOfSeekableTimeRanges) _Bool currentTimeAtEndOfSeekableTimeRanges;
@property(readonly) double seekableTimeRangeDuration;
@property(readonly) double remainingTimeWithinEndTimes;
@property(readonly) double remainingTime;
@property double currentTimeWithinEndTimes;
@property(readonly) double remainingTargetTimeWithinEndTimes;
@property double targetTimeWithinEndTimes;
@property double targetTime;

@end

