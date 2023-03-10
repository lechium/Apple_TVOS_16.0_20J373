//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKTableViewCell.h"

@class NSDate, NSLayoutConstraint, NSString, UIImage, UIImageView, UITextView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKIncidentDetailCell : MKTableViewCell
{
    _MKUILabel *_titleLabel;	// 8 = 0x8
    UIImageView *_iconImageView;	// 16 = 0x10
    UITextView *_descriptionLabel;	// 24 = 0x18
    _MKUILabel *_lastUpdatedLabel;	// 32 = 0x20
    NSLayoutConstraint *_titleFirstBaselineToTopConstraint;	// 40 = 0x28
    NSLayoutConstraint *_descriptionLastBaselineToBottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;	// 56 = 0x38
    NSLayoutConstraint *_lastUpdatedLastBaselineToBottomConstraint;	// 64 = 0x40
    NSString *_title;	// 72 = 0x48
    UIImage *_icon;	// 80 = 0x50
    NSDate *_lastUpdated;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000016a562
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x000000000016a4db
- (void)_updateLastUpdatedLabel;	// IMP=0x000000000016a298
@property(copy, nonatomic) NSString *incidentDescription;
- (void)didMoveToWindow;	// IMP=0x000000000016a178
- (void)_contentSizeCategoryDidChange;	// IMP=0x000000000016a0b4
- (void)dealloc;	// IMP=0x000000000016a03f
- (void)_updateConstraintValues;	// IMP=0x0000000000169f0b
- (void)updateConstraints;	// IMP=0x0000000000169b82
- (void)_setConstraints;	// IMP=0x0000000000169376
- (void)infoCardThemeChanged;	// IMP=0x0000000000169211
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000168b4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

