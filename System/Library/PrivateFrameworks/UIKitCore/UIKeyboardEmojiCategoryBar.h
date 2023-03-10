//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardEmojiGraphicsTraits, UIResponder, UIView;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar
{
    unsigned long long _selectedIndex;	// 176 = 0xb0
    UIView *_scrubView;	// 184 = 0xb8
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 192 = 0xc0
    _Bool _isScrubbing;	// 200 = 0xc8
    double _scrubStartXLocation;	// 208 = 0xd0
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;	// 216 = 0xd8
}

+ (_Bool)wantsScreenTraits;	// IMP=0x00600000009c95af
- (void).cxx_destruct;	// IMP=0x00000000009caf0f
@property(nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(retain, nonatomic) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
@property(retain, nonatomic) UIView *scrubView; // @synthesize scrubView=_scrubView;
@property unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009cad38
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009cab8f
- (unsigned long long)selectedIndexForTouches:(id)arg1;	// IMP=0x00000000009caa4f
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009ca6b0
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009ca5d1
- (struct CGRect)categorySelectedCircleRect:(long long)arg1;	// IMP=0x00000000009ca465
- (void)animateScrubberToRect:(struct CGRect)arg1;	// IMP=0x00000000009ca27e
- (struct CGRect)frameForDivider:(int)arg1;	// IMP=0x00000000009ca15b
- (unsigned long long)flippedIndexForIndex:(unsigned long long)arg1;	// IMP=0x00000000009ca0e6
- (void)updateCategory;	// IMP=0x00000000009ca071
- (void)updateCategoryOnBar:(unsigned long long)arg1;	// IMP=0x00000000009c9f78
- (void)updateToCategory:(long long)arg1;	// IMP=0x00000000009c9f40
- (void)dimKeys:(id)arg1;	// IMP=0x00000000009c9c7b
- (void)didMoveToWindow;	// IMP=0x00000000009c9bda
- (void)dealloc;	// IMP=0x00000000009c9b65
- (void)prepareForDisplay;	// IMP=0x00000000009c9948
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x00000000009c9933
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;	// IMP=0x00000000009c95b7

@end

