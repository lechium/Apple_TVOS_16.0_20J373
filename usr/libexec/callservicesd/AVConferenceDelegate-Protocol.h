//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVConference, MISSING_TYPE, NSData, NSDictionary, NSError, VideoAttributes;

@protocol AVConferenceDelegate
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 networkHint:(_Bool)arg3;
- (void)conference:(AVConference *)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;
- (void)conference:(AVConference *)arg1 cancelRelayRequest:(long long)arg2 requestDict:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 sendRelayUpdate:(long long)arg2 updateDict:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(NSDictionary *)arg3;
- (void)serverDiedForConference:(AVConference *)arg1;
- (void)conference:(AVConference *)arg1 remoteVideoPaused:(_Bool)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 remoteAudioPaused:(_Bool)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 remoteVideoAttributesChanged:(VideoAttributes *)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 remoteScreenAttributesChanged:(VideoAttributes *)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;
- (void)conference:(AVConference *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)conference:(AVConference *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)conference:(AVConference *)arg1 didStopWithCallID:(long long)arg2 error:(NSError *)arg3;
- (void)conference:(AVConference *)arg1 didStartSession:(_Bool)arg2 withUserInfo:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 remoteMediaStalled:(_Bool)arg3;

@optional
- (void)conference:(AVConference *)arg1 isRemoteAudioBelowThreshold:(_Bool)arg2;
- (void)conference:(AVConference *)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(AVConference *)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(AVConference *)arg1 closeConnectionForCallID:(long long)arg2;
- (MISSING_TYPE *)conference:reinitializeCallForCallID: /* Error: Ran out of types for this method. */;
- (void)conference:(AVConference *)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;
- (void)conference:(AVConference *)arg1 localAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 remoteAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3;
- (void)conference:(AVConference *)arg1 didChangeLocalVariablesForCallID:(long long)arg2;
- (void)conference:(AVConference *)arg1 didReceiveData:(NSData *)arg2 forCallID:(long long)arg3;
- (void)conference:(AVConference *)arg1 didReceiveARPLData:(NSData *)arg2 withCallID:(long long)arg3;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 didPauseVideo:(_Bool)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 didPauseAudio:(_Bool)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 isSendingAudio:(_Bool)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 didStopWithCallID:(long long)arg2 error:(NSError *)arg3 callMetadata:(NSDictionary *)arg4;
- (void)conference:(AVConference *)arg1 didStartSession:(_Bool)arg2 withCallID:(long long)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 localIPChange:(NSData *)arg2 withCallID:(long long)arg3;
@end

