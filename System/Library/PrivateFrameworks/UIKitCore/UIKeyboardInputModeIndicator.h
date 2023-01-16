//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputModeIndicator : UIView
{
    NSString *_inputModeIdentifier;	// 8 = 0x8
    UIImageView *_indicatorView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ff0f91
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSString *inputModeIdentifier; // @synthesize inputModeIdentifier=_inputModeIdentifier;
- (void)updateIndicator;	// IMP=0x0000000000ff0e86
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000ff0e05
- (void)setupView;	// IMP=0x0000000000ff09df
- (id)initWithKeyboardInputModeIdentifier:(id)arg1;	// IMP=0x0000000000ff0933

@end

