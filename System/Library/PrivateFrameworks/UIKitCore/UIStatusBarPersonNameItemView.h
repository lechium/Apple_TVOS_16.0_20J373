//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarPersonNameItemView
{
    NSString *_personNameString;	// 8 = 0x8
    double _letterSpacing;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000d160be
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000d16064
- (long long)legibilityStyle;	// IMP=0x0000000000d1601e
- (double)extraRightPadding;	// IMP=0x0000000000d15fd8
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000d15f5c
- (double)resetContentOverlap;	// IMP=0x0000000000d15ef9
- (id)contentsImage;	// IMP=0x0000000000d15ec4
- (_Bool)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2;	// IMP=0x0000000000d15b3e
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000d15abd
- (double)standardPadding;	// IMP=0x0000000000d15a86

@end

