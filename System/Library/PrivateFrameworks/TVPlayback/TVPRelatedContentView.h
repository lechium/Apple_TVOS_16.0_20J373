//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSLayoutConstraint, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TVPRelatedContentView : UIView
{
    double _presentationProgress;	// 8 = 0x8
    NSMutableDictionary *_viewsByContentType;	// 16 = 0x10
    NSMutableDictionary *_preferredSizeByContentType;	// 24 = 0x18
    NSDictionary *_containersByContentType;	// 32 = 0x20
    NSLayoutConstraint *_secondaryWidthConstraint;	// 40 = 0x28
    NSLayoutConstraint *_tertiaryWidthConstraint;	// 48 = 0x30
    NSLayoutConstraint *_tertiaryHeightConstraint;	// 56 = 0x38
    NSLayoutConstraint *_leadingConstraint;	// 64 = 0x40
    NSLayoutConstraint *_primaryTrailingConstraint;	// 72 = 0x48
    NSLayoutConstraint *_primaryTopConstraint;	// 80 = 0x50
    NSLayoutConstraint *_primaryBottomConstraint;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000006ddec
@property(retain, nonatomic) NSLayoutConstraint *primaryBottomConstraint; // @synthesize primaryBottomConstraint=_primaryBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryTopConstraint; // @synthesize primaryTopConstraint=_primaryTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryTrailingConstraint; // @synthesize primaryTrailingConstraint=_primaryTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *tertiaryHeightConstraint; // @synthesize tertiaryHeightConstraint=_tertiaryHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *tertiaryWidthConstraint; // @synthesize tertiaryWidthConstraint=_tertiaryWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondaryWidthConstraint; // @synthesize secondaryWidthConstraint=_secondaryWidthConstraint;
@property(retain, nonatomic) NSDictionary *containersByContentType; // @synthesize containersByContentType=_containersByContentType;
@property(retain, nonatomic) NSMutableDictionary *preferredSizeByContentType; // @synthesize preferredSizeByContentType=_preferredSizeByContentType;
@property(retain, nonatomic) NSMutableDictionary *viewsByContentType; // @synthesize viewsByContentType=_viewsByContentType;
@property(nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
- (void)setView:(id)arg1 forContentType:(long long)arg2;	// IMP=0x000000000006da27
- (id)viewForContentType:(long long)arg1;	// IMP=0x000000000006d9a7
- (void)setPreferredSize:(struct CGSize)arg1 forContentType:(long long)arg2;	// IMP=0x000000000006d62f
- (struct CGSize)preferredSizeForContentType:(long long)arg1;	// IMP=0x000000000006d57c
- (id)_keyForContentType:(long long)arg1;	// IMP=0x000000000006d563
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006d51f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006cd35

@end

