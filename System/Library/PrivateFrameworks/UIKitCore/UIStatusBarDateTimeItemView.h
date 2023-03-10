//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDateTimeItemView
{
    _Bool _useCustomFadeAnimation;	// 8 = 0x8
    NSString *_dateTimeString;	// 16 = 0x10
}

+ (const char *)_cStringFromData:(CDStruct_8eacfc04 *)arg1;	// IMP=0x0060000000d1e11e
- (void).cxx_destruct;	// IMP=0x0000000000d1e67a
@property(copy, nonatomic) NSString *dateTimeString; // @synthesize dateTimeString=_dateTimeString;
@property(nonatomic) _Bool useCustomFadeAnimation; // @synthesize useCustomFadeAnimation=_useCustomFadeAnimation;
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000d1e5de
- (double)extraRightPadding;	// IMP=0x0000000000d1e598
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000d1e457
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x0000000000d1e208
- (long long)textStyle;	// IMP=0x0000000000d1e1fd
- (id)contentsImage;	// IMP=0x0000000000d1e1de
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000d1e12e
- (_Bool)shouldTintContentImage;	// IMP=0x0000000000d1e126

@end

