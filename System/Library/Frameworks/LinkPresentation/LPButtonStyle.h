//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPPadding, LPPointUnit, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface LPButtonStyle : NSObject
{
    _Bool _ignoresInvertColors;	// 8 = 0x8
    _Bool _enableUserInteractionForDecorativeButton;	// 9 = 0x9
    _Bool _showsChevronForSingleAction;	// 10 = 0xa
    UIColor *_foregroundColor;	// 16 = 0x10
    UIColor *_backgroundColor;	// 24 = 0x18
    UIColor *_menuBackgroundColor;	// 32 = 0x20
    UIFont *_font;	// 40 = 0x28
    UIFont *_menuFont;	// 48 = 0x30
    LPPadding *_padding;	// 56 = 0x38
    LPPadding *_margin;	// 64 = 0x40
    LPPointUnit *_menuMinimumWidth;	// 72 = 0x48
    LPPointUnit *_minimumWidth;	// 80 = 0x50
    LPPointUnit *_minimumHeight;	// 88 = 0x58
    LPPointUnit *_height;	// 96 = 0x60
    LPPointUnit *_additionalVerticalPadding;	// 104 = 0x68
    LPPointUnit *_indicatorSpacing;	// 112 = 0x70
}

+ (id)systemPillButtonStyleForPlatform:(long long)arg1;	// IMP=0x006000000004070a
- (void).cxx_destruct;	// IMP=0x00000000000410b4
@property(nonatomic) _Bool showsChevronForSingleAction; // @synthesize showsChevronForSingleAction=_showsChevronForSingleAction;
@property(nonatomic) _Bool enableUserInteractionForDecorativeButton; // @synthesize enableUserInteractionForDecorativeButton=_enableUserInteractionForDecorativeButton;
@property(nonatomic) _Bool ignoresInvertColors; // @synthesize ignoresInvertColors=_ignoresInvertColors;
@property(retain, nonatomic) LPPointUnit *indicatorSpacing; // @synthesize indicatorSpacing=_indicatorSpacing;
@property(retain, nonatomic) LPPointUnit *additionalVerticalPadding; // @synthesize additionalVerticalPadding=_additionalVerticalPadding;
@property(retain, nonatomic) LPPointUnit *height; // @synthesize height=_height;
@property(retain, nonatomic) LPPointUnit *minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(retain, nonatomic) LPPointUnit *minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(retain, nonatomic) LPPointUnit *menuMinimumWidth; // @synthesize menuMinimumWidth=_menuMinimumWidth;
@property(retain, nonatomic) LPPadding *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIFont *menuFont; // @synthesize menuFont=_menuFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *menuBackgroundColor; // @synthesize menuBackgroundColor=_menuBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (id)init;	// IMP=0x000000000004067f

@end
