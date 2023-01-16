//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UICollectionView, _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout;
@protocol _UICollectionTableIndexOverlayHost;

__attribute__((visibility("hidden")))
@interface _UICollectionTableIndexOverlaySelectionView : UIView
{
    UICollectionView *_collectionView;	// 8 = 0x8
    _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;	// 16 = 0x10
    id <_UICollectionTableIndexOverlayHost> _host;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000e3a791
- (void)reloadData;	// IMP=0x0000000000e3a774
- (void)_setIndexColor:(id)arg1;	// IMP=0x0000000000e3a762
- (void)_doneTapped;	// IMP=0x0000000000e3a72c
- (void)_cellTapped:(id)arg1;	// IMP=0x0000000000e3a62e
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000e3a528
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000e3a3c1
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000e3a359
- (void)layoutSubviews;	// IMP=0x0000000000e39f3e
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000e39d5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

