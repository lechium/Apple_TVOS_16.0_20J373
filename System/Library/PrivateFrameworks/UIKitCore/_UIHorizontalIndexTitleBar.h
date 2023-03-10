//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewCompositionalLayout, UIFocusGuide, _UIFocusFastScrollingIndexBarEntry, _UIHorizontalIndexTitleBarCell;
@protocol _UIHorizontalIndexTitleBarDelegate;

__attribute__((visibility("hidden")))
@interface _UIHorizontalIndexTitleBar : UIView
{
    NSArray *_entries;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UICollectionViewCompositionalLayout *_layout;	// 24 = 0x18
    UIFocusGuide *_horizontalIndexTitleBarFocusGuide;	// 32 = 0x20
    _UIFocusFastScrollingIndexBarEntry *_selectedEntry;	// 40 = 0x28
    NSIndexPath *_selectedEntryIndexPath;	// 48 = 0x30
    _UIHorizontalIndexTitleBarCell *_focusedCell;	// 56 = 0x38
    id <_UIHorizontalIndexTitleBarDelegate> _delegate;	// 64 = 0x40
    struct UIEdgeInsets _sectionInset;	// 72 = 0x48
    struct UIEdgeInsets _parentContentInset;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000064d0cc
@property(nonatomic, getter=_parentContentInset, setter=_setParentContentInset:) struct UIEdgeInsets parentContentInset; // @synthesize parentContentInset=_parentContentInset;
@property(nonatomic) __weak id <_UIHorizontalIndexTitleBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak _UIHorizontalIndexTitleBarCell *focusedCell; // @synthesize focusedCell=_focusedCell;
@property(retain, nonatomic) NSIndexPath *selectedEntryIndexPath; // @synthesize selectedEntryIndexPath=_selectedEntryIndexPath;
@property(retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *selectedEntry; // @synthesize selectedEntry=_selectedEntry;
@property(retain, nonatomic) UIFocusGuide *horizontalIndexTitleBarFocusGuide; // @synthesize horizontalIndexTitleBarFocusGuide=_horizontalIndexTitleBarFocusGuide;
@property(retain, nonatomic) UICollectionViewCompositionalLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000000064cf56
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000064ce6f
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000064cd88
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000064cd44
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000064cd39
- (id)preferredFocusEnvironments;	// IMP=0x000000000064ccae
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000064cb7a
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000064ca88
- (id)_existingCellForSelectedIndexPath;	// IMP=0x000000000064c977
- (struct NSDirectionalEdgeInsets)_combinedSectionInset;	// IMP=0x000000000064c87b
- (void)_cancelDelayedFocusAction;	// IMP=0x000000000064c84a
- (void)_sendDelayedFocusActionIfNecessary;	// IMP=0x000000000064c80b
- (void)_selectFocusedCell;	// IMP=0x000000000064c6c4
- (_Bool)_isViewEntryCell:(id)arg1;	// IMP=0x000000000064c5b1
- (id)_currentlyFocusedCell;	// IMP=0x000000000064c59f
- (void)_selectEntryForTitleIndex:(long long)arg1;	// IMP=0x000000000064c3d2
- (void)_updateWithEntries:(id)arg1;	// IMP=0x000000000064c33e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000064c2fd
- (void)_flipIfRightToLeft;	// IMP=0x000000000064c1f1
- (void)commonInit;	// IMP=0x000000000064b971
- (id)init;	// IMP=0x000000000064b925

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

