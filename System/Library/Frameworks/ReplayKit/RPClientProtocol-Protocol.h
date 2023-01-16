//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NSURL, RPIOSurfaceObject;

@protocol RPClientProtocol <NSObject>

@optional
- (oneway void)recordingTimerDidUpdate:(NSString *)arg1;
- (oneway void)recordingDidPause;
- (oneway void)shouldResumeSessionType:(NSString *)arg1;
- (oneway void)recordingLockInterrupted:(NSError *)arg1;
- (oneway void)recordingDidStopWithError:(NSError *)arg1 movieURL:(NSURL *)arg2;
- (oneway void)captureHandlerWithAudioSample:(NSDictionary *)arg1 bufferType:(long long)arg2;
- (oneway void)captureHandlerWithSample:(RPIOSurfaceObject *)arg1 timingData:(NSData *)arg2;
- (oneway void)updateBroadcastURL:(NSURL *)arg1;
- (oneway void)updateBroadcastServiceInfo:(NSDictionary *)arg1;
- (oneway void)updateScreenRecordingStateWithCurrentState:(NSDictionary *)arg1;
@end
