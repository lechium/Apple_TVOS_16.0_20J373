//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNActionView, UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNFaceTimeCell
{
    _Bool _isFaceTimeAudioAvailable;	// 8 = 0x8
    id <CNPropertyCellDelegate> _delegate;	// 16 = 0x10
    UILabel *_faceTimeLabel;	// 24 = 0x18
    CNActionView *_actionView1;	// 32 = 0x20
    CNActionView *_actionView2;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004ce10
@property(readonly, nonatomic) CNActionView *actionView2; // @synthesize actionView2=_actionView2;
@property(readonly, nonatomic) CNActionView *actionView1; // @synthesize actionView1=_actionView1;
@property(nonatomic) _Bool isFaceTimeAudioAvailable; // @synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable;
@property(readonly, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;	// IMP=0x000000000004ccc8
- (void)tintColorDidChange;	// IMP=0x000000000004ccc2
- (id)variableConstraints;	// IMP=0x000000000004c9ff
- (id)constantConstraints;	// IMP=0x000000000004c8e4
- (id)rightMostView;	// IMP=0x000000000004c8d2
- (double)minCellHeight;	// IMP=0x000000000004c8c4
- (void)performDefaultAction;	// IMP=0x000000000004c84d
- (id)labelView;	// IMP=0x000000000004c771
- (void)setActionsDataSource:(id)arg1;	// IMP=0x000000000004c76b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000004c566

@end

