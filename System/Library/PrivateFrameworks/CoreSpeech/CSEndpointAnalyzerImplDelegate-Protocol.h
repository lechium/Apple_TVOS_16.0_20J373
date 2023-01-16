//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@protocol CSEndpointAnalyzerImpl;

@protocol CSEndpointAnalyzerImplDelegate <NSObject>
- (void)endpointer:(id <CSEndpointAnalyzerImpl>)arg1 detectedTwoShotAtTime:(double)arg2;

@optional
- (void)endpointer:(id <CSEndpointAnalyzerImpl>)arg1 reportEndpointBufferHostTime:(unsigned long long)arg2 firstBufferHostTime:(unsigned long long)arg3;
@end

