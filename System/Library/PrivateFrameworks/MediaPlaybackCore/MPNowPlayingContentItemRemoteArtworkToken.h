//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPExportableArtworkProperties, NSString;

__attribute__((visibility("hidden")))
@interface MPNowPlayingContentItemRemoteArtworkToken : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_artworkIdentifier;	// 16 = 0x10
    MPExportableArtworkProperties *_artworkProperties;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a0492
@property(readonly, copy, nonatomic) MPExportableArtworkProperties *artworkProperties; // @synthesize artworkProperties=_artworkProperties;
@property(readonly, copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)stringRepresentation;	// IMP=0x00000000000a042c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0379
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a02c2
- (id)initWithIdentifier:(id)arg1 artworkProperties:(id)arg2 artworkIdentifier:(id)arg3;	// IMP=0x00000000000a01dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
