//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationStats : NSObject
{
    struct CLStrideCalibrationSessionMetrics fSessionMetrics;	// 8 = 0x8
    long long fHeightCM;	// 104 = 0x68
    struct CMFixedSizeQueue<double, 2UL> fLastAWDTimestamps;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x00200000003c7730
- (void).cxx_destruct;	// IMP=0x00100000003c772a
- (void)updateUserHeight:(long long)arg1;	// IMP=0x00100000003c7720
- (void)storeLastAWDTimestamps;	// IMP=0x00100000003c76c3
- (void)loadLastAWDTimestamps;	// IMP=0x00100000003c75bf
- (void)awdMotionFitnessStrideCalibration:(const struct CLStrideCalEntry *)arg1;	// IMP=0x00100000003c70a2
- (void)activityLoggerLogStrideCalEntry:(const struct CLStrideCalEntry *)arg1;	// IMP=0x00100000003c6e36
- (void)awdLogDistance:(double)arg1 status:(int)arg2 description:(id)arg3;	// IMP=0x00100000003c6c3c
- (void)setReadyForSubmission;	// IMP=0x00100000003c6c2a
- (void)endSessionMetrics:(double)arg1;	// IMP=0x00100000003c6860
- (void)startSessionMetricsWithTime:(double)arg1 session:(int)arg2;	// IMP=0x00100000003c6806
- (id)init;	// IMP=0x00100000003c67a0

@end

