//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionControllerTVOS
{
    _Bool _shouldDisplayDefaultSuggestion;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    NSString *_suggestionCellIdentifier;	// 24 = 0x18
    NSArray *_allSuggestions;	// 32 = 0x20
    NSString *_searchString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000010e9235
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSArray *allSuggestions; // @synthesize allSuggestions=_allSuggestions;
@property(retain, nonatomic) NSString *suggestionCellIdentifier; // @synthesize suggestionCellIdentifier=_suggestionCellIdentifier;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldDisplayDefaultSuggestion; // @synthesize shouldDisplayDefaultSuggestion=_shouldDisplayDefaultSuggestion;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000010e90fd
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000010e9020
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000010e8f43
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000010e8c82
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000010e8c7a
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000010e8bd3
- (void)updateCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000010e86f8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000010e8641
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000010e85fd
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000010e85f2
- (void)update;	// IMP=0x00000000010e83c1
- (void)updateSearchString:(id)arg1;	// IMP=0x00000000010e82b5
- (void)updateSuggestions:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00000000010e805a
- (void)setDelegate:(id)arg1;	// IMP=0x00000000010e7fbd
- (id)makeCollectionView;	// IMP=0x00000000010e7e35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

