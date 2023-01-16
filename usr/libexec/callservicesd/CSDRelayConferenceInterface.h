//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol CSDAVConference, OS_dispatch_queue;

@interface CSDRelayConferenceInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_conferenceConnections;	// 16 = 0x10
    NSMutableSet *_conferencesAwaitingConnectionClose;	// 24 = 0x18
    CDUnknownBlockType _conferenceCreationBlock;	// 32 = 0x20
    double _connectionTimeout;	// 40 = 0x28
    double _closeConnectionTimeout;	// 48 = 0x30
    double _prepareToStopTimeout;	// 56 = 0x38
}

+ (id)sharedInstanceWithQueue:(id)arg1;	// IMP=0x00200000000b94f1
+ (id)sharedInstance;	// IMP=0x00100000000b94bd
- (void).cxx_destruct;	// IMP=0x00200000000bd95a
@property(nonatomic) double prepareToStopTimeout; // @synthesize prepareToStopTimeout=_prepareToStopTimeout;
@property(nonatomic) double closeConnectionTimeout; // @synthesize closeConnectionTimeout=_closeConnectionTimeout;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(copy, nonatomic) CDUnknownBlockType conferenceCreationBlock; // @synthesize conferenceCreationBlock=_conferenceCreationBlock;
@property(retain, nonatomic) NSMutableSet *conferencesAwaitingConnectionClose; // @synthesize conferencesAwaitingConnectionClose=_conferencesAwaitingConnectionClose;
@property(retain, nonatomic) NSMutableArray *conferenceConnections; // @synthesize conferenceConnections=_conferenceConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)conference:(id)arg1 outputLevelChangedTo:(float)arg2;	// IMP=0x00100000000bd825
- (void)conference:(id)arg1 inputLevelChangedTo:(float)arg2;	// IMP=0x00100000000bd79c
- (void)conference:(id)arg1 outputFrequencyLevelChangedTo:(id)arg2;	// IMP=0x00100000000bd71f
- (void)conference:(id)arg1 inputFrequencyLevelChangedTo:(id)arg2;	// IMP=0x00100000000bd6a2
- (void)sendingAudioChangedForConference:(id)arg1;	// IMP=0x00100000000bd5fb
- (void)mutedChangedForConference:(id)arg1;	// IMP=0x00100000000bd554
- (void)connectionClosedForConference:(id)arg1;	// IMP=0x00100000000bd4a9
- (void)conference:(id)arg1 endedWithReason:(long long)arg2 error:(id)arg3;	// IMP=0x00100000000bd13c
- (void)conferenceStarted:(id)arg1;	// IMP=0x00100000000bcf8a
- (void)conferenceFinishedPreparing:(id)arg1;	// IMP=0x00100000000bcd81
- (void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;	// IMP=0x00100000000bcb05
- (void)_postDidCloseNotificationForConference:(id)arg1;	// IMP=0x00100000000bca2c
- (void)_postDidCloseNotificationForConferenceIfNecessary:(id)arg1;	// IMP=0x00100000000bc977
- (void)_stopConference:(id)arg1;	// IMP=0x00100000000bc7ef
- (void)_cleanUpConferenceConnection:(id)arg1 error:(id)arg2;	// IMP=0x00100000000bc338
- (void)_cleanUpAllConferenceConnectionsForConference:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000bc1ca
- (void)_prepareConferenceForConferenceConnection:(id)arg1 remoteInviteDictionary:(id)arg2;	// IMP=0x00100000000bbfa2
@property(readonly, nonatomic) id <CSDAVConference> activeConference;
- (id)_conferenceConnectionsForConference:(id)arg1;	// IMP=0x00100000000bbb1d
- (id)conferenceConnectionForIdentifier:(id)arg1;	// IMP=0x00100000000bb922
- (id)activeConferenceConnectionForIdentifier:(id)arg1;	// IMP=0x00100000000bb69b
- (void)stopConferenceForIdentifier:(id)arg1;	// IMP=0x00100000000bb4f8
- (void)prepareToStopConferenceForIdentifier:(id)arg1;	// IMP=0x00100000000bafd4
- (void)setConferenceActiveForIdentifier:(id)arg1;	// IMP=0x00100000000bae7e
- (void)updateConferenceForIdentifier:(id)arg1 isUsingBaseband:(_Bool)arg2 disableAudio:(_Bool)arg3;	// IMP=0x00100000000babbd
- (void)sendData:(id)arg1 throughConferenceForIdentifier:(id)arg2;	// IMP=0x00100000000baa6d
- (void)startConferenceForIdentifier:(id)arg1 usingTransport:(id)arg2 remoteInviteDictionary:(id)arg3 didStartHandler:(CDUnknownBlockType)arg4 didStopHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ba644
- (void)prepareConferenceForCall:(id)arg1 remoteInviteDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ba565
- (void)prepareConferenceConnection:(id)arg1 remoteInviteDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ba077
- (void)setSendingAudio:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000000b9e5c
- (long long)spatialAudioSourceIdentifierForIdentifier:(id)arg1;	// IMP=0x00100000000b9d91
- (long long)outputAudioPowerSpectrumTokenForIdentifier:(id)arg1;	// IMP=0x00100000000b9cc6
- (long long)inputAudioPowerSpectrumTokenForIdentifier:(id)arg1;	// IMP=0x00100000000b9bfb
- (_Bool)isSendingAudioForIdentifier:(id)arg1;	// IMP=0x00100000000b9b30
- (void)setMuted:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000000b990e
- (_Bool)isMutedForIdentifier:(id)arg1;	// IMP=0x00100000000b983c
- (void)uplinkMutedStatusChanged:(id)arg1;	// IMP=0x00100000000b97b3
- (void)dealloc;	// IMP=0x00100000000b973e
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x00100000000b95e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

