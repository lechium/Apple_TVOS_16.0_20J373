//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray, NSString, TSKSettingItem, TVSettingsCRDPreviewViewController, TVSettingsPhotoChooserViewController;

@interface TVSettingsCRDViewController : TSKViewController
{
    TVSettingsCRDPreviewViewController *_crdPreviewViewController;	// 8 = 0x8
    NSArray *_photoCollectionGroups;	// 16 = 0x10
    TSKSettingItem *_backgroundPhotoSettingItem;	// 24 = 0x18
    TVSettingsPhotoChooserViewController *__CRDBackgroundPhotoViewController;	// 32 = 0x20
}

+ (void)_removeFromHomeAndEnableEveryTimeCode;	// IMP=0x00200000000dffa6
+ (CDUnknownBlockType)_makeRequireCodeEveryTimeHomeChildViewControllerBlock;	// IMP=0x00100000000dfd22
+ (id)crdModeFormatter;	// IMP=0x00100000000de804
- (void).cxx_destruct;	// IMP=0x00200000000e0114
@property(retain, nonatomic) TVSettingsPhotoChooserViewController *_CRDBackgroundPhotoViewController; // @synthesize _CRDBackgroundPhotoViewController=__CRDBackgroundPhotoViewController;
@property(retain, nonatomic) TSKSettingItem *backgroundPhotoSettingItem; // @synthesize backgroundPhotoSettingItem=_backgroundPhotoSettingItem;
@property(retain) NSArray *photoCollectionGroups; // @synthesize photoCollectionGroups=_photoCollectionGroups;
@property(retain, nonatomic) TVSettingsCRDPreviewViewController *crdPreviewViewController; // @synthesize crdPreviewViewController=_crdPreviewViewController;
- (id)_allowedPhotoCollectionGroups;	// IMP=0x00100000000dfc83
- (void)_fetchPhotoCollectionGroups;	// IMP=0x00100000000df8a8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000df7bb
- (void)controller:(id)arg1 didSelectAsset:(id)arg2 inCollection:(id)arg3 collectionGroup:(id)arg4;	// IMP=0x00100000000df63a
- (void)controller:(id)arg1 didSelectCollectionGroup:(id)arg2;	// IMP=0x00100000000df536
- (id)photoCollectionGroupsForController:(id)arg1;	// IMP=0x00100000000df50a
- (void)_showPreview:(id)arg1;	// IMP=0x00100000000df4c6
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000df428
- (id)loadSettingGroups;	// IMP=0x00100000000dea55
- (void)dealloc;	// IMP=0x00100000000de988
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000000de873

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
