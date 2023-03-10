//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMetadataItem, NSArray, NSDate, NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface AVInfoPanelPlaybackMetadata : NSObject
{
    _Bool _closedCaptioned;	// 8 = 0x8
    _Bool _livePlayback;	// 9 = 0x9
    NSDateFormatter *_yearDateFormatter;	// 16 = 0x10
    NSArray *_metadataItems;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    double _duration;	// 40 = 0x28
    long long _videoResolution;	// 48 = 0x30
    long long _videoRange;	// 56 = 0x38
    long long _audioFormat;	// 64 = 0x40
}

+ (_Bool)_closedCaptioningStatusForPlayerController:(id)arg1;	// IMP=0x00100000000f9b05
+ (double)_durationForPlayerController:(id)arg1;	// IMP=0x00100000000f9a4b
+ (id)_metadataItemsForPlayerItem:(id)arg1 withAsset:(id)arg2;	// IMP=0x00100000000f97e9
+ (void)_loadAssetValues:(id)arg1 into:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f96a0
+ (id)playbackMetadataForPlayerController:(id)arg1 fulfillment:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f953e
- (void).cxx_destruct;	// IMP=0x00000000000f950b
@property(readonly, nonatomic) long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property(readonly, nonatomic) long long videoRange; // @synthesize videoRange=_videoRange;
@property(readonly, nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(readonly, nonatomic, getter=isLivePlayback) _Bool livePlayback; // @synthesize livePlayback=_livePlayback;
@property(readonly, nonatomic, getter=isClosedCaptioned) _Bool closedCaptioned; // @synthesize closedCaptioned=_closedCaptioned;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSArray *metadataItems; // @synthesize metadataItems=_metadataItems;
@property(readonly, nonatomic, getter=_yearDateFormatter) NSDateFormatter *yearDateFormatter; // @synthesize yearDateFormatter=_yearDateFormatter;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f936b
- (unsigned long long)hash;	// IMP=0x00000000000f9355
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f930d
- (id)initWithPlaybackMetadata:(id)arg1;	// IMP=0x00000000000f91c9
- (id)initWithPlayerController:(id)arg1;	// IMP=0x00000000000f902e
- (id)_releaseDateStringItem;	// IMP=0x00000000000fab7a
@property(readonly, nonatomic) AVMetadataItem *episodeNumberItem;
@property(readonly, nonatomic) AVMetadataItem *seasonNumberItem;
@property(readonly, nonatomic) AVMetadataItem *secondaryTitleItem;
@property(readonly, nonatomic) AVMetadataItem *titleItem;
- (id)metadataItemForIdentifiers:(id)arg1;	// IMP=0x00000000000fa6e8
@property(readonly, nonatomic) NSString *releaseDateString;
@property(readonly, nonatomic) NSString *seasonEpisodeString;
@property(readonly, nonatomic) NSString *episodeNumberString;
@property(readonly, nonatomic) NSString *seasonNumberString;
@property(readonly, nonatomic) NSString *secondaryTitleString;
@property(readonly, nonatomic) NSString *titleString;

@end

