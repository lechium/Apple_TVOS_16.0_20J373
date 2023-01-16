//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaCollection.h"

@class VUIPlistMediaDatabaseSeason;

__attribute__((visibility("hidden")))
@interface VUIPlistSeasonMediaCollection : VUIMediaCollection
{
    VUIPlistMediaDatabaseSeason *_databaseSeason;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007051e
@property(retain, nonatomic) VUIPlistMediaDatabaseSeason *databaseSeason; // @synthesize databaseSeason=_databaseSeason;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;	// IMP=0x000000000007043c
- (id)mediaItemCount;	// IMP=0x00000000000703ab
- (id)_valueForPropertyDescriptor:(id)arg1;	// IMP=0x00000000000702a8
- (id)seasonNumber;	// IMP=0x0000000000070258
- (id)showTitle;	// IMP=0x00000000000701de
- (id)showIdentifier;	// IMP=0x0000000000070131
- (id)playedState;	// IMP=0x0000000000070124
- (id)coverArtImageIdentifier;	// IMP=0x00000000000700aa
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;	// IMP=0x000000000007003b
- (id)initWithMediaLibrary:(id)arg1 databaseSeason:(id)arg2 requestedProperties:(id)arg3;	// IMP=0x000000000006ff07

@end

