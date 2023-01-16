//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, UIStatusBarForegroundView, UIStatusBarItemView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLayoutManager : NSObject
{
    int _region;	// 8 = 0x8
    UIStatusBarItemView *_itemViews[51];	// 16 = 0x10
    _Bool _persistentAnimationsEnabled;	// 424 = 0x1a8
    _Bool _usesVerticalLayout;	// 425 = 0x1a9
    UIStatusBarForegroundView *_foregroundView;	// 432 = 0x1b0
    NSNumber *_assignedStartPosition;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x0000000000db721c
@property(retain, nonatomic) NSNumber *assignedStartPosition; // @synthesize assignedStartPosition=_assignedStartPosition;
@property(readonly, nonatomic) _Bool usesVerticalLayout; // @synthesize usesVerticalLayout=_usesVerticalLayout;
@property(nonatomic) _Bool persistentAnimationsEnabled; // @synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled;
@property(nonatomic) __weak UIStatusBarForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;
- (id)visibleItemViewAtPoint:(struct CGPoint)arg1 inForegroundView:(id)arg2;	// IMP=0x0000000000db6cee
- (id)itemViewOfType:(int)arg1;	// IMP=0x0000000000db6cdd
- (id)allItemViews;	// IMP=0x0000000000db6ccb
- (struct CGRect)_repositionedNewFrame:(struct CGRect)arg1 sizeDelta:(double)arg2;	// IMP=0x0000000000db6b05
- (double)_positionAfterPlacingItemView:(id)arg1 startPosition:(double)arg2 firstView:(_Bool)arg3;	// IMP=0x0000000000db69a7
- (struct CGRect)_frameForItemView:(id)arg1 startPosition:(double)arg2 firstView:(_Bool)arg3;	// IMP=0x0000000000db6709
- (double)_startPosition;	// IMP=0x0000000000db62e8
- (id)_itemViewsSortedForLayout;	// IMP=0x0000000000db61b9
- (id)_itemViews;	// IMP=0x0000000000db6145
- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;	// IMP=0x0000000000db5fce
- (id)_viewForItem:(id)arg1;	// IMP=0x0000000000db5fa3
- (double)_sizeNeededForItemView:(id)arg1;	// IMP=0x0000000000db5e96
- (void)itemView:(id)arg1 sizeChangedBy:(double)arg2;	// IMP=0x0000000000db5dad
- (_Bool)itemIsVisible:(id)arg1;	// IMP=0x0000000000db5d69
- (struct CGRect)rectForItems:(id)arg1;	// IMP=0x0000000000db59c4
- (double)removeOverlap:(double)arg1 fromItems:(id)arg2;	// IMP=0x0000000000db575c
- (double)distributeOverlap:(double)arg1 amongItems:(id)arg2;	// IMP=0x0000000000db531e
- (void)clearOverlapFromItems:(id)arg1;	// IMP=0x0000000000db516a
- (double)sizeNeededForItems:(id)arg1;	// IMP=0x0000000000db5001
- (double)sizeNeededForItem:(id)arg1;	// IMP=0x0000000000db4faa
- (void)makeVisibleItemsPerformPendedActions;	// IMP=0x0000000000db4e4d
- (void)positionInvisibleItems;	// IMP=0x0000000000db4c22
- (void)removeDisabledItems:(_Bool *)arg1;	// IMP=0x0000000000db4b84
- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000db485e
- (_Bool)updateDoubleHeightItem;	// IMP=0x0000000000db483d
- (_Bool)prepareDoubleHeightItemWithEnabledItems:(_Bool *)arg1;	// IMP=0x0000000000db47c2
- (_Bool)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000db46e5
- (_Bool)_processDelta:(double)arg1 forView:(id)arg2;	// IMP=0x0000000000db460a
- (void)_positionNewItemViewsWithEnabledItems:(_Bool *)arg1;	// IMP=0x0000000000db42cd
- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(_Bool *)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(_Bool *)arg5 itemDisappearing:(_Bool *)arg6;	// IMP=0x0000000000db4132
- (_Bool)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000db3f92
- (void)setVisibilityOfItemType:(int)arg1 visible:(_Bool)arg2;	// IMP=0x0000000000db3f6f
- (void)setVisibilityOfItem:(id)arg1 visible:(_Bool)arg2;	// IMP=0x0000000000db3f2d
- (void)setVisibilityOfAllItems:(_Bool)arg1;	// IMP=0x0000000000db3def
- (_Bool)prepareEnabledItems:(_Bool *)arg1 withData:(id)arg2 actions:(int)arg3;	// IMP=0x0000000000db3d3c
- (void)_addOriginDelta:(double)arg1 toPoint:(struct CGPoint *)arg2;	// IMP=0x0000000000db3d08
- (void)_setOrigin:(double)arg1 forPoint:(struct CGPoint *)arg2;	// IMP=0x0000000000db3cd9
- (double)_dimensionForSize:(struct CGSize)arg1;	// IMP=0x0000000000db3ca6
- (void)dealloc;	// IMP=0x0000000000db3c19
- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2 usesVerticalLayout:(_Bool)arg3;	// IMP=0x0000000000db3b99

@end
