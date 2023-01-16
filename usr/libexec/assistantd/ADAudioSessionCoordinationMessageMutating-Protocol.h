//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ADAudioSessionCoordinationMessageBeginAudioSessionRequest, ADAudioSessionCoordinationMessageBeginAudioSessionResponse, ADAudioSessionCoordinationMessageEndAudioSessionRequest, ADAudioSessionCoordinationMessageEndAudioSessionResponse, ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest, ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse;

@protocol ADAudioSessionCoordinationMessageMutating <NSObject>
- (void)setPayloadEndAudioSessionResponse:(ADAudioSessionCoordinationMessageEndAudioSessionResponse *)arg1;
- (void)setPayloadEndAudioSessionRequest:(ADAudioSessionCoordinationMessageEndAudioSessionRequest *)arg1;
- (void)setPayloadKeepAudioSessionAliveResponse:(ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse *)arg1;
- (void)setPayloadKeepAudioSessionAliveRequest:(ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest *)arg1;
- (void)setPayloadBeginAudioSessionResponse:(ADAudioSessionCoordinationMessageBeginAudioSessionResponse *)arg1;
- (void)setPayloadBeginAudioSessionRequest:(ADAudioSessionCoordinationMessageBeginAudioSessionRequest *)arg1;
- (void)setType:(long long)arg1;
- (void)setHostTime:(unsigned long long)arg1;
@end

