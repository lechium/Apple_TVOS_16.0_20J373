//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TVPhotoCollectionGroup, TVSettingsPhotoCollectionPreviewViewController, UIVisualEffectView;
@protocol TVSettingsPhotoCollectionGroupViewControllerDelegate;

@interface TVSettingsPhotoCollectionGroupViewController : TSKViewController
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    id <TVSettingsPhotoCollectionGroupViewControllerDelegate> _delegate;	// 16 = 0x10
    TVPhotoCollectionGroup *_photoCollectionGroup;	// 24 = 0x18
    TVSettingsPhotoCollectionPreviewViewController *_photoPreviewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000c96ff
@property(retain, nonatomic) TVSettingsPhotoCollectionPreviewViewController *photoPreviewController; // @synthesize photoPreviewController=_photoPreviewController;
@property(retain, nonatomic) TVPhotoCollectionGroup *photoCollectionGroup; // @synthesize photoCollectionGroup=_photoCollectionGroup;
@property(nonatomic) __weak id <TVSettingsPhotoCollectionGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePhotoCollectionWithIndexPath:(id)arg1;	// IMP=0x00100000000c95a6
- (id)_localizedTitleForPhotoCollection:(id)arg1;	// IMP=0x00100000000c946e
- (void)controller:(id)arg1 didSelectAsset:(id)arg2;	// IMP=0x00100000000c9382
- (_Bool)hasFullscreenPreview;	// IMP=0x00100000000c937a
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000c934e
- (id)title;	// IMP=0x00100000000c9346
- (id)loadSettingGroups;	// IMP=0x00100000000c9030
- (void)viewDidLoad;	// IMP=0x00100000000c88fa
- (id)initWithPhotoCollectionGroup:(id)arg1;	// IMP=0x00100000000c8809

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

