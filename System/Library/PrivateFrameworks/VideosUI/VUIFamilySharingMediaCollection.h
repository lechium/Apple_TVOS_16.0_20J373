//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaCollection.h"

@class NSArray, NSString, VUIFamilySharingEntity;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingMediaCollection : VUIMediaCollection
{
    NSString *_artworkURL;	// 8 = 0x8
    NSString *_amsShowIdentifier;	// 16 = 0x10
    NSString *_amsSeasonIdentifier;	// 24 = 0x18
    NSArray *_seasonNumbers;	// 32 = 0x20
    VUIFamilySharingEntity *_entity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000022e660
@property(retain, nonatomic) VUIFamilySharingEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSArray *seasonNumbers; // @synthesize seasonNumbers=_seasonNumbers;
@property(retain, nonatomic) NSString *amsSeasonIdentifier; // @synthesize amsSeasonIdentifier=_amsSeasonIdentifier;
@property(retain, nonatomic) NSString *amsShowIdentifier; // @synthesize amsShowIdentifier=_amsShowIdentifier;
@property(retain, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
- (id)showTitle;	// IMP=0x000000000022e58a
- (id)duration;	// IMP=0x000000000022e451
- (id)genreTitle;	// IMP=0x000000000022e401
- (id)releaseYear;	// IMP=0x000000000022e336
- (id)releaseDate;	// IMP=0x000000000022e2e6
- (id)contentDescription;	// IMP=0x000000000022e296
- (id)contentRating;	// IMP=0x000000000022e246
- (id)seasonCount;	// IMP=0x000000000022e1a3
- (id)seasonNumber;	// IMP=0x000000000022df40
- (id)title;	// IMP=0x000000000022de75
- (id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 mediaEntityType:(id)arg3;	// IMP=0x000000000022dd2d

@end

