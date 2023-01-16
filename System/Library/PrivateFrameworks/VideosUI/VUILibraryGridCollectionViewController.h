//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSDictionary, NSIndexPath, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionViewCell, UICollectionViewDiffableDataSource, VUICollectionHeaderView, VUIFamilyMember, VUIMediaEntitiesDataSource, VUIMediaEntity, VUIMediaEntityFetchRequest, VUIViewControllerContentPresenter;
@protocol VUILibraryGridCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryGridCollectionViewController : UICollectionViewController
{
    _Bool _requiresRelayout;	// 8 = 0x8
    struct CGSize _cellSize;	// 16 = 0x10
    NSMutableDictionary *_cellMetrics;	// 32 = 0x20
    VUICollectionHeaderView *_sizingHeaderView;	// 40 = 0x28
    _Bool _hideLockupTitles;	// 48 = 0x30
    _Bool _forceBackButton;	// 49 = 0x31
    _Bool _waitingForFetch;	// 50 = 0x32
    VUIFamilyMember *_familyMember;	// 56 = 0x38
    id <VUILibraryGridCollectionViewControllerDelegate> _delegate;	// 64 = 0x40
    long long _gridFilter;	// 72 = 0x48
    UIBarButtonItem *_libraryBarButton;	// 80 = 0x50
    NSString *_pageType;	// 88 = 0x58
    VUIMediaEntitiesDataSource *_entitiesDataSource;	// 96 = 0x60
    VUIMediaEntityFetchRequest *_fetchRequest;	// 104 = 0x68
    UICollectionViewCell *_sizingCell;	// 112 = 0x70
    double _cellWidth;	// 120 = 0x78
    UIBarButtonItem *_currentNavBarButtonItem;	// 128 = 0x80
    VUIViewControllerContentPresenter *_contentPresenter;	// 136 = 0x88
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 144 = 0x90
    NSArray *_mediaEntities;	// 152 = 0x98
    long long _gridStyle;	// 160 = 0xa0
    long long _gridType;	// 168 = 0xa8
    VUIMediaEntity *_currentlySelectedMediaEntity;	// 176 = 0xb0
    NSIndexPath *_indexPathForLastFocusedItem;	// 184 = 0xb8
    NSDictionary *_artworkInfoDictionary;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000167d4b
@property(retain, nonatomic) NSDictionary *artworkInfoDictionary; // @synthesize artworkInfoDictionary=_artworkInfoDictionary;
@property(retain, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
@property(retain, nonatomic) VUIMediaEntity *currentlySelectedMediaEntity; // @synthesize currentlySelectedMediaEntity=_currentlySelectedMediaEntity;
@property(nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(retain, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(nonatomic) _Bool waitingForFetch; // @synthesize waitingForFetch=_waitingForFetch;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) UIBarButtonItem *currentNavBarButtonItem; // @synthesize currentNavBarButtonItem=_currentNavBarButtonItem;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UICollectionViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) VUIMediaEntitiesDataSource *entitiesDataSource; // @synthesize entitiesDataSource=_entitiesDataSource;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(nonatomic) _Bool forceBackButton; // @synthesize forceBackButton=_forceBackButton;
@property(retain, nonatomic) UIBarButtonItem *libraryBarButton; // @synthesize libraryBarButton=_libraryBarButton;
@property(nonatomic) _Bool hideLockupTitles; // @synthesize hideLockupTitles=_hideLockupTitles;
@property(nonatomic) long long gridFilter; // @synthesize gridFilter=_gridFilter;
@property(nonatomic) __weak id <VUILibraryGridCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VUIFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (void)_updateVisibleCellsWithArtwork;	// IMP=0x000000000016766d
- (void)_applySnapshotFromEntitiesAndAnimateDifferences:(_Bool)arg1;	// IMP=0x00000000001674e8
- (void)_applyInitialSnapshot;	// IMP=0x0000000000167194
- (void)_updateCurrentViewIfNeeded;	// IMP=0x0000000000167102
- (void)_updateLayoutForSize:(struct CGSize)arg1;	// IMP=0x0000000000166f77
- (void)_updateNavigationBarPadding;	// IMP=0x0000000000166dac
- (double)_computeBottomMargin;	// IMP=0x0000000000166d9e
- (void)_configureSizingCellForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000166b64
- (id)_getEntityIdentifiersFromEntities;	// IMP=0x0000000000166999
- (id)_createDiffableDataSourceSnapshot;	// IMP=0x000000000016682f
- (id)_createDiffableDataSource;	// IMP=0x000000000016653a
- (id)_createCollectionViewFlowLayout;	// IMP=0x00000000001664da
- (id)_createCollectionView;	// IMP=0x00000000001662ab
- (void)_tvOSHandleCellSelectionAtIndexPath:(id)arg1;	// IMP=0x0000000000165dcc
- (void)_showExtrasForMediaItem:(id)arg1;	// IMP=0x0000000000165a48
- (void)_startPlaybackWithMediaItem:(id)arg1;	// IMP=0x00000000001656e1
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000001652b2
- (void)_playPausePressed:(id)arg1;	// IMP=0x00000000001650a0
- (void)_addPlayPauseHandler;	// IMP=0x000000000016500c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000164f25
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000164e3c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000164e27
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000164cd8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000164b3e
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000164ac6
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000164ab4
- (void)dataSourceDidFinishFetchingArtwork:(id)arg1;	// IMP=0x00000000001649c1
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x0000000000164836
- (void)viewDidLayoutSubviews;	// IMP=0x000000000016473c
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000164673
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001645c4
- (void)viewDidLoad;	// IMP=0x00000000001640ba
- (void)loadView;	// IMP=0x0000000000164049
- (void)updateWithLatestMediaEntities:(id)arg1;	// IMP=0x0000000000163fbd
- (void)dealloc;	// IMP=0x0000000000163f72
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000163e83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

