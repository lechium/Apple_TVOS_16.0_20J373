//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCharacterPicker
{
    UIKeyboardEmojiCategory *_category;	// 40 = 0x28
}

+ (_Bool)wantsScreenTraits;	// IMP=0x00600000009e1005
- (void).cxx_destruct;	// IMP=0x00000000009e2124
- (void)setCategory:(id)arg1;	// IMP=0x00000000009e2110
- (id)category;	// IMP=0x00000000009e20f7
- (void)updateToCategory:(long long)arg1;	// IMP=0x00000000009e1dd7
- (void)didMoveToWindow;	// IMP=0x00000000009e1c10
- (double)snappedYOffsetForOffset:(double)arg1;	// IMP=0x00000000009e16e1
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000009e16af
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000000009e16a1
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000000009e1693
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000009e15a9
- (void)dealloc;	// IMP=0x00000000009e156f
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x00000000009e100d

@end

