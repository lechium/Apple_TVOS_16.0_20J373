//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationRunningFormBuffer : NSObject
{
    struct deque<CLRunning::FormMetrics, std::allocator<CLRunning::FormMetrics>> fRunningFormMetrics;	// 8 = 0x8
}

+ (_Bool)isAvailable;	// IMP=0x004000000056b2fa
- (id).cxx_construct;	// IMP=0x002000000056b643
- (void).cxx_destruct;	// IMP=0x001000000056b635
- (struct CMCalibrationTrackRawStrideLength)strideLengthFromStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x001000000056b4d3
- (void)feedRunningFormMetrics:(const struct FormMetrics *)arg1;	// IMP=0x001000000056b3b0
- (void)ageOutFormMetrics;	// IMP=0x001000000056b309

@end

