//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputSwitcherSegmentControl;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSegmentedTableCell
{
    UIInputSwitcherSegmentControl *_segmentControl;	// 64 = 0x40
}

+ (struct CGSize)preferredSizeWithSegmentCount:(unsigned long long)arg1;	// IMP=0x0060000000857abf
- (void).cxx_destruct;	// IMP=0x0000000000857ce4
@property(readonly, nonatomic) UIInputSwitcherSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
- (void)setUsesDarkTheme:(_Bool)arg1;	// IMP=0x0000000000857c5c
- (void)layoutSubviews;	// IMP=0x0000000000857bb8
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000857b48
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000857b17
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000008579e7

@end
