//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPPlaybackUserDefaults;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPPlaybackUserDefaults : NSObject
{
    MPPlaybackUserDefaults *_underlyingPlaybackUserDefaults;	// 8 = 0x8
}

+ (id)preferredResolutionsDidChangeNotification;	// IMP=0x004000000000809e
+ (id)standardUserDefaults;	// IMP=0x0040000000007cca
- (void).cxx_destruct;	// IMP=0x000000000000814e
- (void)_handlePreferredResolutionsDidChangeNotification:(id)arg1;	// IMP=0x00000000000080ab
@property(readonly, nonatomic) long long preferredVideoLowBandwidthResolution;
@property(readonly, nonatomic) long long preferredMusicLowBandwidthResolution;
- (void)dealloc;	// IMP=0x0000000000007f73
- (id)_initWithUnderlyingPlaybackUserDefaults:(id)arg1;	// IMP=0x0000000000007e01

@end

