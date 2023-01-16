//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol CSAudioSessionProviding;

@protocol CSAudioSessionProvidingDelegate <NSObject>

@optional
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 didChangeContext:(_Bool)arg2;
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 providerInvalidated:(_Bool)arg2;
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 didSetAudioSessionActive:(_Bool)arg2;
- (void)audioSessionProvider:(id <CSAudioSessionProviding>)arg1 willSetAudioSessionActive:(_Bool)arg2;
- (void)audioSessionProviderEndInterruption:(id <CSAudioSessionProviding>)arg1;
- (void)audioSessionProviderBeginInterruption:(id <CSAudioSessionProviding>)arg1 withContext:(NSDictionary *)arg2;
- (void)audioSessionProviderBeginInterruption:(id <CSAudioSessionProviding>)arg1;
@end

