//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPStoreLyricsResponse : NSObject
{
    _Bool _TTML;	// 8 = 0x8
    NSString *_lyricsContent;	// 16 = 0x10
    NSString *_lyricsID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000edd50
@property(retain, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property(retain, nonatomic) NSString *lyricsContent; // @synthesize lyricsContent=_lyricsContent;
@property(nonatomic, getter=isTTML) _Bool TTML; // @synthesize TTML=_TTML;

@end

