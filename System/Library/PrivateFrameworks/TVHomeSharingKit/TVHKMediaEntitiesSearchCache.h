//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, TVHKMediaServerIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesSearchCache : NSObject
{
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 8 = 0x8
    NSString *_searchText;	// 16 = 0x10
    unsigned long long _revision;	// 24 = 0x18
    NSArray *_movies;	// 32 = 0x20
    NSArray *_movieRentals;	// 40 = 0x28
    NSArray *_shows;	// 48 = 0x30
    NSArray *_showEpisodes;	// 56 = 0x38
    NSArray *_musicAlbums;	// 64 = 0x40
    NSArray *_musicAlbumArtists;	// 72 = 0x48
    NSArray *_musicSongs;	// 80 = 0x50
    NSArray *_musicVideos;	// 88 = 0x58
    NSArray *_musicItems;	// 96 = 0x60
    NSArray *_podcasts;	// 104 = 0x68
    NSArray *_podcastEpisodes;	// 112 = 0x70
    NSArray *_iTunesUCourses;	// 120 = 0x78
    NSArray *_iTunesUEpisodes;	// 128 = 0x80
    NSArray *_audiobooks;	// 136 = 0x88
    NSArray *_audiobookChapters;	// 144 = 0x90
    NSArray *_homeVideos;	// 152 = 0x98
    NSMutableDictionary *_mediaItemByNonPersistentID;	// 160 = 0xa0
    NSMutableDictionary *_albumByNonPersistentID;	// 168 = 0xa8
    NSMutableDictionary *_albumArtistByNonPersistentID;	// 176 = 0xb0
    NSArray *_mediaItems;	// 184 = 0xb8
    NSArray *_albums;	// 192 = 0xc0
    NSArray *_albumArtists;	// 200 = 0xc8
}

+ (id)_nonPersistentIDsFromMediaEntityIdentifiers:(id)arg1;	// IMP=0x0010000000037bd3
+ (id)_nonPersistentIDFromMediaEntityIdentifier:(id)arg1;	// IMP=0x0010000000037b2a
+ (id)_mediaEntityTypePredicateWithMediaEntityCollectionType:(unsigned long long)arg1 mediaItemType:(unsigned long long)arg2 mediaCategoryType:(unsigned long long)arg3;	// IMP=0x0010000000037aa4
+ (id)_mediaEntityTypePredicateWithMediaEntityCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;	// IMP=0x0010000000037a8d
+ (id)_mediaEntityTypePredicateWithMediaItemType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;	// IMP=0x0010000000037a73
+ (id)_sortedMediaEntitiesWithMediaEntities:(id)arg1;	// IMP=0x0010000000037998
+ (_Bool)_updateMediaEntitiesDictionary:(id)arg1 withMediaEntityFetchResponse:(id)arg2;	// IMP=0x00100000000372af
+ (id)new;	// IMP=0x0010000000036000
- (void).cxx_destruct;	// IMP=0x0000000000037f72
@property(copy, nonatomic) NSArray *albumArtists; // @synthesize albumArtists=_albumArtists;
@property(copy, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) NSMutableDictionary *albumArtistByNonPersistentID; // @synthesize albumArtistByNonPersistentID=_albumArtistByNonPersistentID;
@property(retain, nonatomic) NSMutableDictionary *albumByNonPersistentID; // @synthesize albumByNonPersistentID=_albumByNonPersistentID;
@property(retain, nonatomic) NSMutableDictionary *mediaItemByNonPersistentID; // @synthesize mediaItemByNonPersistentID=_mediaItemByNonPersistentID;
@property(retain, nonatomic) NSArray *homeVideos; // @synthesize homeVideos=_homeVideos;
@property(retain, nonatomic) NSArray *audiobookChapters; // @synthesize audiobookChapters=_audiobookChapters;
@property(retain, nonatomic) NSArray *audiobooks; // @synthesize audiobooks=_audiobooks;
@property(retain, nonatomic) NSArray *iTunesUEpisodes; // @synthesize iTunesUEpisodes=_iTunesUEpisodes;
@property(retain, nonatomic) NSArray *iTunesUCourses; // @synthesize iTunesUCourses=_iTunesUCourses;
@property(retain, nonatomic) NSArray *podcastEpisodes; // @synthesize podcastEpisodes=_podcastEpisodes;
@property(retain, nonatomic) NSArray *podcasts; // @synthesize podcasts=_podcasts;
@property(retain, nonatomic) NSArray *musicItems; // @synthesize musicItems=_musicItems;
@property(retain, nonatomic) NSArray *musicVideos; // @synthesize musicVideos=_musicVideos;
@property(retain, nonatomic) NSArray *musicSongs; // @synthesize musicSongs=_musicSongs;
@property(retain, nonatomic) NSArray *musicAlbumArtists; // @synthesize musicAlbumArtists=_musicAlbumArtists;
@property(retain, nonatomic) NSArray *musicAlbums; // @synthesize musicAlbums=_musicAlbums;
@property(retain, nonatomic) NSArray *showEpisodes; // @synthesize showEpisodes=_showEpisodes;
@property(retain, nonatomic) NSArray *shows; // @synthesize shows=_shows;
@property(retain, nonatomic) NSArray *movieRentals; // @synthesize movieRentals=_movieRentals;
@property(retain, nonatomic) NSArray *movies; // @synthesize movies=_movies;
@property(nonatomic) unsigned long long revision; // @synthesize revision=_revision;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, copy, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
- (id)_albumsWithMediaCategoryType:(unsigned long long)arg1;	// IMP=0x00000000000378cd
- (id)_albumArtistsWithMediaCategoryType:(unsigned long long)arg1;	// IMP=0x0000000000037802
- (id)_mediaItemsWithMediaItemType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;	// IMP=0x000000000003764c
- (void)_updateAlbumsWithAlbumsResponse:(id)arg1;	// IMP=0x000000000003722a
- (void)_updateAlbumArtistsWithAlbumArtistResponse:(id)arg1;	// IMP=0x00000000000371a5
- (void)_updateMediaItemsWithMediaItemsResponse:(id)arg1;	// IMP=0x0000000000037120
- (void)_clearCachedMediaItemArrays;	// IMP=0x0000000000037058
- (void)_clearCachedAlbumArrays;	// IMP=0x0000000000036ff9
- (void)_clearCachedAlbumArtistArrays;	// IMP=0x0000000000036fc7
- (id)description;	// IMP=0x0000000000036980
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000368ad
- (void)reset;	// IMP=0x0000000000036287
- (void)updateWithSearchFetchResponse:(id)arg1 searchText:(id)arg2;	// IMP=0x000000000003617c
- (id)initWithMediaServerIdentifier:(id)arg1;	// IMP=0x000000000003609e
- (id)init;	// IMP=0x000000000003602f

@end

