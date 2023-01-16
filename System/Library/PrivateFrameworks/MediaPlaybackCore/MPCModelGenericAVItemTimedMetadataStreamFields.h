//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemTimedMetadataStreamFields : NSObject
{
    _Bool _explicitContent;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_artist;	// 24 = 0x18
    NSString *_album;	// 32 = 0x20
    NSArray *_artworkDictionaries;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006487d
@property(copy, nonatomic) NSArray *artworkDictionaries; // @synthesize artworkDictionaries=_artworkDictionaries;
@property(nonatomic, getter=isExplicitContent) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000064727
- (unsigned long long)hash;	// IMP=0x00000000000646b3

@end

