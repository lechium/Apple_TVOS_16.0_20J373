//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (TVHomeSharingKit)
+ (id)_tvhk_keyPathsInComparisonPredicate:(id)arg1;	// IMP=0x00800000000b58cb
+ (id)_tvhk_keyPathsInCompoundPredicate:(id)arg1;	// IMP=0x00800000000b5703
+ (id)_tvhk_keyPathsInPredicate:(id)arg1;	// IMP=0x00800000000b55a5
+ (id)tvhk_predicateWithSubpredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2;	// IMP=0x00800000000b4f61
+ (id)tvhk_excludeAllPlaylistTypePredicate:(id)arg1;	// IMP=0x00800000000b4d6a
+ (id)tvhk_includeAnyPlaylistTypePredicate:(id)arg1;	// IMP=0x00800000000b4b73
+ (id)tvhk_unplayedPredicate;	// IMP=0x00800000000b4b2c
+ (id)tvhk_notPlaylistTypePredicateWithPlaylistType:(unsigned long long)arg1;	// IMP=0x00800000000b4abf
+ (id)tvhk_playlistTypePredicateWithPlaylistType:(unsigned long long)arg1;	// IMP=0x00800000000b4a52
+ (id)tvhk_mediaEntityCollectionArtistIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00800000000b4a36
+ (id)tvhk_mediaItemComposerTitlePredicateWithComposerTitle:(id)arg1;	// IMP=0x00800000000b4a1a
+ (id)tvhk_mediaItemAlbumArtistIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00800000000b49fe
+ (id)tvhk_mediaEntityTypePredicateWithMediaEntityType:(id)arg1;	// IMP=0x00800000000b49e2
+ (id)tvhk_mediaEntityCompilationAlbumsPredicateWithWantCompilationAlbums:(_Bool)arg1;	// IMP=0x00800000000b4975
+ (id)tvhk_mediaEntityAlbumIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00800000000b4959
+ (id)tvhk_genreTitlePredicateWithGenreTitle:(id)arg1;	// IMP=0x00800000000b493d
+ (id)tvhk_identifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00800000000b4921
+ (id)tvhk_notEqualPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00800000000b48f9
+ (id)tvhk_equalPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00800000000b48d1
+ (id)tvhk_containsPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00800000000b48a9
- (id)tvhk_keyPathsInPredicate;	// IMP=0x00100000000b557e
- (id)tvhk_predicateWithAlbumIdentifierPredicateRemoved:(id *)arg1;	// IMP=0x00100000000b525b
- (id)tvhk_predicateWithRemovePredicateTest:(CDUnknownBlockType)arg1 removedPredicate:(id *)arg2;	// IMP=0x00100000000b5034
@end
