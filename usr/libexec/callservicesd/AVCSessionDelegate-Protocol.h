//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVCRateAdaptationDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class AVCSession, AVCSessionConfiguration, AVCSessionParticipant, NSData, NSDictionary, NSError;

@protocol AVCSessionDelegate <NSObject, AVCRateAdaptationDelegate>
- (void)session:(AVCSession *)arg1 removeParticipant:(AVCSessionParticipant *)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)session:(AVCSession *)arg1 addParticipant:(AVCSessionParticipant *)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)sessionServerDidDisconnect:(AVCSession *)arg1;
- (void)session:(AVCSession *)arg1 didStart:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (void)session:(AVCSession *)arg1 didStopWithError:(NSError *)arg2 metadata:(NSDictionary *)arg3;
- (void)session:(AVCSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)sessionShouldReconnect:(AVCSession *)arg1;
- (void)session:(AVCSession *)arg1 oneToOneEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)session:(AVCSession *)arg1 mediaPrioritiesDidChange:(NSDictionary *)arg2;
- (void)session:(AVCSession *)arg1 didDetectError:(NSError *)arg2;
- (void)session:(AVCSession *)arg1 frequencyLevelsDidChange:(NSData *)arg2;
- (void)session:(AVCSession *)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)session:(AVCSession *)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)session:(AVCSession *)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)session:(AVCSession *)arg1 screenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)session:(AVCSession *)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)session:(AVCSession *)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)session:(AVCSession *)arg1 didUpdate:(_Bool)arg2 configuration:(AVCSessionConfiguration *)arg3 error:(NSError *)arg4;
@end

