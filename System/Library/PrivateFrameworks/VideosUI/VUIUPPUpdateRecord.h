//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIBookmarkKey, VUIUniversalPlaybackPositionRecord;

__attribute__((visibility("hidden")))
@interface VUIUPPUpdateRecord : NSObject
{
    VUIBookmarkKey *_bookmarkKey;	// 8 = 0x8
    VUIUniversalPlaybackPositionRecord *_uppRecord;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a650a
@property(retain, nonatomic) VUIUniversalPlaybackPositionRecord *uppRecord; // @synthesize uppRecord=_uppRecord;
@property(retain, nonatomic) VUIBookmarkKey *bookmarkKey; // @synthesize bookmarkKey=_bookmarkKey;

@end
