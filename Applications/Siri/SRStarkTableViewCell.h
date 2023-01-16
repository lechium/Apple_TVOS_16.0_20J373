//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class SRCarPlayFocusView, UILabel;

@interface SRStarkTableViewCell : UITableViewCell
{
    SRCarPlayFocusView *_focusView;	// 8 = 0x8
    _Bool _showFavoriteStar;	// 16 = 0x10
    UILabel *_secondaryLabel;	// 24 = 0x18
    UILabel *_tertiaryLabel;	// 32 = 0x20
}

+ (double)_tableViewCellVerticalEdgesBuffer;	// IMP=0x0040000000017d00
+ (double)_tableViewCellHorizontalEdgesBuffer;	// IMP=0x0010000000017cf2
- (void).cxx_destruct;	// IMP=0x00200000000182ed
@property(nonatomic) _Bool showFavoriteStar; // @synthesize showFavoriteStar=_showFavoriteStar;
@property(readonly, nonatomic) UILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
- (void)_updateAccessoryViewForType:(long long)arg1 favorited:(_Bool)arg2;	// IMP=0x00100000000180de
- (void)_updateViewsForFocus:(_Bool)arg1 highlighted:(_Bool)arg2 selected:(_Bool)arg3 traitCollection:(id)arg4;	// IMP=0x0010000000017d7d
- (id)accessibilityIdentifier;	// IMP=0x0010000000017cde
- (void)layoutSubviews;	// IMP=0x001000000001735a
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x0010000000017283
- (void)setAccessoryType:(long long)arg1;	// IMP=0x00100000000171ac
- (_Bool)canBecomeFocused;	// IMP=0x00100000000171a4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000016ded

@end

