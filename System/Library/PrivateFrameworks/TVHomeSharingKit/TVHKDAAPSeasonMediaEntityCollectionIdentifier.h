//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaEntityIdentifier.h"

@class NSNumber, NSString, TVHKDMAPMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKDAAPSeasonMediaEntityCollectionIdentifier : TVHKMediaEntityIdentifier
{
    NSString *_showTitle;	// 8 = 0x8
    TVHKDMAPMediaEntityIdentifier *_albumIdentifier;	// 16 = 0x10
    NSString *_albumTitle;	// 24 = 0x18
    NSNumber *_seasonNumber;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000008bc94
+ (id)seasonIdentifierWithEpisode:(id)arg1;	// IMP=0x001000000008b9ac
+ (id)seasonIdentifierBasedOnAlbumMetadataWithEpisode:(id)arg1;	// IMP=0x001000000008b8d1
- (void).cxx_destruct;	// IMP=0x000000000008c68e
@property(readonly, copy, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(readonly, copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(readonly, copy, nonatomic) TVHKDMAPMediaEntityIdentifier *albumIdentifier; // @synthesize albumIdentifier=_albumIdentifier;
@property(readonly, copy, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000008c505
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008c12c
- (unsigned long long)hash;	// IMP=0x000000000008bfb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008be70
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008bc9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008bc89
- (id)_initWithShowTitle:(id)arg1 albumTitle:(id)arg2 seasonNumber:(id)arg3 albumIdentifier:(id)arg4;	// IMP=0x000000000008bb03
- (id)initWithProtocol:(unsigned long long)arg1;	// IMP=0x000000000008ba94

@end

