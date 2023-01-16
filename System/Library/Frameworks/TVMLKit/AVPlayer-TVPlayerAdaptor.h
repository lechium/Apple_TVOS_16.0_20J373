//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVPlayer.h>

@class NSError, NSObject, NSString;
@protocol TVPlayerItemImpl;

@interface AVPlayer (TVPlayerAdaptor)
+ (id)playerItemForMediaItem:(id)arg1;	// IMP=0x00100000000a0ebf

// Remaining properties
@property(nonatomic) long long actionAtItemEnd;
@property(readonly, nonatomic) NSObject<TVPlayerItemImpl> *currentItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) _Bool preventsDisplaySleepDuringVideoPlayback;
@property(nonatomic) float rate;
@property(readonly, nonatomic) long long status;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long timeControlStatus;
@end

