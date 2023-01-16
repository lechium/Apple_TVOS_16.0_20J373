//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class AVPlaybackCoordinator, NSDictionary, NSString, NSUUID;

@protocol AVPlaybackCoordinationMediumDelegate <NSObject>
- (void)playbackCoordinator:(AVPlaybackCoordinator *)arg1 reloadTransportControlStateForItemWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)playbackCoordinator:(AVPlaybackCoordinator *)arg1 broadcastTransportControlStateDictionary:(NSDictionary *)arg2 forItemWithIdentifier:(NSString *)arg3;
- (void)playbackCoordinator:(AVPlaybackCoordinator *)arg1 broadcastLocalParticipantStateDictionary:(NSDictionary *)arg2;
- (NSUUID *)localParticipantUUIDForPlaybackCoordinator:(AVPlaybackCoordinator *)arg1;
@end

