//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SDAirDropDiscoveryLogger : NSObject
{
    NSMutableDictionary *_realNameToMetricsMap;	// 8 = 0x8
}

+ (id)discoverabilityMetricsForNode:(struct __SFNode *)arg1;	// IMP=0x00400000000c67a6
+ (id)updateMetrics:(id)arg1 withNode:(struct __SFNode *)arg2;	// IMP=0x00100000000c6029
- (void).cxx_destruct;	// IMP=0x00200000000c6823
@property(retain, nonatomic) NSMutableDictionary *realNameToMetricsMap; // @synthesize realNameToMetricsMap=_realNameToMetricsMap;
- (void)logMetricsWithSessionTime:(double)arg1;	// IMP=0x00100000000c5dcc
- (void)updateWithAirDropNodes:(id)arg1;	// IMP=0x00100000000c5bc1
- (id)init;	// IMP=0x00100000000c5b6b

@end

