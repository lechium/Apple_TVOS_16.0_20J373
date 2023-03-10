//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface VUIMediaInfoFetchController : NSObject
{
    NSArray *_mediaInfos;	// 8 = 0x8
    NSOperationQueue *_imageQueue;	// 16 = 0x10
    NSMutableArray *_imageOperations;	// 24 = 0x18
    NSMutableArray *_players;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d4e8a
@property(retain, nonatomic) NSMutableArray *players; // @synthesize players=_players;
@property(retain, nonatomic) NSMutableArray *imageOperations; // @synthesize imageOperations=_imageOperations;
@property(retain, nonatomic) NSOperationQueue *imageQueue; // @synthesize imageQueue=_imageQueue;
@property(copy, nonatomic) NSArray *mediaInfos; // @synthesize mediaInfos=_mediaInfos;
- (id)loadPlayerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d4d87
- (void)loadImageAtIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d4a37
- (id)_createPlayerFromMediaInfo:(id)arg1;	// IMP=0x00000000000d49d9
- (void)removeMediaInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d47bf
- (void)appendMediaInfos:(id)arg1;	// IMP=0x00000000000d46fd
- (void)setMediaInfo:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000d43b6
- (void)_populateQueueWithMediaInfos:(id)arg1;	// IMP=0x00000000000d3e2f
- (void)dealloc;	// IMP=0x00000000000d3d94
- (id)initWithMediaInfos:(id)arg1;	// IMP=0x00000000000d3c6b
- (id)init;	// IMP=0x00000000000d3c52

@end

