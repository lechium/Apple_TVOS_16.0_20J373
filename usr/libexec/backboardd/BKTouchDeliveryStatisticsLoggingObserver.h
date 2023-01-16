//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKAverageTimeIntervalEventStatistic, BKEventStatisticsLoggingController, BKHexadecimalIntegerEventStatistic, BKIntegerEventStatistic, BKTouchDestinationStatistic, NSString;
@protocol BSInvalidatable;

@interface BKTouchDeliveryStatisticsLoggingObserver : NSObject
{
    BKEventStatisticsLoggingController *_loggingController;	// 8 = 0x8
    BKIntegerEventStatistic *_touchUpCount;	// 16 = 0x10
    BKIntegerEventStatistic *_touchDownCount;	// 24 = 0x18
    BKIntegerEventStatistic *_rangeInCount;	// 32 = 0x20
    BKIntegerEventStatistic *_rangeOutCount;	// 40 = 0x28
    BKIntegerEventStatistic *_hardCancelCount;	// 48 = 0x30
    BKIntegerEventStatistic *_softCancelCount;	// 56 = 0x38
    BKIntegerEventStatistic *_tapToWakeCount;	// 64 = 0x40
    BKIntegerEventStatistic *_stylusTouchCount;	// 72 = 0x48
    BKIntegerEventStatistic *_detachedTouchCount;	// 80 = 0x50
    BKIntegerEventStatistic *_transferredTouchCount;	// 88 = 0x58
    BKIntegerEventStatistic *_fromEdgeCount;	// 96 = 0x60
    BKHexadecimalIntegerEventStatistic *_pathsSeen;	// 104 = 0x68
    BKHexadecimalIntegerEventStatistic *_pathsStillTouching;	// 112 = 0x70
    BKHexadecimalIntegerEventStatistic *_pathsStillWithinRange;	// 120 = 0x78
    BKAverageTimeIntervalEventStatistic *_touchProcessingTimeAverage;	// 128 = 0x80
    BKTouchDestinationStatistic *_destinations;	// 136 = 0x88
    id <BSInvalidatable> _logTransaction;	// 144 = 0x90
    long long _touchProcessingCumulativeTimeUS;	// 152 = 0x98
    long long _touchProcessingCollectionCount;	// 160 = 0xa0
    double _touchProcessingCollectionStartTime;	// 168 = 0xa8
    unsigned int _lastTouchID;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000006969f
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x0010000000069619
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x001000000006942b
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x00100000000693d8
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x0010000000069385
- (void)touchDidTransfer:(unsigned int)arg1 destination:(id)arg2;	// IMP=0x0010000000069332
- (void)touchDidDetach:(unsigned int)arg1 destinations:(id)arg2;	// IMP=0x00100000000692df
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 upAtPoint:(struct CGPoint)arg3 detached:(_Bool)arg4;	// IMP=0x0010000000069288
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 downAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 transducerType:(unsigned int)arg5;	// IMP=0x0010000000069229
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 rangeOutAtPoint:(struct CGPoint)arg3;	// IMP=0x00100000000691d2
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 rangeInAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 transducerType:(unsigned int)arg5;	// IMP=0x001000000006917b
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x0010000000069175
- (void)touch:(unsigned int)arg1 didHitTestToDestination:(id)arg2 hostingChainIndex:(long long)arg3;	// IMP=0x00100000000690d3
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x00100000000690cd
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x00100000000690c7
- (void)dealloc;	// IMP=0x0010000000069085
- (id)initWithLabel:(id)arg1;	// IMP=0x0010000000068bee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
