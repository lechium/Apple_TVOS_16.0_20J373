//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricMeasurement/NSObject-Protocol.h>

@class MXMProbe, MXMSampleData;

@protocol MXMProbeDelegate <NSObject>

@optional
- (void)probeDidStop:(MXMProbe *)arg1 reason:(unsigned long long)arg2;
- (void)probeDidUpdate:(MXMProbe *)arg1 data:(MXMSampleData *)arg2 stop:(_Bool *)arg3;
- (void)probeDidStartUpdating:(MXMProbe *)arg1;
@end
