//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DeviceScorerContext, MISSING_TYPE;

@interface DeviceScorer : NSObject
{
    DeviceScorerContext *_context;	// 8 = 0x8
}

+ (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0040000000031b60
+ (id)_valueForKey:(id)arg1;	// IMP=0x0010000000031b18
+ (_Bool)_shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3;	// IMP=0x00100000000318df
+ (_Bool)_resultForSamplingSession:(id)arg1 isActive:(_Bool *)arg2;	// IMP=0x001000000003176d
+ (double)_randomDouble;	// IMP=0x0010000000031733
+ (_Bool)_shouldEnableDeviceScoringV2;	// IMP=0x0010000000031310
+ (_Bool)_shouldEnableDeviceScoring;	// IMP=0x0010000000031290
+ (id)_loadURLBag;	// IMP=0x0010000000030db2
+ (id)_hexEncodingForData:(id)arg1;	// IMP=0x0010000000030cd2
+ (_Bool)deviceScoringSupportedV2;	// IMP=0x00100000000309b0
+ (_Bool)deviceScoringSupported;	// IMP=0x00100000000309a8
- (void).cxx_destruct;	// IMP=0x0020000000031ba0
@property(readonly) DeviceScorerContext *context; // @synthesize context=_context;
- (id)_serverEndpointIdentifierForServerEndpoint:(long long)arg1;	// IMP=0x0010000000031276
- (void)_initDeviceScorerWithContext:(id)arg1;	// IMP=0x0010000000030dac
- (MISSING_TYPE *)didConsumeDeviceScore: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000030b45
- (void)deviceScoreWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000309b8
- (id)initWithServerEndpoint:(long long)arg1;	// IMP=0x00100000000308fc

@end

