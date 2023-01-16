//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, NSString, TUIEmojiSearchInputViewController, TUIEmojiSearchTextField, UICollectionViewFlowLayout, UIKBTree, UIKeyboardEmojiCategory, UIKeyboardEmojiCollectionView, UIKeyboardEmojiGraphicsTraits, UIResponder;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionInputView
{
    UIKeyboardEmojiCollectionView *_collectionView;	// 8 = 0x8
    UICollectionViewFlowLayout *_flowLayout;	// 16 = 0x10
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 24 = 0x18
    _Bool _isDraggingInputView;	// 32 = 0x20
    unsigned long long _currentSection;	// 40 = 0x28
    _Bool _inputDelegateCanSupportAnimoji;	// 48 = 0x30
    _Bool _hasShownAnimojiFirstTimeExperience;	// 49 = 0x31
    _Bool _shouldRetryFetchingAnimojiRecents;	// 50 = 0x32
    _Bool _useWideAnimojiCell;	// 51 = 0x33
    _Bool _hasShownAnimojiCell;	// 52 = 0x34
    double _frameInset;	// 56 = 0x38
    _Bool _showingVariants;	// 64 = 0x40
    long long _selectedVariant;	// 72 = 0x48
    long long _currentVariantRow;	// 80 = 0x50
    UIKBTree *_selectedPopupKey;	// 88 = 0x58
    _Bool _supportsMemoji;	// 96 = 0x60
    _Bool _hasCheckedMemojiPreference;	// 97 = 0x61
    _Bool _currentlyCheckingMemojiPreference;	// 98 = 0x62
    _Bool _isSearching;	// 99 = 0x63
    UIKeyboardEmojiCategory *_category;	// 104 = 0x68
    CDUnknownBlockType _completionBlock;	// 112 = 0x70
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;	// 120 = 0x78
    NSIndexPath *_tappedSkinToneEmoji;	// 128 = 0x80
    TUIEmojiSearchInputViewController *_emojiSearchInputViewController;	// 136 = 0x88
    TUIEmojiSearchTextField *_emojiSearchField;	// 144 = 0x90
    NSIndexPath *_selectedIndexPath;	// 152 = 0x98
    NSArray *_searchResults;	// 160 = 0xa0
}

+ (_Bool)shouldHighlightEmoji:(id)arg1;	// IMP=0x00100000009d009b
+ (_Bool)wantsScreenTraits;	// IMP=0x00100000009cb230
- (void).cxx_destruct;	// IMP=0x00000000009d6b12
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property _Bool isSearching; // @synthesize isSearching=_isSearching;
@property _Bool currentlyCheckingMemojiPreference; // @synthesize currentlyCheckingMemojiPreference=_currentlyCheckingMemojiPreference;
@property _Bool hasCheckedMemojiPreference; // @synthesize hasCheckedMemojiPreference=_hasCheckedMemojiPreference;
@property _Bool supportsMemoji; // @synthesize supportsMemoji=_supportsMemoji;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) TUIEmojiSearchTextField *emojiSearchField; // @synthesize emojiSearchField=_emojiSearchField;
@property(retain, nonatomic) TUIEmojiSearchInputViewController *emojiSearchInputViewController; // @synthesize emojiSearchInputViewController=_emojiSearchInputViewController;
@property(nonatomic) __weak NSIndexPath *tappedSkinToneEmoji; // @synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji;
@property(nonatomic) __weak UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) _Bool isDraggingInputView; // @synthesize isDraggingInputView=_isDraggingInputView;
@property __weak UIKeyboardEmojiCategory *category; // @synthesize category=_category;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;	// IMP=0x00000000009d6593
- (void)updateOffsetForSearchResults;	// IMP=0x00000000009d628b
- (void)updateToCategory:(long long)arg1;	// IMP=0x00000000009d5c2d
- (void)didMoveToWindow;	// IMP=0x00000000009d56b7
- (long long)indexForPrettyCategoryDisplay:(id)arg1;	// IMP=0x00000000009d55d1
- (double)snappedXOffsetForOffset:(double)arg1 scrubbing:(_Bool)arg2;	// IMP=0x00000000009d511d
- (double)_recentlyUsedMediaRoundedOffset:(double)arg1 recentlyUsedMediaCellWidth:(double)arg2;	// IMP=0x00000000009d5018
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000009d4dfb
- (id)firstFullyVisibleHeader;	// IMP=0x00000000009d4b9c
- (id)itemInRect:(struct CGRect)arg1;	// IMP=0x00000000009d49c0
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000009d498e
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000009d48a9
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000009d488c
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000000009d486f
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000000009d4852
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000009d4705
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000009d4519
- (void)emojiSearchDidReceiveResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3;	// IMP=0x00000000009d3f5f
- (void)emojiSearchTextFieldDidReset:(id)arg1;	// IMP=0x00000000009d3d9c
- (void)emojiSearchTextFieldWillClear:(id)arg1;	// IMP=0x00000000009d3d58
- (void)emojiSearchTextFieldDidBecomeInactive:(id)arg1;	// IMP=0x00000000009d3c51
- (void)emojiSearchTextFieldWillBecomeInactive:(id)arg1;	// IMP=0x00000000009d3be5
- (void)emojiSearchTextFieldDidBecomeActive:(id)arg1;	// IMP=0x00000000009d3b6f
- (void)emojiSearchTextFieldWillBecomeActive:(id)arg1;	// IMP=0x00000000009d3add
- (_Bool)cellShouldScrollWhenSelectedAtIndexPath:(id)arg1;	// IMP=0x00000000009d395d
- (_Bool)keySupportsVariants:(id)arg1;	// IMP=0x00000000009d38e0
- (void)resetSelectionIfNeeded;	// IMP=0x00000000009d381f
- (void)updateLastSeenItemForIndexPath:(id)arg1;	// IMP=0x00000000009d36f7
- (void)preferencesControllerChanged:(id)arg1;	// IMP=0x00000000009d36c7
- (void)updateMemojiPreference;	// IMP=0x00000000009d3505
- (void)updatePreferencesForSelectedEmoji:(id)arg1;	// IMP=0x00000000009d3379
- (long long)keyCodeForCurrentEnvironmentFromKeyCode:(long long)arg1;	// IMP=0x00000000009d333b
- (void)insertSelectedEmoji:(id)arg1 shouldDismissPopover:(_Bool)arg2;	// IMP=0x00000000009d303c
- (void)updateHighlightForIndexPath:(id)arg1 scrollIfNeeded:(_Bool)arg2 animateScroll:(_Bool)arg3;	// IMP=0x00000000009d2e4b
- (_Bool)handleSelectionEvent:(id)arg1;	// IMP=0x00000000009d2d8c
- (_Bool)_handleBaseKeySelectionEvent:(id)arg1;	// IMP=0x00000000009d2839
- (_Bool)_handleVariantSelectionEvent:(id)arg1;	// IMP=0x00000000009d257f
- (_Bool)_handleInitialSelectionEvent:(id)arg1;	// IMP=0x00000000009d2318
- (_Bool)handleKeyInputForFamilySelector:(id)arg1;	// IMP=0x00000000009d19ef
- (_Bool)handleKeyInputForCollectionViewNavigation:(id)arg1;	// IMP=0x00000000009d1030
- (_Bool)handleKeyInputForVariantSelector:(id)arg1;	// IMP=0x00000000009d0bb3
- (_Bool)handleKeyEvent:(id)arg1;	// IMP=0x00000000009d0a31
- (long long)emojiCategoryTypeForSection:(long long)arg1;	// IMP=0x00000000009d09da
- (_Bool)showingRecents;	// IMP=0x00000000009d098f
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000009d06a7
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000009d00b4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000009cfebc
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000009cfe3f
- (_Bool)_shouldShowRecentlyUsedMedia;	// IMP=0x00000000009cfe37
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009cefcc
- (void)shouldDismissModalDisplayView:(id)arg1;	// IMP=0x00000000009cef6c
- (long long)didInputSubTree:(id)arg1;	// IMP=0x00000000009ce920
- (id)selectedChildSkinToneEmoji:(id)arg1;	// IMP=0x00000000009ce7c2
- (_Bool)genderEmojiBaseStringNeedVariantSelector:(id)arg1;	// IMP=0x00000000009ce747
- (id)treeForCell:(id)arg1;	// IMP=0x00000000009cc218
- (id)subTreeHitTest:(struct CGPoint)arg1;	// IMP=0x00000000009cc11b
- (_Bool)baseStringIsCoupleEmoji:(id)arg1;	// IMP=0x00000000009cbff6
- (_Bool)skinToneWasUsedForEmoji:(id)arg1;	// IMP=0x00000000009cbf7f
- (id)emojiBaseString:(id)arg1;	// IMP=0x00000000009cbe82
- (id)emojiBaseFirstCharacterString:(id)arg1;	// IMP=0x00000000009cbe4b
- (void)_setUserHasSelectedSkinToneEmoji:(_Bool)arg1;	// IMP=0x00000000009cbdfe
- (_Bool)_userHasSelectedSkinToneEmoji;	// IMP=0x00000000009cbd6b
- (void)dimKeys:(id)arg1;	// IMP=0x00000000009cbbeb
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x00000000009cbb95
- (void)dealloc;	// IMP=0x00000000009cba86
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x00000000009cba71
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;	// IMP=0x00000000009cb238

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
