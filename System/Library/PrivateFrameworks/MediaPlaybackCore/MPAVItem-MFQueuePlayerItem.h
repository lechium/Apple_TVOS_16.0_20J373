//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAVItem.h>

@class AVPlayerItem, NSData, NSNumber, NSString, NSURL;
@protocol MFCrossFadeParameters, MFGaplessParameters, MPCItemIdentifier, MPCReportingIdentityPropertiesLoading;

@interface MPAVItem (MFQueuePlayerItem)
- (_Bool)_isInContiguousAlbumWith:(id)arg1;	// IMP=0x00200000001512f2
- (_Bool)shouldPerformCrossFadeTransitionWith:(id)arg1;	// IMP=0x00200000001512a4
- (_Bool)shouldPerformGaplessTransitionWith:(id)arg1;	// IMP=0x0020000000151256
@property(readonly, nonatomic) id <MFCrossFadeParameters> crossFadeParameters;
@property(readonly, nonatomic) id <MFGaplessParameters> gaplessParameters;
- (void)reset;	// IMP=0x002000000015110f
- (void)setItemID:(id)arg1;	// IMP=0x002000000015107d
@property(readonly, copy, nonatomic) id <MPCItemIdentifier> itemID;
- (void)setCurrentItemTransition:(long long)arg1;	// IMP=0x0020000000150fd3
@property(readonly, nonatomic) double playbackStartTime;
@property(nonatomic) double playbackStartTimeOverride;
@property(readonly, nonatomic) _Bool isMovieOrTVShow;
@property(nonatomic) _Bool isVideoContent;
@property(readonly, nonatomic) _Bool isFullyDownloaded;
@property(readonly, nonatomic) _Bool hasLoadableAsset;
@property(readonly, nonatomic) double time;
@property(readonly, nonatomic) AVPlayerItem *avPlayerItem;
@property(copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSData *mpcReporting_trackInfo;
@property(readonly, copy, nonatomic) NSNumber *mpcReporting_siriInitiated;
@property(readonly, nonatomic) _Bool mpcReporting_shouldUseRelativeTimePositions;
@property(readonly, nonatomic) _Bool mpcReporting_shouldReportPlayEventsToStore;
@property(readonly, copy, nonatomic) NSString *mpcReporting_requestingBundleVersion;
@property(readonly, copy, nonatomic) NSString *mpcReporting_requestingBundleIdentifier;
@property(readonly, copy, nonatomic) NSNumber *mpcReporting_privateListeningEnabled;
@property(readonly, copy, nonatomic) NSData *mpcReporting_jingleTimedMetadata;
@property(readonly, nonatomic) unsigned long long mpcReporting_itemType;
@property(readonly, nonatomic) _Bool mpcReporting_isValidReportingItem;
@property(readonly, nonatomic) long long mpcReporting_equivalencySourceAdamID;
@property(readonly, nonatomic) id <MPCReportingIdentityPropertiesLoading> mpcReporting_identityPropertiesLoader;

// Remaining properties
@property(copy, nonatomic) NSString *contentItemID;
@property(readonly, copy, nonatomic) NSString *description;
@property(readonly, nonatomic) _Bool isAlwaysLive;
@property(readonly, nonatomic) _Bool isAssetLoaded;
@property(readonly, nonatomic) _Bool prefersSeekOverSkip;
@property(nonatomic) long long repeatIndex;
@property(readonly, copy, nonatomic) NSURL *url;
@end

