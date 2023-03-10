//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKCustomSeparatorCell.h"

@class MKTransitInfoLabelView, NSLayoutConstraint, UIButton, _MKUILabel;
@protocol GEOTransitConnectionInfo, _MKTransitConnectionCellDelegate;

__attribute__((visibility("hidden")))
@interface _MKTransitConnectionCell : MKCustomSeparatorCell
{
    _MKUILabel *_nameLabel;	// 8 = 0x8
    MKTransitInfoLabelView *_transitInfoLabel;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
    NSLayoutConstraint *_nameLabelToTopConstraint;	// 32 = 0x20
    NSLayoutConstraint *_transitInfoToNameConstraint;	// 40 = 0x28
    id <GEOTransitConnectionInfo> _connectionInfo;	// 48 = 0x30
    id <_MKTransitConnectionCellDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000016e2c0
@property(nonatomic) __weak id <_MKTransitConnectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <GEOTransitConnectionInfo> connectionInfo; // @synthesize connectionInfo=_connectionInfo;
- (void)_buttonSelected;	// IMP=0x000000000016e236
- (void)_updateConstraintValues;	// IMP=0x000000000016e086
- (void)_contentSizeCategoryDidChange;	// IMP=0x000000000016de53
- (void)dealloc;	// IMP=0x000000000016ddde
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000016d573

@end

