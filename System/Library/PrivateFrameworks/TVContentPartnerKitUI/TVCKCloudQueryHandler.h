//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, TVCKDataClient;

__attribute__((visibility("hidden")))
@interface TVCKCloudQueryHandler : NSObject
{
    ML3MusicLibrary *mlLibrary;	// 8 = 0x8
    TVCKDataClient *cloudDataClient;	// 16 = 0x10
}

+ (id)_artworkIdentifierWithArtworkToken:(id)arg1 andAlbumID:(id)arg2;	// IMP=0x001000000005063a
+ (id)artworkIdentifierForMLTrack:(id)arg1;	// IMP=0x00100000000505e1
+ (id)artworkTokenForMLTrack:(id)arg1;	// IMP=0x0010000000050554
+ (id)mlArtworkTrackForAlbumOrAlbumArtist:(id)arg1 isAlbumArtistID:(_Bool)arg2;	// IMP=0x00100000000501b5
+ (id)mlArtworkTrackForAlbumArtistID:(id)arg1;	// IMP=0x001000000005019e
+ (id)mlArtworkTrackForAlbumID:(id)arg1;	// IMP=0x001000000005018a
+ (id)mlPropertyForATVProperty:(id)arg1;	// IMP=0x0010000000050182
+ (id)mlPredicatePropertyForATVProperty:(id)arg1;	// IMP=0x001000000005017a
+ (id)mlQueryPropertyForATVProperty:(id)arg1;	// IMP=0x0010000000050172
@property(retain, nonatomic) TVCKDataClient *cloudDataClient; // @synthesize cloudDataClient;
@property(retain, nonatomic) ML3MusicLibrary *mlLibrary; // @synthesize mlLibrary;
- (void)handleQuery:(id)arg1 withContext:(void *)arg2;	// IMP=0x000000000005016c
- (unsigned int)mlMediaTypeForATVMediaType:(id)arg1;	// IMP=0x00000000000500bc
- (int)mlComparisonForATVOperator:(long long)arg1;	// IMP=0x000000000005009c
- (id)mlPropertiesForQuery:(id)arg1;	// IMP=0x000000000004ff03
- (id)predicateFromPredicates:(id)arg1 withOperator:(int)arg2;	// IMP=0x000000000004fe71
- (id)predicateForCompoundFilter:(id)arg1;	// IMP=0x000000000004fc84
- (id)predicateForFilter:(id)arg1;	// IMP=0x000000000004f75b
- (id)predicateFromATVFilters:(id)arg1 queryType:(long long)arg2;	// IMP=0x000000000004f259
- (void)dealloc;	// IMP=0x000000000004f202
- (id)initWithLibrary:(id)arg1 cloudDataClient:(id)arg2;	// IMP=0x000000000004f18d

@end

