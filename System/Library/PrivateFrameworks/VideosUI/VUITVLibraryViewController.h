//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSIndexPath, NSMutableDictionary, NSSet, NSString, VUIFamilyMember, VUILibraryMenuDataSource, VUIMenuCollectionViewController, VUITVLibraryView, VUIViewControllerContentPresenter;

__attribute__((visibility("hidden")))
@interface VUITVLibraryViewController : UIViewController
{
    VUIFamilyMember *_familyMember;	// 8 = 0x8
    VUIMenuCollectionViewController *_menuCollectionViewController;	// 16 = 0x10
    VUITVLibraryView *_tvLibraryView;	// 24 = 0x18
    UIViewController *_detailViewController;	// 32 = 0x20
    VUILibraryMenuDataSource *_menuDataSource;	// 40 = 0x28
    NSIndexPath *_currentlySelectedIndexPath;	// 48 = 0x30
    NSSet *_validCategories;	// 56 = 0x38
    VUIViewControllerContentPresenter *_contentPresenter;	// 64 = 0x40
    NSMutableDictionary *_entitiesDataSourceForMenuItem;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003b75a
@property(retain, nonatomic) NSMutableDictionary *entitiesDataSourceForMenuItem; // @synthesize entitiesDataSourceForMenuItem=_entitiesDataSourceForMenuItem;
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) NSSet *validCategories; // @synthesize validCategories=_validCategories;
@property(retain, nonatomic) NSIndexPath *currentlySelectedIndexPath; // @synthesize currentlySelectedIndexPath=_currentlySelectedIndexPath;
@property(retain, nonatomic) VUILibraryMenuDataSource *menuDataSource; // @synthesize menuDataSource=_menuDataSource;
@property(retain, nonatomic) UIViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) VUITVLibraryView *tvLibraryView; // @synthesize tvLibraryView=_tvLibraryView;
@property(retain, nonatomic) VUIMenuCollectionViewController *menuCollectionViewController; // @synthesize menuCollectionViewController=_menuCollectionViewController;
@property(retain, nonatomic) VUIFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)_metricsPageTypeForMenuItemAtIndexPath:(id)arg1;	// IMP=0x000000000003b415
- (void)_initializeLibraryViewControllersWithMenuItems:(id)arg1;	// IMP=0x000000000003b144
- (void)_accountsChanged:(id)arg1;	// IMP=0x000000000003afe7
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1;	// IMP=0x000000000003ad46
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;	// IMP=0x000000000003ac66
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;	// IMP=0x000000000003ab7f
- (_Bool)_isDeviceMediaLibraryInitialUpdateInProgress;	// IMP=0x000000000003ab32
- (id)_deviceMediaLibrary;	// IMP=0x000000000003aa5c
- (_Bool)_shouldShowContentView;	// IMP=0x000000000003a9c5
- (void)_showContentOrNoContentView;	// IMP=0x000000000003a965
- (void)_delayedGridUpdate;	// IMP=0x000000000003a21f
- (void)familyMemberViewController:(id)arg1 didSelectFamilyMember:(id)arg2;	// IMP=0x000000000003a149
- (void)didSelectMenuItemAtIndexPath:(id)arg1;	// IMP=0x000000000003a137
- (void)didUpdateFocusToIndexPath:(id)arg1;	// IMP=0x000000000003a0a4
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x0000000000039d4c
- (id)preferredFocusEnvironments;	// IMP=0x0000000000039c7a
- (id)contentScrollView;	// IMP=0x0000000000039c72
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000039bc2
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000039af9
- (void)viewDidLoad;	// IMP=0x0000000000039221
- (void)loadView;	// IMP=0x0000000000039162
- (void)dealloc;	// IMP=0x0000000000038d64
- (id)initWithMenuDataSource:(id)arg1;	// IMP=0x0000000000038cbd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

