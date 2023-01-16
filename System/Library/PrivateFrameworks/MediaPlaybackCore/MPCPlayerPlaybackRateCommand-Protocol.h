//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerPlaybackRateCommand <MPCPlayerCommand>
@property(readonly, nonatomic) float preferredPlaybackRate;
@property(readonly, copy, nonatomic) NSArray *supportedPlaybackRates;
- (MPCPlayerCommandRequest *)setPlaybackRate:(float)arg1;
@end

