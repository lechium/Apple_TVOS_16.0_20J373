//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerPlaybackCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface ICLinkLinkAVPlaybackCoordinatorMedium
{
    AVPlayerPlaybackCoordinator *_playbackCoordinator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000008e139
@property(readonly, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
- (void)playbackCoordinator:(id)arg1 reloadTransportControlStateForItemWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008e110
- (void)playbackCoordinator:(id)arg1 broadcastTransportControlStateDictionary:(id)arg2 forItemWithIdentifier:(id)arg3;	// IMP=0x000000000008e0f8
- (void)playbackCoordinator:(id)arg1 broadcastLocalParticipantStateDictionary:(id)arg2;	// IMP=0x000000000008e0e3
- (id)localParticipantUUIDForPlaybackCoordinator:(id)arg1;	// IMP=0x000000000008e0d1
- (void)clearCoordinationMediumDelegate;	// IMP=0x000000000008e0b2
- (void)removeParticipant:(id)arg1;	// IMP=0x000000000008e095
- (void)handleNewTransportControlStateDictionary:(id)arg1;	// IMP=0x000000000008e078
- (void)handleNewParticipantStateDictionary:(id)arg1;	// IMP=0x000000000008e05b
- (void)_playbackCoordinatorDidIssueCommandToPlaybackObjectNotification:(id)arg1;	// IMP=0x000000000008dcff
- (_Bool)isCoordinatorSuspended;	// IMP=0x000000000008dcac
- (id)initWithPlaybackCoordinator:(id)arg1 liveLink:(id)arg2;	// IMP=0x000000000008dbb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

