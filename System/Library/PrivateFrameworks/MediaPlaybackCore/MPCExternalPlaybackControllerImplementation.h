//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoutingController, MPCMediaFoundationTranslator, MPCPlaybackEngine, NSString;

__attribute__((visibility("hidden")))
@interface MPCExternalPlaybackControllerImplementation : NSObject
{
    MPAVRoutingController *_routingController;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
    MPCMediaFoundationTranslator *_translator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001013e7
@property(readonly, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (long long)exernalPlaybackRouteRestrictionForItem:(id)arg1 route:(id)arg2 isScreenMirroringActive:(_Bool)arg3;	// IMP=0x000000000010128a
- (_Bool)playerShouldUseAudiOnlyMode:(id)arg1 item:(id)arg2 externalScreenType:(long long)arg3;	// IMP=0x000000000010126d
- (_Bool)isExternalPlaybackAllowedForItem:(id)arg1;	// IMP=0x0000000000101258
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;	// IMP=0x0000000000101252
- (void)pickBestDeviceRoute;	// IMP=0x0000000000101215
- (void)configureExternalPlaybackForPlayer:(id)arg1 queueItem:(id)arg2;	// IMP=0x0000000000100375
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2;	// IMP=0x000000000010024f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

