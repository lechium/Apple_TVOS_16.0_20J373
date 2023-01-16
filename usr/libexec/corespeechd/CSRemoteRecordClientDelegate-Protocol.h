//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSRemoteRecordClient, NSData, NSError;

@protocol CSRemoteRecordClientDelegate <NSObject>
- (void)remoteRecordConnectionDisconnected:(CSRemoteRecordClient *)arg1;
- (void)remoteRecordTwoShotDetectedAtTime:(double)arg1;
- (void)remoteRecordLPCMBufferAvailable:(NSData *)arg1 streamHandleId:(unsigned long long)arg2;
- (void)remoteRecordDidStopRecordingWithWithStreamHandleId:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)remoteRecordDidStartRecordingWithStreamHandleId:(unsigned long long)arg1 error:(NSError *)arg2;
@end

