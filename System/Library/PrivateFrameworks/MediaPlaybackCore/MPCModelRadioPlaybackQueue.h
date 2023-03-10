//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICRadioPlaybackHistory, ICRadioPlaybackHistoryStore, ICStoreRequestContext, MPCModelGenericAVItemUserIdentityPropertySet, MPModelRadioStation, MPSectionedCollection, _MPCModelRadioPlaybackQueueStationTracksCollection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioPlaybackQueue : NSObject
{
    ICRadioPlaybackHistoryStore *_playbackHistoryStore;	// 8 = 0x8
    ICStoreRequestContext *_storeRequestContext;	// 16 = 0x10
    MPModelRadioStation *_radioStation;	// 24 = 0x18
    _MPCModelRadioPlaybackQueueStationTracksCollection *_stationTracks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a1d55
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @synthesize radioStation=_radioStation;
- (void)updateWithPersonalizedResponse:(id)arg1;	// IMP=0x00000000001a1c96
- (id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2;	// IMP=0x00000000001a1a90
@property(readonly, nonatomic) MPSectionedCollection *tracks;
- (id)trackForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a1a64
@property(readonly, nonatomic) MPSectionedCollection *trackModels;
- (void)savePlaybackHistoryWithUpdates:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a1770
- (void)savePlaybackHistoryWithUpdates:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a175c
- (long long)removeExplicitItems;	// IMP=0x00000000001a1746
- (void)removeAllItems;	// IMP=0x00000000001a1730
@property(readonly, copy, nonatomic) ICRadioPlaybackHistory *playbackHistory;
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;	// IMP=0x00000000001a16b8
- (id)AVItemAtIndex:(long long)arg1;	// IMP=0x00000000001a15e0
@property(retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
- (id)initWithPlaybackContext:(id)arg1;	// IMP=0x00000000001a1494

@end

