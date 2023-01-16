//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu
{
    struct CGSize m_preferredSize;	// 320 = 0x140
    NSArray *_items;	// 336 = 0x150
    CDUnknownBlockType _finishSplitTransitionBlock;	// 344 = 0x158
}

+ (id)activeInstance;	// IMP=0x001000000085d3bf
+ (id)sharedInstance;	// IMP=0x001000000085d32e
- (void).cxx_destruct;	// IMP=0x000000000085da62
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock;
- (void)didFinishSplitTransition;	// IMP=0x000000000085d9bd
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000085d93b
- (void)setSplitAndUndocked:(_Bool)arg1;	// IMP=0x000000000085d834
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000085d82c
- (id)titleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000085d7c1
- (int)visibleItemForIndex:(unsigned long long)arg1;	// IMP=0x000000000085d649
- (unsigned long long)defaultSelectedIndex;	// IMP=0x000000000085d639
- (struct CGSize)preferredSize;	// IMP=0x000000000085d5e7
- (unsigned long long)numberOfItems;	// IMP=0x000000000085d5cb
- (void)actionForItem:(id)arg1;	// IMP=0x000000000085d3f5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000085cf6b

@end
