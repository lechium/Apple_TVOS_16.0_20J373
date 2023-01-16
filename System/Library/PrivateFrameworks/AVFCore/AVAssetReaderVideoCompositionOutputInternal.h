//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCustomVideoCompositorSession, AVVideoComposition, AVVideoOutputSettings, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetReaderVideoCompositionOutputInternal : NSObject
{
    NSArray *videoTracks;	// 8 = 0x8
    NSArray *sampleDataTrackIDs;	// 16 = 0x10
    AVVideoOutputSettings *videoOutputSettings;	// 24 = 0x18
    AVVideoComposition *videoComposition;	// 32 = 0x20
    void *figVideoCompositor;	// 40 = 0x28
    AVCustomVideoCompositorSession *customVideoCompositorSession;	// 48 = 0x30
}

@end

