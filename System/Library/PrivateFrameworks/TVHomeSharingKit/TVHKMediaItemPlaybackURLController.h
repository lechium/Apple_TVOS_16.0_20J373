//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface TVHKMediaItemPlaybackURLController : NSObject
{
    NSCache *_DAAPPlaybackURLCache;	// 8 = 0x8
    NSCache *_DPAPPlaybackURLCache;	// 16 = 0x10
}

+ (id)_playbackURLCacheKeyWithItemID:(unsigned long long)arg1 itemFormat:(id)arg2;	// IMP=0x006000000001d377
- (void).cxx_destruct;	// IMP=0x000000000001d510
@property(retain, nonatomic) NSCache *DPAPPlaybackURLCache; // @synthesize DPAPPlaybackURLCache=_DPAPPlaybackURLCache;
@property(retain, nonatomic) NSCache *DAAPPlaybackURLCache; // @synthesize DAAPPlaybackURLCache=_DAAPPlaybackURLCache;
- (id)_DMAPPlaybackURLStringWithItemID:(unsigned long long)arg1 databaseID:(unsigned int)arg2 itemFormat:(id)arg3 sessionID:(unsigned int)arg4;	// IMP=0x000000000001d49c
- (id)_signedURLWithURLPathString:(id)arg1 baseURL:(id)arg2 sessionState:(id)arg3;	// IMP=0x000000000001d39f
- (void)clearCachedURLs;	// IMP=0x000000000001d2f6
- (id)playbackURLForMediaItem:(id)arg1 baseURL:(id)arg2 sessionState:(id)arg3;	// IMP=0x000000000001cf2e
- (id)init;	// IMP=0x000000000001ce85

@end

