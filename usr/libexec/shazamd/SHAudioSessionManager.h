//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession;
@protocol OS_dispatch_queue, SHAudioSessionManagerDelegate;

@interface SHAudioSessionManager : NSObject
{
    _Bool _isAudioSessionInterrupted;	// 8 = 0x8
    id <SHAudioSessionManagerDelegate> _delegate;	// 16 = 0x10
    AVAudioSession *_audioSession;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_audioManagerDispatchQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003ae9d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioManagerDispatchQueue; // @synthesize audioManagerDispatchQueue=_audioManagerDispatchQueue;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(nonatomic) _Bool isAudioSessionInterrupted; // @synthesize isAudioSessionInterrupted=_isAudioSessionInterrupted;
@property(nonatomic) __weak id <SHAudioSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleAudioSessionRouteChange:(id)arg1;	// IMP=0x001000000003ad89
- (void)handleMediaServicesWereReset:(id)arg1;	// IMP=0x001000000003ace5
- (void)handleMediaServicesWereLost:(id)arg1;	// IMP=0x001000000003ac89
- (void)handleAudioSessionInterruption:(id)arg1;	// IMP=0x001000000003aa6e
- (void)deactivateAudioSession;	// IMP=0x001000000003a8fb
- (void)configureAudioSessionForAssistantService:(id)arg1;	// IMP=0x001000000003a718
- (void)configureAudioSessionForStandardClient:(id)arg1;	// IMP=0x001000000003a409
- (void)activateAudioSessionForClient:(long long)arg1;	// IMP=0x001000000003a268
- (void)unregisterAudioSessionObservers;	// IMP=0x001000000003a0f5
- (void)registerAudioSessionObservers;	// IMP=0x0010000000039f66
- (id)init;	// IMP=0x0010000000039f0e
- (void)dealloc;	// IMP=0x0010000000039e84

@end

