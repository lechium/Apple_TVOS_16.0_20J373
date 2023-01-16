//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVPRelatedContentViewController;
@protocol TVPPlayback, TVPRelatedContentLoaderDelegate;

__attribute__((visibility("hidden")))
@interface TVPRelatedContentLoader : NSObject
{
    NSObject<TVPPlayback> *_player;	// 8 = 0x8
    TVPRelatedContentViewController *_relatedContentViewController;	// 16 = 0x10
    id <TVPRelatedContentLoaderDelegate> _delegate;	// 24 = 0x18
    id _itemDidChangeObserver;	// 32 = 0x20
    id _metadataDidChangeObserver;	// 40 = 0x28
    id _beginningBoundaryTimeObserver;	// 48 = 0x30
    id _endingBoundaryTimeObserver;	// 56 = 0x38
    id _elapsedTimeObserver;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000009f17b
@property(retain, nonatomic) id elapsedTimeObserver; // @synthesize elapsedTimeObserver=_elapsedTimeObserver;
@property(retain, nonatomic) id endingBoundaryTimeObserver; // @synthesize endingBoundaryTimeObserver=_endingBoundaryTimeObserver;
@property(retain, nonatomic) id beginningBoundaryTimeObserver; // @synthesize beginningBoundaryTimeObserver=_beginningBoundaryTimeObserver;
@property(nonatomic) __weak id metadataDidChangeObserver; // @synthesize metadataDidChangeObserver=_metadataDidChangeObserver;
@property(nonatomic) __weak id itemDidChangeObserver; // @synthesize itemDidChangeObserver=_itemDidChangeObserver;
@property(nonatomic) __weak id <TVPRelatedContentLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVPRelatedContentViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
@property(retain, nonatomic) NSObject<TVPPlayback> *player; // @synthesize player=_player;
- (void)_updateDurationUntilPlaybackWillAdvance;	// IMP=0x000000000009e9e9
- (id)_durationUntilPlaybackWillAdvance;	// IMP=0x000000000009e918
- (void)_updateBoundaryTimeObserversForPlayer:(id)arg1;	// IMP=0x000000000009e5a8
- (id)_presentationEndTimeForCurrentMediaItem;	// IMP=0x000000000009e432
- (id)_presentationBeginTimeForCurrentMediaItem;	// IMP=0x000000000009e2ba
- (void)_didLoadRelatedContent:(id)arg1;	// IMP=0x000000000009e209
- (void)_crossedPresentationEndTimeBoundary;	// IMP=0x000000000009e16b
- (void)_crossedPresentationBeginTimeBoundary;	// IMP=0x000000000009df4f
- (_Bool)_shouldShowRelatedContent:(id)arg1;	// IMP=0x000000000009dec4
- (void)_removeObservers;	// IMP=0x000000000009dd33
- (void)_updateBoundMediaItemEndAction;	// IMP=0x000000000009dd21
- (void)_updateBoundDuration;	// IMP=0x000000000009dcd5
- (void)dealloc;	// IMP=0x000000000009dc97
- (void)tvs_bindMediaItemEndActionBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000000009db9e
- (id)MediaItemEndActionBinding;	// IMP=0x000000000009db4e
- (void)tvs_bindDurationBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000000009da55
- (id)DurationBinding;	// IMP=0x000000000009da05

@end
