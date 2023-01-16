//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBlurEffect, UIColor, UIFont, UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface UIKBUndoStyling : NSObject
{
    _Bool _undoRedoIconOnly;	// 8 = 0x8
    _Bool _isRTL;	// 9 = 0x9
    _Bool _cutCopyPasteIconOnly;	// 10 = 0xa
    _Bool _tooSmallForInstructionalText;	// 11 = 0xb
    UIBlurEffect *_backgroundBlurEffect;	// 16 = 0x10
    UIVibrancyEffect *_backgroundVibrancyEffect;	// 24 = 0x18
    UIColor *_HUDbackgroundColor;	// 32 = 0x20
    UIColor *_HUDShadowColor;	// 40 = 0x28
    UIColor *_buttonGlyphColorEnabled;	// 48 = 0x30
    UIColor *_buttonGlyphColorPressed;	// 56 = 0x38
    UIColor *_buttonGlyphColorDisabled;	// 64 = 0x40
    UIColor *_elementBackgroundColor;	// 72 = 0x48
    UIColor *_elementCoverColor;	// 80 = 0x50
    double _undoControlMinWidth;	// 88 = 0x58
    double _cutControlMinWidth;	// 96 = 0x60
    long long _appearance;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000b76318
@property(nonatomic) _Bool tooSmallForInstructionalText; // @synthesize tooSmallForInstructionalText=_tooSmallForInstructionalText;
@property(nonatomic) _Bool cutCopyPasteIconOnly; // @synthesize cutCopyPasteIconOnly=_cutCopyPasteIconOnly;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(nonatomic) double cutControlMinWidth; // @synthesize cutControlMinWidth=_cutControlMinWidth;
@property(nonatomic) double undoControlMinWidth; // @synthesize undoControlMinWidth=_undoControlMinWidth;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(nonatomic) _Bool undoRedoIconOnly; // @synthesize undoRedoIconOnly=_undoRedoIconOnly;
@property(retain, nonatomic) UIColor *elementCoverColor; // @synthesize elementCoverColor=_elementCoverColor;
@property(retain, nonatomic) UIColor *elementBackgroundColor; // @synthesize elementBackgroundColor=_elementBackgroundColor;
@property(retain, nonatomic) UIColor *buttonGlyphColorDisabled; // @synthesize buttonGlyphColorDisabled=_buttonGlyphColorDisabled;
@property(retain, nonatomic) UIColor *buttonGlyphColorPressed; // @synthesize buttonGlyphColorPressed=_buttonGlyphColorPressed;
@property(retain, nonatomic) UIColor *buttonGlyphColorEnabled; // @synthesize buttonGlyphColorEnabled=_buttonGlyphColorEnabled;
@property(retain, nonatomic) UIColor *HUDShadowColor; // @synthesize HUDShadowColor=_HUDShadowColor;
@property(retain, nonatomic) UIColor *HUDbackgroundColor; // @synthesize HUDbackgroundColor=_HUDbackgroundColor;
@property(retain, nonatomic) UIVibrancyEffect *backgroundVibrancyEffect; // @synthesize backgroundVibrancyEffect=_backgroundVibrancyEffect;
@property(retain, nonatomic) UIBlurEffect *backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
@property(readonly, nonatomic) UIFont *undoStateControlUnavailableLabelFont;
@property(readonly, nonatomic) UIFont *undoStateControlLabelFont;
@property(readonly, nonatomic) UIFont *undoInteractiveControlLabelFont;
- (void)createDynamicColors;	// IMP=0x0000000000b75e31
- (id)vibrancyEffectForBlur:(id)arg1;	// IMP=0x0000000000b75e18
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(_Bool)arg2;	// IMP=0x0000000000b75d44

@end

