//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingPlayerClient;

@interface MRDStreamCapacityManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x0040000000013a42
- (void)_handlePlaybackStateDidChange:(id)arg1;	// IMP=0x0020000000016fe6
- (id)streamsActivelyUsingSlot;	// IMP=0x0010000000016f7a
- (id)streamsThatCountTowardsCapacity;	// IMP=0x0010000000016d01
- (id)allStreamsExcludingLocal;	// IMP=0x0010000000016c64
- (id)allStreams;	// IMP=0x0010000000016b6e
@property(readonly, nonatomic) long long remainingStreamCapacity;
@property(readonly, nonatomic) long long maxStreamCapacity;
@property(readonly, nonatomic) long long activeStreamCount;
- (_Bool)willStartingPlaybackToOutputDevicesInterrupt:(id)arg1;	// IMP=0x001000000001642c
- (id)_willStartingPlaybackToOutputDevicesInterrupt:(id)arg1;	// IMP=0x0010000000015f9f
@property(readonly, nonatomic) MRDNowPlayingPlayerClient *bestStreamToInterrupt;
- (void)interruptBestStreamIfNecessaryToActivateStreamWithPlayerPath:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015127
- (id)canActivateStreamWithPlayerPath:(id)arg1;	// IMP=0x00100000000140c8
- (id)description;	// IMP=0x0010000000013b2b
- (id)init;	// IMP=0x0010000000013a97

@end

