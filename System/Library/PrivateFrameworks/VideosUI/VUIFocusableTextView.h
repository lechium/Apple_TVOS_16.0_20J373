//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVFocusableTextView.h>

@class NSString, VUILabel, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFocusableTextView : TVFocusableTextView
{
    VUILabel *_computationLabel;	// 8 = 0x8
    VUITextLayout *_textLayout;	// 16 = 0x10
    VUITextLayout *_titleTextLayout;	// 24 = 0x18
}

+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;	// IMP=0x00100000000d845d
+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 titleElement:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;	// IMP=0x00100000000d80f1
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 titleString:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;	// IMP=0x00100000000d7df8
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;	// IMP=0x00100000000d7dd3
- (void).cxx_destruct;	// IMP=0x00000000000d89e6
@property(retain, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(retain, nonatomic) VUILabel *computationLabel; // @synthesize computationLabel=_computationLabel;
- (void)_updateTextColor;	// IMP=0x00000000000d86cc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000d8509
- (double)bottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000000d84ec
- (double)topMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000000d84cf
- (double)vui_baselineOffsetFromBottom;	// IMP=0x00000000000d84b2
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x00000000000d8482

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

