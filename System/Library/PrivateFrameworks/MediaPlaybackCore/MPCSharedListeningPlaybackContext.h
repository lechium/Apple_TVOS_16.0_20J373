//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class ICLiveLinkIdentity, ICUserIdentity, MPCPlaybackRequestEnvironment, MPCPlaybackSharedListeningProperties, NSString;

__attribute__((visibility("hidden")))
@interface MPCSharedListeningPlaybackContext : MPPlaybackContext
{
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;	// 8 = 0x8
    MPCPlaybackSharedListeningProperties *_sharedListeningProperties;	// 16 = 0x10
    ICLiveLinkIdentity *_identity;	// 24 = 0x18
}

+ (_Bool)supportsAutoPlay;	// IMP=0x0010000000183d64
+ (Class)queueFeederClass;	// IMP=0x0010000000183d53
- (void).cxx_destruct;	// IMP=0x0000000000183d11
@property(copy, nonatomic) ICLiveLinkIdentity *identity; // @synthesize identity=_identity;
@property(copy, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties; // @synthesize sharedListeningProperties=_sharedListeningProperties;
@property(copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
@property(copy, nonatomic) ICUserIdentity *userIdentity;
- (_Bool)isCompatibleWithReplacementContext:(id)arg1 incompatibleReason:(id *)arg2;	// IMP=0x0000000000183bbd
- (id)descriptionComponents;	// IMP=0x0000000000183aad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000183a39
- (long long)shuffleType;	// IMP=0x0000000000183a31
- (long long)repeatType;	// IMP=0x0000000000183a29
- (id)init;	// IMP=0x00000000001839bc
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008f5fa
- (id)getSharedListeningTracklistWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000148868

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
