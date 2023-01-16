//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

@class NSArray;

@interface UICollectionView (VideosUICore)
+ (id)collectionViewWithFrame:(struct CGRect)arg1 parentView:(id)arg2 collectionViewLayout:(id)arg3;	// IMP=0x002000000003d31b
+ (id)_vui_indexPathsWithIndexSet:(id)arg1 andSection:(unsigned long long)arg2;	// IMP=0x00200000000e3cfb
- (id)vui_cellForItemAtIndexPath:(id)arg1;	// IMP=0x001000000003dc20
- (id)vui_indexPathForCell:(id)arg1;	// IMP=0x001000000003dc0e
- (_Bool)vui_isIndexPathValid:(id)arg1;	// IMP=0x001000000003db78
- (id)_preciseIndexPathsForVisibleItems:(_Bool)arg1;	// IMP=0x001000000003d7b4
@property(readonly, nonatomic) NSArray *vuiPreciseIndexPathsForFullyVisibleItems;
@property(readonly, nonatomic) NSArray *vuiPreciseIndexPathsForVisibleItems;
@property(readonly, nonatomic) NSArray *vuiIndexPathsForVisibleItems;
@property(readonly, nonatomic) NSArray *vuiVisibleCells;
- (void)vui_setLayout:(id)arg1;	// IMP=0x001000000003d753
- (id)vui_dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x001000000003d741
- (id)vui_dequeueReusableCellWithIdentifier:(id)arg1 indexPath:(id)arg2;	// IMP=0x001000000003d72f
- (void)vui_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x001000000003d71d
- (void)vui_registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;	// IMP=0x001000000003d70b
- (void)vui_registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;	// IMP=0x001000000003d6f9
- (void)setVuiContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x001000000003d6e7
@property(nonatomic) struct CGPoint vuiContentOffset;
@property(nonatomic) struct UIEdgeInsets vuiContentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets vuiSafeAreaInsets;
@property(readonly, nonatomic) struct CGSize vuiContentSize;
@property(readonly, nonatomic) struct CGRect vuiBounds;
@property(readonly, nonatomic) struct CGSize vuiSize;
- (void)_vui_applyItemUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e39d6
- (void)_vui_applySectionUpdateChanges:(id)arg1 applyChangeBlock:(CDUnknownBlockType)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e36d3
- (void)_vui_applyUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3 updateDataSourceBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e35d5
- (void)_vui_applyMoveChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e31ea
- (void)_vui_applyInsertChange:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e2f2e
- (void)_vui_applyDeleteChange:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e2c73
- (void)_vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 applyChangeBlock:(CDUnknownBlockType)arg4 shouldWrapInUpdate:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e263f
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 applyChangeBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e2623
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e2601
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e25e9
- (void)vui_applyChangeSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e25d2
@end

