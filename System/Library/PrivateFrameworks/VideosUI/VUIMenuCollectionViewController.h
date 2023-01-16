//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UICollectionViewCell, UICollectionViewDiffableDataSource, VUICollectionConfiguration, VUILegacyCollectionView, VUIMenuDataSource, VUIMenuSectionHeaderCollectionViewCell, _UIDiffableDataSourceSectionController;
@protocol VUIMenuCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIMenuCollectionViewController : UIViewController
{
    _Bool _shouldShowLeftBarButton;	// 8 = 0x8
    _Bool _shouldShowBackButton;	// 9 = 0x9
    _Bool _shouldDeselectOnViewAppear;	// 10 = 0xa
    _Bool _isInPrimaryOnlyMode;	// 11 = 0xb
    _Bool _shouldMarkFirstCategorySelected;	// 12 = 0xc
    _Bool _genresOnlyMenu;	// 13 = 0xd
    id <VUIMenuCollectionViewControllerDelegate> _delegate;	// 16 = 0x10
    VUIMenuDataSource *_categories;	// 24 = 0x18
    VUICollectionConfiguration *_collectionConfiguration;	// 32 = 0x20
    VUILegacyCollectionView *_menuCollectionView;	// 40 = 0x28
    UICollectionViewCell *_sizingCell;	// 48 = 0x30
    VUIMenuSectionHeaderCollectionViewCell *_sectionHeaderSizingCell;	// 56 = 0x38
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 64 = 0x40
    NSArray *_mainMenuItems;	// 72 = 0x48
    NSArray *_genreMenuItems;	// 80 = 0x50
    _UIDiffableDataSourceSectionController *_sectionController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000092cb9
@property(retain, nonatomic) _UIDiffableDataSourceSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(retain, nonatomic) NSArray *genreMenuItems; // @synthesize genreMenuItems=_genreMenuItems;
@property(retain, nonatomic) NSArray *mainMenuItems; // @synthesize mainMenuItems=_mainMenuItems;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) VUIMenuSectionHeaderCollectionViewCell *sectionHeaderSizingCell; // @synthesize sectionHeaderSizingCell=_sectionHeaderSizingCell;
@property(retain, nonatomic) UICollectionViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) VUILegacyCollectionView *menuCollectionView; // @synthesize menuCollectionView=_menuCollectionView;
@property(nonatomic) _Bool genresOnlyMenu; // @synthesize genresOnlyMenu=_genresOnlyMenu;
@property(nonatomic) _Bool shouldMarkFirstCategorySelected; // @synthesize shouldMarkFirstCategorySelected=_shouldMarkFirstCategorySelected;
@property(retain, nonatomic) VUICollectionConfiguration *collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(nonatomic) _Bool isInPrimaryOnlyMode; // @synthesize isInPrimaryOnlyMode=_isInPrimaryOnlyMode;
@property(nonatomic) _Bool shouldDeselectOnViewAppear; // @synthesize shouldDeselectOnViewAppear=_shouldDeselectOnViewAppear;
@property(nonatomic) _Bool shouldShowBackButton; // @synthesize shouldShowBackButton=_shouldShowBackButton;
@property(nonatomic) _Bool shouldShowLeftBarButton; // @synthesize shouldShowLeftBarButton=_shouldShowLeftBarButton;
@property(retain, nonatomic) VUIMenuDataSource *categories; // @synthesize categories=_categories;
@property(nonatomic) __weak id <VUIMenuCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_leftBarButton;	// IMP=0x0000000000092808
- (id)_backButton;	// IMP=0x000000000009251d
- (_Bool)_menuHasContent;	// IMP=0x00000000000924cf
- (void)_applySnapshotsToSectionController:(_Bool)arg1;	// IMP=0x000000000009222f
- (id)_createDiffableDataSourceSnapshot;	// IMP=0x00000000000920b8
- (id)_createDiffableDataSource;	// IMP=0x0000000000091dd3
- (void)_setGenreMenuItemsForCategories:(id)arg1;	// IMP=0x0000000000091d6f
- (void)_leftBarButtonSelected:(id)arg1;	// IMP=0x0000000000091bc8
- (void)_backSelected:(id)arg1;	// IMP=0x0000000000091b7e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000091b0c
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000917bb
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000000915fa
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000000000915aa
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000091440
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000009129e
- (void)setTitle:(id)arg1;	// IMP=0x000000000009121a
- (void)updateWithCategories:(id)arg1;	// IMP=0x0000000000090e99
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000090dd5
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000090cce
- (void)viewDidLoad;	// IMP=0x0000000000090c53
- (void)loadView;	// IMP=0x0000000000090a0a
- (id)initWithCategories:(id)arg1 gridConfiguration:(id)arg2;	// IMP=0x00000000000908bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

